// 函数: sub_64ef20
// 地址: 0x64ef20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x28) = *(arg1 + 0x24)
*(arg1 + 0x34) = *(arg1 + 0x30)
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0
__builtin_memset(arg1 + 8, 0, 0x14)
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0

if (arg2 s<= 0 || arg3 s<= 0)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

*(arg1 + 0x1c) = (arg2 + 7) & 0xfffffff8
*(arg1 + 0x28) = *(arg1 + 0x24)
int32_t eax_6 = *(arg1 + 0x1c) * arg3
*(arg1 + 0x3c) = 0
sub_403540(arg1 + 0x30, eax_6 + 0x18)
int32_t eax_9 = *(arg1 + 0x30) + 7
*(arg1 + 0xc) = arg3
*(arg1 + 8) = arg2
*(arg1 + 0x40) = eax_9 & 0xfffffff8
int32_t eax_10
eax_10.b = 1
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x20) = 0x100
return eax_10
