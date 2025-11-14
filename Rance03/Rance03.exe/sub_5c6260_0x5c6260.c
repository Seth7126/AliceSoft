// 函数: sub_5c6260
// 地址: 0x5c6260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t* eax = *(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t* ecx = *(arg1 + 0x234)
float xmm0 = *ecx
float temp0 = *eax
xmm0 - temp0
eax:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
    | (xmm0 < temp0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t ebx

ebx = not(p_1) ? 0 : 1

int32_t ecx_1 = *(arg1 + 0x22c)
int32_t edi_2 = (ecx - *(arg1 + 0x228)) s>> 2

if (edi_2 + 1 u>= ecx_1)
    sub_64ad90(arg1 + 0x224, ecx_1 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

int32_t* result = *(arg1 + 0x234)
*result = ebx
*(arg1 + 0x234) += 4
return result
