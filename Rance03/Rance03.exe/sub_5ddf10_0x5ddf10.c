// 函数: sub_5ddf10
// 地址: 0x5ddf10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(arg1 + 0xc)
int32_t edi_2 = (*(arg1 + 0x14) - *(arg1 + 8)) s>> 2

if (edi_2 + 1 u>= ecx)
    sub_64ad90(arg1 + 4, ecx * 2)
    *(arg1 + 0x14) = *(arg1 + 8) + (edi_2 << 2)

**(arg1 + 0x14) = arg2
*(arg1 + 0x14) += 4
return arg2
