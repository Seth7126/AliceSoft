// 函数: sub_5c5fc0
// 地址: 0x5c5fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
*(arg1 + 0x234) -= 4
int32_t* eax = *(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ecx = *(arg1 + 0x22c)
float xmm2 = *eax
xmm2 f- 0
int32_t edi_2 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
bool p = unimplemented  {test ah, 0x44}
float result

if (p)
    result = **(arg1 + 0x234) / xmm2
else
    result = 0f

if (edi_2 + 1 u>= ecx)
    sub_64ad90(arg1 + 0x224, ecx * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

**(arg1 + 0x234) = result
*(arg1 + 0x234) += 4
return result
