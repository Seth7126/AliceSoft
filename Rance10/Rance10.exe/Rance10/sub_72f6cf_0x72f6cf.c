// 函数: sub_72f6cf
// 地址: 0x72f6cf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_4043e0(arg1 - 0x20) __tailcall
