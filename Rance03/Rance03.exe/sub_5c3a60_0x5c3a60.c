// 函数: sub_5c3a60
// 地址: 0x5c3a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t edx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t edi = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t* eax_3 = *(arg1 + 0x234)

if (*eax_3 == ecx && edi == edx)
    int32_t ecx_1 = *(arg1 + 0x22c)
    int32_t edi_3 = (eax_3 - *(arg1 + 0x228)) s>> 2
    
    if (edi_3 + 1 u>= ecx_1)
        sub_64ad90(arg1 + 0x224, ecx_1 * 2)
        *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_3 << 2)
    
    int32_t* eax_8 = *(arg1 + 0x234)
    *eax_8 = 1
    *(arg1 + 0x234) += 4
    return eax_8

int32_t ecx_3 = *(arg1 + 0x22c)
int32_t edi_6 = (eax_3 - *(arg1 + 0x228)) s>> 2

if (edi_6 + 1 u>= ecx_3)
    sub_64ad90(arg1 + 0x224, ecx_3 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_6 << 2)

int32_t* eax_13 = *(arg1 + 0x234)
*eax_13 = 0
*(arg1 + 0x234) += 4
return eax_13
