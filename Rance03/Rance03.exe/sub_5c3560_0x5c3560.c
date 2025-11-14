// 函数: sub_5c3560
// 地址: 0x5c3560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t* eax = *(arg1 + 0x234)
int32_t ecx = *(arg1 + 0x22c)
int32_t edi_2 = (eax - *(arg1 + 0x228)) s>> 2
int32_t ebx_1 = not.d(*eax)

if (edi_2 + 1 u>= ecx)
    sub_64ad90(arg1 + 0x224, ecx * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

int32_t* result = *(arg1 + 0x234)
*result = ebx_1
*(arg1 + 0x234) += 4
return result
