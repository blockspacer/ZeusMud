//
// SessionFactory.cpp
//
// $Id: //poco/1.4/Data/src/SessionFactory.cpp#1 $
//
// Library: Data
// Package: DataCore
// Module:  SessionFactory
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/Data/SessionFactory.h"


namespace Poco {
namespace Data {


SessionFactory::SessionFactory()
{
}


SessionFactory::~SessionFactory()
{
}


namespace
{
	static SessionFactory sessionFactory;
}


SessionFactory& SessionFactory::instance()
{
	return sessionFactory;
}


void SessionFactory::add(const std::string& key, Connector* pIn)
{
	Poco::FastMutex::ScopedLock lock(_mutex);
	SessionInfo info(pIn);
	std::pair<Connectors::iterator, bool> res = _connectors.insert(std::make_pair(key, info));
	if (!res.second)
	{
		res.first->second.cnt++;
	}
}


void SessionFactory::remove(const std::string& key)
{
	Poco::FastMutex::ScopedLock lock(_mutex);
	Connectors::iterator it = _connectors.find(key);
	poco_assert (_connectors.end() != it);

	--(it->second.cnt);
	if (it->second.cnt == 0)
		_connectors.erase(it);
}


Session SessionFactory::create(const std::string& key, const std::string& connectionString)
{
	Poco::FastMutex::ScopedLock lock(_mutex);
	Connectors::iterator it = _connectors.find(key);
	poco_assert (_connectors.end() != it);

	return Session(it->second.ptrSI->createSession(connectionString));
}


SessionFactory::SessionInfo::SessionInfo(Connector* pSI): 
	cnt(1), 
	ptrSI(pSI)
{
}


} } // namespace Poco::Data
