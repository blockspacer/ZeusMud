//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: 20001_S2CChatMessageNotify.proto
namespace Protocol
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"S2CChatMessageNotify")]
  public partial class S2CChatMessageNotify : global::ProtoBuf.IExtensible
  {
    public S2CChatMessageNotify() {}
    
    private int _chat_type;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"chat_type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int chat_type
    {
      get { return _chat_type; }
      set { _chat_type = value; }
    }

    private byte[] _chat_sender_nickname = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"chat_sender_nickname", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public byte[] chat_sender_nickname
    {
      get { return _chat_sender_nickname; }
      set { _chat_sender_nickname = value; }
    }

    private ulong _chat_sender_guid = default(ulong);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"chat_sender_guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong chat_sender_guid
    {
      get { return _chat_sender_guid; }
      set { _chat_sender_guid = value; }
    }
    private byte[] _chat_content;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"chat_content", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] chat_content
    {
      get { return _chat_content; }
      set { _chat_content = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}