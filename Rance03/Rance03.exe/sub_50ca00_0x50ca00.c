// 函数: sub_50ca00
// 地址: 0x50ca00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1
void* var_18 = esi
struct partsengine::CRect::VTable* var_14
sub_4fbef0(&var_14, *(esi + 0x2d4), *(esi + 0x2d8), esi + 0x2dc)
int32_t var_8
int32_t ebx = var_8
int32_t arg_c
int32_t ecx_1 = arg_c - 1
int32_t eax_6

switch (ecx_1)
    case 1, 4, 7
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(ebx)
        eax_6 = neg.d((eax_3 - edx_1) s>> 1)
    case 2, 5, 8
        eax_6 = neg.d(ebx)
    default
        eax_6 = 0

float xmm3_1 = _mm_cvtepi32_ps(zx.o(eax_6))
int32_t var_4
int32_t eax_13

switch (ecx_1)
    case 3, 4, 5
        int32_t eax_10
        int32_t edx_3
        edx_3:eax_10 = sx.q(var_4)
        eax_13 = neg.d((eax_10 - edx_3) s>> 1)
    case 6, 7, 8
        eax_13 = neg.d(var_4)
    default
        eax_13 = 0

int32_t arg_4
float xmm2 = arg_4
int32_t edx_4 = 0
float xmm1 = xmm2
int32_t result = *(esi + 0x2cc) - *(esi + 0x2c8)
float xmm4_1 = _mm_cvtepi32_ps(zx.o(eax_13))

if ((result & 0xfffffffc) s> 0)
    int32_t* ecx_2 = &arg_c
    float arg_8
    float xmm5_1 = arg_8
    int32_t var_10
    int32_t ebp_1 = var_10
    int32_t var_c
    arg_c = var_c
    
    if (var_c s<= 0)
        ecx_2 = &arg_4
    
    arg_4 = 0
    int32_t var_1c = ebp_1
    arg_c = *ecx_2
    
    do
        if (edx_4 s>= 0 && edx_4 s< (*(esi + 0x2cc) - *(esi + 0x2c8)) s>> 2)
            void* eax_22 = *(*(esi + 0x2c8) + (edx_4 << 2))
            void* ecx_3 = *(eax_22 + 4)
            
            if (ecx_3 != 0)
                *(ecx_3 + 0xc) = xmm1 + xmm3_1
                *(*(eax_22 + 4) + 0x10) = xmm4_1 + xmm5_1
        
        float xmm0_6 = xmm1 - xmm2
        int32_t* eax_24 = &var_1c
        int32_t ecx_4 = int.d(xmm0_6)
        arg_4 = ecx_4
        
        if (ecx_4 s>= ebp_1)
            eax_24 = &arg_4
        
        int32_t ebp_2 = *eax_24
        int32_t edi_2 = ebx - ebp_2
        arg_4 = edi_2
        void* ecx_5
        
        if (edx_4 s>= 0 && edx_4 s< (*(esi + 0x2cc) - *(esi + 0x2c8)) s>> 2)
            ecx_5 = *(*(*(esi + 0x2c8) + (edx_4 << 2)) + 4)
        
        float ecx_6
        
        if (edx_4 s< 0 || edx_4 s>= (*(esi + 0x2cc) - *(esi + 0x2c8)) s>> 2 || ecx_5 == 0)
            ecx_6 = 0f
        else
            ecx_6 = *(ecx_5 + 0x18)
        
        arg_8 = ecx_6
        int32_t* eax_30 = &arg_4
        
        if (edi_2 s>= ecx_6)
            eax_30 = &arg_8
        
        int32_t edi_4 = var_4 - arg_c
        int32_t ebx_1 = *eax_30
        arg_4 = edi_4
        void* ecx_7
        
        if (edx_4 s>= 0 && edx_4 s< (*(esi + 0x2cc) - *(esi + 0x2c8)) s>> 2)
            ecx_7 = *(*(*(esi + 0x2c8) + (edx_4 << 2)) + 4)
        
        float ecx_8
        
        if (edx_4 s< 0 || edx_4 s>= (*(esi + 0x2cc) - *(esi + 0x2c8)) s>> 2 || ecx_7 == 0)
            ecx_8 = 0f
        else
            ecx_8 = *(ecx_7 + 0x1c)
        
        arg_8 = ecx_8
        
        if (edx_4 s>= 0 && edx_4 s< (*(esi + 0x2cc) - *(esi + 0x2c8)) s>> 2)
            esi = var_18
            float* eax_40 = &arg_4
            
            if (edi_4 s>= ecx_8)
                eax_40 = &arg_8
            
            float ecx_9 = *eax_40
            void* eax_43 = *(*(*(esi + 0x2c8) + (edx_4 << 2)) + 4)
            
            if (eax_43 != 0)
                int32_t edi_5 = arg_c
                *(eax_43 + 0xc8) = ebp_2 - int.d(xmm0_6)
                *(eax_43 + 0xcc) = edi_5
                *(eax_43 + 0xd0) = ebx_1
                *(eax_43 + 0xd4) = ecx_9
        
        edx_4 += 1
        ebp_1 = var_10
        ebx = var_8
        result = (*(esi + 0x2cc) - *(esi + 0x2c8)) s>> 2
        xmm1 = _mm_cvtepi32_ps(zx.o(*(esi + 0x2b8) + ebx_1)) + xmm1
    while (edx_4 s< result)

return result
