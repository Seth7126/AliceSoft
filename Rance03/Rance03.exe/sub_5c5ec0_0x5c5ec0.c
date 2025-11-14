// 函数: sub_5c5ec0
// 地址: 0x5c5ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
*(arg1 + 0x234) -= 4
float* eax = *(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t* ecx = *(arg1 + 0x234)
int32_t edi_2 = (ecx - *(arg1 + 0x228)) s>> 2
float result = *ecx - *eax
int32_t ecx_1 = *(arg1 + 0x22c)

if (edi_2 + 1 u>= ecx_1)
    sub_64ad90(arg1 + 0x224, ecx_1 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

**(arg1 + 0x234) = result
*(arg1 + 0x234) += 4
return result
