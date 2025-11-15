// 函数: sub_44a3c0
// 地址: 0x44a3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &bridgemessage::CBridgeMessageQueue::`vftable'
sub_44a470(arg1)
sub_44a500(&arg1[3])
sub_403160(arg1[3], 1, 8)
arg1[3] = 0
arg1[1] = &thread::CCriticalSection::`vftable'
int32_t* ecx_1 = arg1[2]

if (ecx_1 != 0)
    (**ecx_1)(1)

if ((arg2 & 1) != 0)
    int32_t var_c_1 = 0x20
    operator new(arg1)

return arg1
