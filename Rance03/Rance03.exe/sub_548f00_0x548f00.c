// 函数: sub_548f00
// 地址: 0x548f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0xdc) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0x70) = 0
sub_5393b0(arg1 + 0x24)
*(arg1 + 4) = 0
bool cond:0 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0
char* eax

if (cond:0)
    eax = arg1 + 8
else
    eax = *(arg1 + 8)

*eax = 0

if (arg3 != 0 && arg9 != 0)
    if (arg1 + 8 != arg9 + 4)
        sub_401ff0(arg1 + 8, arg9 + 4, 0, 0xffffffff)
    
    *(arg1 + 0xd4) = arg3
    *(arg1 + 0xd8) = arg4
    int32_t eax_2
    eax_2.b = *(arg9 + 0x24)
    *(arg1 + 0x20) = eax_2.b
    *(arg1 + 0x21) = sub_548780(arg3)
    *(arg1 + 0x22) = *(arg9 + 0x25)
    *(arg1 + 0x58) = arg8
    *(arg1 + 0x5b) = *(arg9 + 0x74)
    *(arg1 + 4) = arg9
    *(arg1 + 0x59) = *(arg9 + 0x71)
    *(arg1 + 0x5a) = *(arg9 + 0x72)
    *(arg1 + 0x5c) = *(arg9 + 0x73)
    int32_t eax_5
    int32_t ecx_4
    int32_t edx_2
    eax_5, ecx_4, edx_2 = sub_539360(arg1 + 0x24, arg5, arg8, arg9 + 0x34, arg7, arg6)
    
    if (eax_5.b != 0)
        eax_5.b = 1
        return eax_5
    
    sub_59f4e0(eax_5, edx_2, ecx_4, 0x6e3ca4, arg2)

eax.b = 0
return eax
