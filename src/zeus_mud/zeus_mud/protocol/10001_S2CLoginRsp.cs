//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: 10001_S2CLoginRsp.proto
namespace Protocol
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"S2CLoginRsp")]
  public partial class S2CLoginRsp : global::ProtoBuf.IExtensible
  {
    public S2CLoginRsp() {}
    
    private bool _login_result;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"login_result", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public bool login_result
    {
      get { return _login_result; }
      set { _login_result = value; }
    }
    private byte[] _failed_reason;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"failed_reason", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] failed_reason
    {
      get { return _failed_reason; }
      set { _failed_reason = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}