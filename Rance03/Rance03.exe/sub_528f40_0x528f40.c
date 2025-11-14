// 函数: sub_528f40
// 地址: 0x528f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1
void* var_18 = esi

if (*(esi + 4) == *(esi + 8))
    int32_t eax
    eax.b = 1
    return eax

sub_529460(esi + 0x34)
sub_529340(esi + 0x34, (*(esi + 8) - *(esi + 4)) s>> 2)
int32_t edi = 0
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x2e8ba2e9, *(esi + 0x38) - *(esi + 0x34))
int32_t edx_1 = edx s>> 3

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    float ebx_1 = arg2
    int32_t edx_2 = 0
    int32_t ecx_4 = 0
    int32_t var_24_1 = 0
    int32_t var_28_1 = 0
    
    while (true)
        void* esi_1 = *(*(esi + 4) + (edi << 2))
        
        if (esi_1 != 0)
            int32_t* ebp_1 = *(esi_1 + 0x10)
            
            if (ebp_1 != 0)
                float var_c
                sub_527330(ebx_1, &var_c, edi)
                int32_t edx_5
                
                if (edi s>= 0)
                    int32_t ecx_7 = *(ebx_1 i+ 8) - *(ebx_1 i+ 4)
                    int32_t eax_9
                    int32_t edx_3
                    edx_3:eax_9 = muls.dp.d(0x92492493, ecx_7)
                    edx_5 = (edx_3 + ecx_7) s>> 5
                
                float xmm0_2
                
                if (edi s< 0 || edi s>= (edx_5 u>> 0x1f) + edx_5)
                    xmm0_2 = 1f
                    arg2 = 1f
                else
                    arg2 = *(*(ebx_1 i+ 4) + var_28_1 + 0x2c)
                    xmm0_2 = 1f
                
                if (edi s>= 0 && edi s< (*(ebx_1 i+ 8) - *(ebx_1 i+ 4)) s/ 0x38)
                    xmm0_2 = *(*(ebx_1 i+ 4) + var_28_1 + 0x30)
                
                int32_t* var_20_1
                
                if (ebp_1 != 0)
                    var_20_1 = (*(*ebp_1 + 0x10))()
                else
                    var_20_1 = ebp_1
                
                int32_t* ecx_13 = *(esi_1 + 0x10)
                int32_t eax_21
                
                if (ecx_13 != 0)
                    eax_21 = (*(*ecx_13 + 0x10))()
                else
                    eax_21 = 0
                
                float xmm1_2 = _mm_cvtepi32_ps(zx.o(var_20_1))
                int32_t* ecx_14 = *(esi_1 + 0x10)
                float xmm1_3 = xmm1_2 / _mm_cvtepi32_ps(zx.o(eax_21))
                int32_t* var_20_2
                
                if (ecx_14 != 0)
                    var_20_2 = (*(*ecx_14 + 0x14))()
                else
                    var_20_2 = ecx_14
                
                int32_t* ecx_15 = *(esi_1 + 0x10)
                int32_t eax_25
                
                if (ecx_15 != 0)
                    eax_25 = (*(*ecx_15 + 0x14))()
                else
                    eax_25 = 0
                
                float xmm0_6 = _mm_cvtepi32_ps(zx.o(eax_25))
                int32_t eax_27 = *ebp_1
                float xmm1_6 = *(var_18 + 0x4c) * *arg4 * xmm0_2
                void* esi_4 = *(var_18 + 0x34) + var_24_1
                float xmm1_9 = arg4[1] f* *(var_18 + 0x4c) * xmm0_2
                float var_3c_2 = _mm_cvtepi32_ps(zx.o(var_20_2)) / xmm0_6
                float var_40_2 = xmm1_3
                int32_t eax_28
                int32_t ecx_18
                eax_28, ecx_18 = (*(eax_27 + 0x14))(1)
                int32_t var_4c_1 = ecx_18
                int32_t eax_30
                int32_t ecx_20
                eax_30, ecx_20 = (*(*ebp_1 + 0x10))(_mm_cvtepi32_ps(zx.o(eax_28)) * arg2)
                int32_t var_50_1 = ecx_20
                float xmm0_12 = _mm_cvtepi32_ps(zx.o(eax_30))
                uint128_t xmm2_1 = zx.o(*arg3)
                float xmm3_2 = _mm_cvtepi32_ps(zx.o(arg3[1]))
                float var_8
                
                if (sub_59b800(esi_4, _mm_cvtepi32_ps(xmm2_1) + var_c + xmm1_6, 
                        xmm3_2 + var_8 + xmm1_9, arg5, xmm0_12 * arg2) == 0)
                    return 0
                
                ecx_4 = var_28_1
                edx_2 = var_24_1
        
        esi = var_18
        var_28_1 = ecx_4 + 0x38
        var_24_1 = edx_2 + 0x2c
        edi += 1
        int32_t eax_33
        int32_t edx_10
        edx_10:eax_33 = muls.dp.d(0x2e8ba2e9, *(esi + 0x38) - *(esi + 0x34))
        int32_t edx_11 = edx_10 s>> 3
        
        if (edi s>= (edx_11 u>> 0x1f) + edx_11)
            break
        
        ecx_4 = var_28_1
        edx_2 = var_24_1

int32_t eax_7
eax_7.b = 1
return eax_7
