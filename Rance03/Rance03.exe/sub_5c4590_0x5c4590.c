// 函数: sub_5c4590
// 地址: 0x5c4590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t ebp = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t* eax_1 = *(arg1 + 0x234)
int32_t ecx = *(arg1 + 0x22c)
int32_t edi_2 = (eax_1 - *(arg1 + 0x228)) s>> 2
int32_t ebx = *eax_1

if (edi_2 + 1 u>= ecx)
    sub_64ad90(arg1 + 0x224, ecx * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

**(arg1 + 0x234) = ebx
*(arg1 + 0x234) += 4
int32_t ecx_2 = *(arg1 + 0x22c)
int32_t edi_5 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2

if (edi_5 + 1 u>= ecx_2)
    sub_64ad90(arg1 + 0x224, ecx_2 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_5 << 2)

**(arg1 + 0x234) = ebp
*(arg1 + 0x234) += 4
int32_t ecx_4 = *(arg1 + 0x22c)
int32_t edi_8 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2

if (edi_8 + 1 u>= ecx_4)
    sub_64ad90(arg1 + 0x224, ecx_4 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_8 << 2)

int32_t* result = *(arg1 + 0x234)
*result = ebx
*(arg1 + 0x234) += 4
return result
