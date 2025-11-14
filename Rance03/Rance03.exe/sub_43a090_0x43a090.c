// 函数: sub_43a090
// 地址: 0x43a090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
float xmm0

if (*(arg1 + 8) != 0)
    xmm0 = -1f
else
    xmm0 = 1f

int32_t* esi = arg4
int32_t* arg_4

if (arg3 == 0)
label_43a136:
    char* ecx_6
    
    if (esi[5] u< 0x10)
        ecx_6 = esi
    else
        ecx_6 = *esi
    
    float* edi_2 = arg_4
    
    if (sub_5df030(ecx_6, edi_2) != 0)
        *edi_2 = *edi_2 * xmm0
        return 1
    
    bool cond:0_1 = esi[5] u< 0x10
    arg_4 = nullptr
    
    if (not(cond:0_1))
        esi = *esi
    
    if (sub_5defa0(esi, &arg_4) != 0)
        *edi_2 = _mm_cvtepi32_ps(zx.o(arg_4)) * xmm0
        return 1
else
    int32_t* edx_1
    
    if (esi[5] u< 0x10)
        edx_1 = esi
    else
        edx_1 = *esi
    
    int32_t* eax_2 = (*(*arg3 + 0x3c))(edx_1)
    
    if (eax_2 == 0)
        goto label_43a136
    
    int32_t eax_3 = (*(*eax_2 + 4))()
    
    if (eax_3 == 0xa)
        uint128_t xmm0_3 = zx.o((*(*eax_2 + 0x10))())
        int32_t* eax_11 = arg_4
        float xmm0_4 = _mm_cvtepi32_ps(xmm0_3)
        *eax_11 = xmm0_4
        *eax_11 = xmm0_4 * xmm0
        eax_11.b = 1
        return eax_11
    
    if (eax_3 == 0xb)
        (*(*eax_2 + 0x18))()
        float* eax_8 = arg_4
        *eax_8 = fconvert.s(arg2)
        *eax_8 = *eax_8 * xmm0
        eax_8.b = 1
        return eax_8
return 0
