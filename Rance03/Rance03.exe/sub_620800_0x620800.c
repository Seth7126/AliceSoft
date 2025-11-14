// 函数: sub_620800
// 地址: 0x620800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s<= 0 || arg3 s<= 0)
    int32_t eax
    eax.b = 0
    return eax

void* eax_2 = ((arg2 << 2) + 0xf) & 0xfffffff0
*(arg1 + 0x20) = eax_2
sub_403540(arg1 + 0x28, eax_2 * arg3 + 0x28)
int32_t eax_6 = *(arg1 + 0x28) + 7
*(arg1 + 0x10) = arg2
*(arg1 + 0x14) = arg3
*(arg1 + 0x34) = eax_6 & 0xfffffff8
int32_t eax_7
eax_7.b = 1
*(arg1 + 0x18) = 0x20
*(arg1 + 0x1c) = 4
*(arg1 + 0x24) = 0x100
return eax_7
