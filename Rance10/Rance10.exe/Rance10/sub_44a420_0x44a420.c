// 函数: sub_44a420
// 地址: 0x44a420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &bridgemessage::CBridgeMessageQueue::`vftable'
sub_44a470(arg1)
sub_44a500(&arg1[3])
int32_t result = sub_403160(arg1[3], 1, 8)
arg1[3] = 0
arg1[1] = &thread::CCriticalSection::`vftable'
int32_t* ecx_1 = arg1[2]

if (ecx_1 == 0)
    return result

return (**ecx_1)(1)
