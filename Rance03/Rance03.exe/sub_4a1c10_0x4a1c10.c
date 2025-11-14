// 函数: sub_4a1c10
// 地址: 0x4a1c10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_4
float xmm0_1

if (*(arg1 + 0x498) == 0)
    xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x17c))) f+ *(arg1 + 0x7c)
    var_4 = xmm0_1
else
    void* edi_1 = data_75d514
    int32_t eax_1
    
    if (edi_1 != 0)
        if (sub_5ed1f0(edi_1) != 0)
            eax_1 = (*(**(edi_1 + 0x2c) + 0x18))()
        else
            eax_1 = 0
    else
        eax_1 = 0
    
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x17c))) f+ *(arg1 + 0x7c)
    xmm0_1 = _mm_cvtepi32_ps(zx.o(eax_1))
    var_4 = xmm1_3 * xmm0_1

int32_t __saved_edi_3 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
int32_t eax_6

if (__saved_edi_3 s> 0)
    int32_t __saved_edi_1 = __saved_edi_3
    eax_6 = sub_4a56f0(*(arg1 + 0x54))

if (__saved_edi_3 s<= 0 || eax_6 == 0)
    xmm0_1 = (zx.o(0)).d
else
    sub_4a1c10()

int32_t result = sub_4a4170(arg1, *(arg1 + 0xe0))
xmm0_1 + var_4 - _mm_cvtepi32_ps(zx.o(result)) f+ *(arg1 + 0x4a4)
return result
