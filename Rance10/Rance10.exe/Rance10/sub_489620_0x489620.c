// 函数: sub_489620
// 地址: 0x489620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

(*(**(arg1 + 4) + 0x20))()
float var_c = fconvert.s(arg2)
float xmm0_1 = *(arg1 + 0x38) - var_c
int32_t esi = (***(arg1 + 8))()
int32_t var_4 = esi

while (true)
    HANDLE hHandle = *(arg1 + 0x4c)
    
    if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_OBJECT_0)
        break
    
    int32_t eax_5 = (***(arg1 + 8))()
    int32_t ecx_3 = *(arg1 + 0x34)
    int32_t eax_6 = eax_5 - esi
    
    if (eax_6 s>= ecx_3)
        int32_t* ecx_7 = *(arg1 + 4)
        int32_t* var_20_3 = ecx_7
        (*(*ecx_7 + 0x1c))(*(arg1 + 0x38))
        break
    
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(eax_6))
    int32_t* esi_1 = *(arg1 + 4)
    int32_t ecx_4 = *(arg1 + 0x3c)
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(ecx_3))
    int32_t edi_1 = *esi_1
    int32_t ecx_5
    float xmm0_5
    ecx_5, xmm0_5 = sub_484cd0(ecx_4, xmm0_3 / xmm1_2)
    int32_t var_20_1 = ecx_5
    (*(edi_1 + 0x1c))(xmm0_5 * xmm0_1 + var_c)
    esi = var_4

if (*(arg1 + 0x30) != 0)
    (*(**(arg1 + 4) + 0x14))()

enum WAIT_EVENT result
result.b = 1
return result
