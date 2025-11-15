// 函数: sub_42d2a0
// 地址: 0x42d2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
float xmm0

if (*(arg1 + 4) == 0)
    xmm0 = 1f
else
    xmm0 = -1f

void** esi = arg3
float* arg_4

if (arg4 != 0)
    void** ecx
    
    if (esi[5] u< 0x10)
        ecx = esi
    else
        ecx = *esi
    
    if ((*(*arg4 + 0x30))(ecx) != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        *arg_4 = _mm_cvtepi32_ps(zx.o((*(*arg4 + 0x34))(esi))) * xmm0
        float* eax_6
        eax_6.b = 1
        return eax_6
    
    void** ecx_4
    
    if (esi[5] u< 0x10)
        ecx_4 = esi
    else
        ecx_4 = *esi
    
    if ((*(*arg4 + 0x38))(ecx_4) != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        (*(*arg4 + 0x3c))(esi)
        *arg_4 = fconvert.s(arg2 * fconvert.t(xmm0))
        float* eax_12
        eax_12.b = 1
        return eax_12

char* ecx_8

if (esi[5] u< 0x10)
    ecx_8 = esi
else
    ecx_8 = *esi

int32_t* edi_1 = arg_4

if (sub_63a350(ecx_8, edi_1) != 0)
    *edi_1 = *edi_1 * xmm0
    return 1

bool cond:0 = esi[5] u< 0x10
arg_4 = nullptr

if (not(cond:0))
    esi = *esi

if (sub_63a2c0(esi, &arg_4) == 0)
    return 0

*edi_1 = _mm_cvtepi32_ps(zx.o(arg_4)) * xmm0
return 1
