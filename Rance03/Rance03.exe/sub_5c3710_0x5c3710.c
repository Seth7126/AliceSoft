// 函数: sub_5c3710
// 地址: 0x5c3710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
char ecx = (**(arg1 + 0x234)).b
*(arg1 + 0x234) -= 4
int32_t* eax_1 = *(arg1 + 0x234)
int32_t edi_2 = (eax_1 - *(arg1 + 0x228)) s>> 2
int32_t ebx_1 = *eax_1 << ecx
int32_t ecx_1 = *(arg1 + 0x22c)

if (edi_2 + 1 u>= ecx_1)
    sub_64ad90(arg1 + 0x224, ecx_1 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

int32_t* result = *(arg1 + 0x234)
*result = ebx_1
*(arg1 + 0x234) += 4
return result
