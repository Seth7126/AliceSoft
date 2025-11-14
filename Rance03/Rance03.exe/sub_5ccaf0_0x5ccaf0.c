// 函数: sub_5ccaf0
// 地址: 0x5ccaf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (***(arg1 + 0x28))()
int32_t ecx_1 = *(arg1 + 0x22c)
int32_t edi_2 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2

if (edi_2 + 1 u>= ecx_1)
    sub_64ad90(arg1 + 0x224, ecx_1 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

int32_t* result = *(arg1 + 0x234)
*result = eax_1
*(arg1 + 0x234) += 4
return result
