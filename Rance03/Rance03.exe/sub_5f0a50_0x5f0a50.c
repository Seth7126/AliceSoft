// 函数: sub_5f0a50
// 地址: 0x5f0a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0xc) = *(arg1 + 8)
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0

if (arg2 s<= 0 || arg3 s<= 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_2 = (arg2 + 0xf) & 0xfffffff0
*(arg1 + 0x20) = eax_2
sub_403540(arg1 + 8, eax_2 * arg3 + 0x28)
int32_t eax_6 = *(arg1 + 8) + 7
*(arg1 + 0x18) = arg2
*(arg1 + 0x1c) = arg3
*(arg1 + 0x14) = eax_6 & 0xfffffff8
int32_t eax_7
eax_7.b = 1
return eax_7
