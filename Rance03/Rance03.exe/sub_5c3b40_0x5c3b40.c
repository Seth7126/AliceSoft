// 函数: sub_5c3b40
// 地址: 0x5c3b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t edx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t edi = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t eax_4 = **(arg1 + 0x234)

if (eax_4 == ecx)
    if (eax_4 == 0xffffffff)
        int32_t ecx_1 = *(arg1 + 0x22c)
        int32_t edi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
        
        if (edi_3 + 1 u>= ecx_1)
            sub_64ad90(arg1 + 0x224, ecx_1 * 2)
            *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_3 << 2)
        
        int32_t* eax_9 = *(arg1 + 0x234)
        *eax_9 = 0
        *(arg1 + 0x234) += 4
        return eax_9
    
    if (edi == edx)
        return sub_5ddf10(arg1 + 0x220, 0)

int32_t ecx_4 = *(arg1 + 0x22c)
int32_t edi_6 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2

if (edi_6 + 1 u>= ecx_4)
    sub_64ad90(arg1 + 0x224, ecx_4 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_6 << 2)

int32_t* eax_15 = *(arg1 + 0x234)
*eax_15 = 1
*(arg1 + 0x234) += 4
return eax_15
