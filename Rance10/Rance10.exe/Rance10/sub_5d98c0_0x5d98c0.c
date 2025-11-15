// 函数: sub_5d98c0
// 地址: 0x5d98c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[4] u<= *(arg2 + 8))
    uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
    int32_t edx_2 = edx_1 s>> 6
    
    if (ebx_7 == (edx_2 u>> 0x1f) + edx_2)
        int32_t var_3c_1 = 0
        
        if (ebx_7 s> 0)
            int32_t var_38_1 = 0
            int32_t ecx_27
            
            do
                int32_t edi_1 = *(arg2 + 8)
                
                if (*(arg2 + 4) + 4 u> edi_1)
                    goto label_5d9b16
                
                void* edx_3 = *(arg2 + 4)
                int32_t var_20_1 = 0
                uint32_t var_1c = 0
                uint32_t var_18 = 0
                int32_t ecx_8 =
                    ((zx.d(*(edx_3 + 3)) << 8 | zx.d(*(edx_3 + 2))) << 8 | zx.d(*(edx_3 + 1))) << 8
                    | zx.d(*edx_3)
                *(arg2 + 4) = edx_3 + 4
                
                if (edx_3 + 8 u> edi_1)
                    goto label_5d9b16
                
                uint32_t ecx_15 =
                    ((zx.d(*(edx_3 + 7)) << 8 | zx.d(*(edx_3 + 6))) << 8 | zx.d(*(edx_3 + 5))) << 8
                    | zx.d(*(edx_3 + 4))
                *(arg2 + 4) = edx_3 + 8
                
                if (sub_6c9300(arg2, &var_1c).b == 0)
                    goto label_5d9b16
                
                if (sub_6c9300(arg2, &var_18).b == 0)
                    goto label_5d9b16
                
                uint32_t var_14 = 0
                uint32_t var_10 = 0
                uint32_t var_c = 0
                
                if (sub_6c9300(arg2, &var_14).b == 0)
                    goto label_5d9b16
                
                if (sub_6c9300(arg2, &var_10).b == 0)
                    goto label_5d9b16
                
                if (sub_6c9300(arg2, &var_c).b == 0)
                    goto label_5d9b16
                
                uint32_t var_34
                
                if (sub_6c9300(arg2, &var_34).b == 0)
                    goto label_5d9b16
                
                uint32_t var_30
                
                if (sub_6c9300(arg2, &var_30).b == 0)
                    goto label_5d9b16
                
                uint32_t var_2c
                
                if (sub_6c9300(arg2, &var_2c).b == 0)
                    goto label_5d9b16
                
                int32_t* eax_13
                eax_13.b = ecx_8 != 0
                void* ecx_25 = *arg1 + var_38_1
                var_38_1 += 0xd8
                *(ecx_25 + 0x80) = ecx_15.q
                *(ecx_25 + 0x8c) = var_14.q
                *(ecx_25 + 0xa4) = var_34
                uint32_t xmm0_4 = var_30
                *(ecx_25 + 0x7c) = eax_13.b
                uint32_t eax_14 = var_18
                *(ecx_25 + 0xb4) = xmm0_4
                uint32_t xmm0_5 = var_2c
                *(ecx_25 + 0x88) = eax_14
                *(ecx_25 + 0x94) = var_c
                *(ecx_25 + 0xc8) = xmm0_5
                ecx_27 = var_3c_1 + 1
                var_3c_1 = ecx_27
            while (ecx_27 s< ebx_7)
        
        result.b = 1
        return result

label_5d9b16:
result.b = 0
return result
