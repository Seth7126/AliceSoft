// 函数: sub_5c6360
// 地址: 0x5c6360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t* edx = *(arg1 + 0x208)
int32_t result = *edx
*(arg1 + 0x208) = &edx[1]
int32_t ecx = *(arg1 + 0x22c)
int32_t edi_2 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2

if (edi_2 + 1 u>= ecx)
    sub_64ad90(arg1 + 0x224, ecx * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

**(arg1 + 0x234) = result
*(arg1 + 0x234) += 4
return result
