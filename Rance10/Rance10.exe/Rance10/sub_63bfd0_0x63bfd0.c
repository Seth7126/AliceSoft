// 函数: sub_63bfd0
// 地址: 0x63bfd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &systemservice::CApp::`vftable'
arg1[0x19] = &bridgemessage::CBridgeMessageQueue::`vftable'
sub_44a470(&arg1[0x19])
sub_44a500(&arg1[0x1c])
sub_403160(arg1[0x1c], 1, 8)
arg1[0x1c] = 0
arg1[0x1a] = &thread::CCriticalSection::`vftable'
int32_t* ecx_2 = arg1[0x1b]

if (ecx_2 != 0)
    (**ecx_2)(1)

arg1[0x11] = &bridgemessage::CBridgeMessageQueue::`vftable'
sub_44a470(&arg1[0x11])
sub_44a500(&arg1[0x14])
sub_403160(arg1[0x14], 1, 8)
arg1[0x14] = 0
arg1[0x12] = &thread::CCriticalSection::`vftable'
int32_t* ecx_5 = arg1[0x13]

if (ecx_5 != 0)
    (**ecx_5)(1)

sub_63ca90(&arg1[0xe])
return sub_403160(arg1[0xe], 1, 0x24)
