// 函数: sub_5c60e0
// 地址: 0x5c60e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
float* eax = *(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t* ecx = *(arg1 + 0x234)
int32_t ecx_1 = *(arg1 + 0x22c)
int32_t ebx
ebx.b = *ecx > *eax
int32_t edi_2 = (ecx - *(arg1 + 0x228)) s>> 2

if (edi_2 + 1 u>= ecx_1)
    sub_64ad90(arg1 + 0x224, ecx_1 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

int32_t* result = *(arg1 + 0x234)
*result = ebx
*(arg1 + 0x234) += 4
return result
