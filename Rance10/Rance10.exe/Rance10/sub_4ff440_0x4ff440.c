// 函数: sub_4ff440
// 地址: 0x4ff440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm2 = (zx.o(0)).d
int32_t var_14 = 0
float var_10 = 0f
int32_t var_1c = 0
float var_8
float xmm0_4

if (*(arg1 + 0x50) == 0)
    xmm0_4 = *(arg1 + 0x4c)
else
    void* esi_1 = data_7fcbbc
    int32_t eax_1
    
    if (esi_1 != 0)
        if (sub_63c080(esi_1) != 0)
            eax_1 = (*(**(esi_1 + 0x2c) + 0x50))()
        else
            eax_1 = 0
    else
        eax_1 = 0
    
    var_8 = *(arg1 + 0x4c)
    long double x87_r0
    long double x87_r1
    xmm0_4 = sub_63ce00(_mm_cvtepi32_ps(zx.o(eax_1)), x87_r0, x87_r1) * var_8
    xmm2 = 0

int32_t edi = 0
int32_t xmm1 = (zx.o(0)).d
int32_t var_18 = 0
void* eax_6 = *(*(arg1 + 0x6c) + 0x70)
int32_t ebp_2 = (*(eax_6 + 0xc4) - *(eax_6 + 0xc0)) s>> 2

if (ebp_2 s> 0)
    do
        int32_t esi_2
        
        if (edi s>= 0)
            void* ecx_2 = *(*(arg1 + 0x6c) + 0x70)
            
            if ((*(ecx_2 + 0xc4) - *(ecx_2 + 0xc0)) s>> 2 s> edi)
                esi_2 = *(*(ecx_2 + 0xc0) + (edi << 2))
            else
                esi_2 = 0
        else
            esi_2 = 0
        
        int32_t var_34_1 = esi_2
        void* eax_12 = sub_4f15e0(*(arg1 + 0x70))
        
        if (eax_12 != 0)
            int32_t edx_1 = *(eax_12 + 8)
            
            if (esi_2 s>= edx_1 && *(eax_12 + 4) + edx_1 s> esi_2)
                void* esi_4 = *(*(eax_12 + 0xc) + ((esi_2 - edx_1) << 2))
                
                if (esi_4 != 0)
                    int32_t eax_13
                    eax_13.b = *(esi_4 + 0xac)
                    char eax_14 = sub_4f0100(esi_4)
                    char edx_2
                    
                    if (*(esi_4 + 0xaa) != 0 && *(esi_4 + 0xab) != 0)
                        edx_2 = 1
                        
                        if (eax_13.b != 0)
                            edx_2 = arg4
                    
                    if (*(esi_4 + 0xaa) == 0 || *(esi_4 + 0xab) == 0 || edx_2 == 0 || eax_14 == 0)
                        xmm1 = var_18
                        xmm2 = var_1c
                    else
                        int32_t var_c
                        (*(**(esi_4 + 0x74) + 0x20))(&var_c, &var_8, 1)
                        float edx_3 = var_8
                        int32_t ecx_10 = var_c + *(esi_4 + 0x118) + *(esi_4 + 0x114)
                        int32_t xmm2_1 = var_1c
                        var_c = ecx_10
                        float edx_4 = edx_3 i+ *(esi_4 + 0x110) + *(esi_4 + 0x10c)
                        bool cond:2_1 = *(arg1 + 0x48) == 0
                        var_8 = edx_4
                        int32_t xmm1_3
                        
                        if (cond:2_1)
                            xmm1_3 = var_18
                        else
                            xmm1_3 = var_18
                            
                            if (not(_mm_cvtepi32_ps(zx.o(ecx_10)) f+ xmm2_1
                                    <= _mm_cvtepi32_ps(zx.o(int.d(xmm0_4)))))
                                var_10 = xmm1_3 f+ var_10
                                xmm1_3 = (zx.o(0)).d
                                var_14 = __maxss_xmmss_memss(xmm2_1, var_14)
                                xmm2_1 = (zx.o(0)).d
                        
                        xmm1 = _mm_max_ss(_mm_cvtepi32_ps(zx.o(edx_4)), xmm1_3)
                        var_18 = xmm1
                        xmm2 = xmm2_1 f+ _mm_cvtepi32_ps(zx.o(ecx_10))
                        var_1c = xmm2
        
        edi += 1
    while (edi s< ebp_2)

int32_t eax_21 = *(arg1 + 0x64) + *(arg1 + 0x60)
float xmm2_3 = __maxss_xmmss_memss(xmm2, var_14)
*arg2 = _mm_cvtepi32_ps(zx.o(eax_21)) + xmm2_3
*arg3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x5c) + *(arg1 + 0x58))) + xmm1 f+ var_10
return arg3
