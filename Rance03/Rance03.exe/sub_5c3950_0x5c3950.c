// 函数: sub_5c3950
// 地址: 0x5c3950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t edx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ebx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ebp = **(arg1 + 0x234)

if (ebp != 0xffffffff)
    char eax_4
    int32_t ecx_2
    int32_t edx_1
    eax_4, ecx_2, edx_1 = sub_5d7490(arg1 + 0x16c, ebp, ebx, edx, ecx)
    
    if (eax_4 == 0)
        int32_t var_14_2 = ebx + 1
        int32_t var_18_2 = ebx
        int32_t var_1c_2 = ebp
        int32_t var_20_2 = 0x6e6718
        return sub_5c2400(ebx + 1, edx_1, ecx_2, arg1, "R_ASSIGN")

int32_t ecx_3 = *(arg1 + 0x22c)
int32_t edi_2 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2

if (edi_2 + 1 u>= ecx_3)
    sub_64ad90(arg1 + 0x224, ecx_3 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

**(arg1 + 0x234) = ebp
*(arg1 + 0x234) += 4
int32_t ecx_5 = *(arg1 + 0x22c)
int32_t edi_5 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2

if (edi_5 + 1 u>= ecx_5)
    sub_64ad90(arg1 + 0x224, ecx_5 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_5 << 2)

int32_t* result = *(arg1 + 0x234)
*result = ebx
*(arg1 + 0x234) += 4
return result
