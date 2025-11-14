// 函数: sub_5c4ec0
// 地址: 0x5c4ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
*(arg1 + 0x234) -= 4
int32_t* eax = *(arg1 + 0x234)
int32_t ecx = *(arg1 + 0x22c)
int32_t edi_2 = (eax - *(arg1 + 0x228)) s>> 2
int32_t result = _mm_cvtepi32_ps(zx.o(*eax))

if (edi_2 + 1 u>= ecx)
    sub_64ad90(arg1 + 0x224, ecx * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

**(arg1 + 0x234) = result
*(arg1 + 0x234) += 4
return result
