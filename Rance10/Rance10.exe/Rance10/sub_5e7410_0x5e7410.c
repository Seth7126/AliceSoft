// 函数: sub_5e7410
// 地址: 0x5e7410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_70 = 0xffffffff
int32_t (* var_74)(void* arg1) = sub_741998
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_6c
int32_t var_100 = __security_cookie ^ &var_6c
fsbase->NtTib.ExceptionList = &ExceptionList
float var_c = arg2
void* edi = sub_5665c0(data_7fd4cc, arg3, arg4)
void* eax_4

if (edi != 0)
    __Smtx_lock_shared(edi + 0x200)
    int32_t esi_1 = *(edi + 0x1fc)
    __Smtx_unlock_shared(edi + 0x200)
    
    if (esi_1 != 0)
        eax_4 = sub_5665c0(data_7fd4cc, arg3, var_c)
        
        if (eax_4 != 0)
            int32_t eax_5 = sub_584500(edi)
            int32_t var_38 = eax_5
            *(eax_4 + 0x234) = *(eax_4 + 0x230)
            
            if (eax_5 s> 0)
                var_c = -nanf
                void* var_60 = nullptr
                int32_t var_5c_1 = 0
                int32_t var_58_1 = 0
                sub_422540(&var_60, eax_5, &var_c)
                int32_t ebx_3 = 0
                int32_t var_70_1 = 0
                
                if (eax_5 s<= 0)
                    eax_5 = var_38
                else
                    do
                        __Smtx_lock_shared(edi + 0x200)
                        void* esi_3 = *(edi + 0x1fc)
                        __Smtx_unlock_shared(edi + 0x200)
                        
                        if (sub_5bb860(esi_3, ebx_3, &var_c) != 0)
                            float ecx_8 = var_c
                            
                            if (ecx_8 s>= 0)
                                void* edx = var_60
                                
                                if (ecx_8 s< (var_5c_1 - edx) s>> 2)
                                    *(edx + (ecx_8 << 2)) = ebx_3
                        
                        eax_5 = var_38
                        ebx_3 += 1
                    while (ebx_3 s< eax_5)
                
                int32_t esi_4 = 0
                
                if (eax_5 s> 0)
                    int32_t var_d4_1 = 0
                    int32_t var_d0_1 = 0
                    
                    do
                        float var_18
                        sub_582cd0(edi, &var_18, &data_7fd4d8, esi_4)
                        int32_t xmm1_1 = 0x3dcccccd
                        int32_t eax_13 = *(var_60 + (esi_4 << 2))
                        int64_t var_28
                        float var_14
                        float var_10
                        
                        if (eax_13 != 0xffffffff)
                            float var_e4
                            float* eax_14 = sub_582cd0(edi, &var_e4, &data_7fd4d8, eax_13)
                            float xmm2_1 = var_18
                            float eax_15 = eax_14[2]
                            var_28 = *eax_14
                            float xmm2_2 = xmm2_1 f- var_28.d
                            float xmm1_3 = var_14 f- var_28:4.d
                            float xmm0_3 = var_10 - eax_15
                            xmm1_1 = sub_484cc0(xmm0_3 * xmm0_3 + xmm2_2 * xmm2_2 + xmm1_3 * xmm1_3)
                        
                        int32_t var_d8 = xmm1_1
                        float var_f0
                        float* eax_16 = sub_582cd0(edi, &var_f0, &var_d8, esi_4)
                        float eax_17 = eax_16[2]
                        var_28 = *eax_16
                        int32_t ebx_4
                        
                        if (esi_4 != arg5)
                            ebx_4 = 0xc0c0c0
                            
                            if (esi_4 == arg6)
                                ebx_4 = 0xff0000
                        else
                            ebx_4 = 0xc0
                        
                        float xmm0_11 = (var_28.d - var_18) * 0.25f + var_18
                        float xmm1_8 = (var_28:4.d - var_14) * 0.25f + var_14
                        var_c = (eax_17 - var_10) * 0.25f + var_10
                        float var_a8
                        sub_582cd0(edi, &var_a8, &data_7e70e0, esi_4)
                        float xmm2_10 = var_a8 - var_18
                        float var_a4
                        float xmm3_2 = var_a4 - var_14
                        float var_a0
                        float xmm4_2 = var_a0 - var_10
                        float var_bc_1 = xmm3_2
                        float xmm0_17 =
                            sub_484cc0(xmm3_2 * xmm3_2 + xmm2_10 * xmm2_10 + xmm4_2 * xmm4_2)
                        xmm0_17 f- 0
                        float* eax_18
                        eax_18:1.b = (xmm0_17 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_17, 0f) ? 1 : 0) << 2 | (xmm0_17 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        float var_54_1
                        float var_2c_1
                        float var_1c_1
                        float eax_19
                        int64_t xmm1_14
                        
                        if (not(p_2))
                            eax_19 = xmm4_2
                            xmm1_14 = xmm2_10.q
                            var_2c_1 = eax_19
                            var_1c_1 = xmm1_14:4.d
                            var_54_1 = xmm1_14.d
                        else
                            float xmm1_13 = 1f / xmm0_17
                            float xmm2_11 = xmm2_10 * xmm1_13
                            float xmm3_3 = xmm3_2 * xmm1_13
                            float xmm4_3 = xmm4_2 * xmm1_13
                            int64_t var_44
                            var_44.d = xmm2_11
                            var_44:4.d = xmm3_3
                            xmm1_14 = var_44
                            eax_19 = xmm4_3
                            var_54_1 = xmm2_11
                            var_1c_1 = xmm3_3
                            var_2c_1 = xmm4_3
                        
                        var_a0 = eax_19
                        var_a8.q = xmm1_14
                        float var_b4
                        sub_582cd0(edi, &var_b4, &data_7e70c8, esi_4)
                        float xmm3_5 = var_b4 - var_18
                        float var_b0
                        float xmm4_5 = var_b0 - var_14
                        float var_ac
                        float xmm5_2 = var_ac - var_10
                        float var_c8_1 = xmm4_5
                        float xmm0_25 =
                            sub_484cc0(xmm4_5 * xmm4_5 + xmm3_5 * xmm3_5 + xmm5_2 * xmm5_2)
                        xmm0_25 f- 0
                        float* eax_20
                        eax_20:1.b = (xmm0_25 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_25, 0f) ? 1 : 0) << 2 | (xmm0_25 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        float eax_21
                        int64_t xmm0_26
                        float xmm3_6
                        float xmm4_6
                        float xmm5_3
                        
                        if (not(p_4))
                            xmm0_26 = xmm3_5.q
                            eax_21 = xmm5_2
                            xmm4_6 = xmm0_26:4.d
                            xmm3_6 = xmm0_26.d
                            xmm5_3 = eax_21
                        else
                            float xmm1_19 = 1f / xmm0_25
                            xmm3_6 = xmm3_5 * xmm1_19
                            xmm4_6 = xmm4_5 * xmm1_19
                            xmm5_3 = xmm5_2 * xmm1_19
                            int64_t var_50
                            var_50.d = xmm3_6
                            var_50:4.d = xmm4_6
                            xmm0_26 = var_50
                            eax_21 = xmm5_3
                        
                        var_ac = eax_21
                        var_b4.q = xmm0_26
                        float var_68_1 = var_1c_1 * 0.00999999978f + xmm1_8
                        float var_64_1 = var_2c_1 * 0.00999999978f + var_c
                        var_6c = var_54_1 * 0.00999999978f + xmm0_11
                        float var_84 = var_54_1 * -0.00999999978f + xmm0_11
                        float var_80_1 = var_1c_1 * -0.00999999978f + xmm1_8
                        float xmm7_4 = var_c
                        float var_8c_1 = xmm4_6 * 0.00999999978f + xmm1_8
                        float var_7c_1 = var_2c_1 * -0.00999999978f + xmm7_4
                        float var_90 = xmm3_6 * 0.00999999978f + xmm0_11
                        float var_88_1 = xmm5_3 * 0.00999999978f + xmm7_4
                        float var_9c = xmm3_6 * -0.00999999978f + xmm0_11
                        float var_98_1 = xmm4_6 * -0.00999999978f + xmm1_8
                        float var_94_1 = xmm5_3 * -0.00999999978f + xmm7_4
                        sub_5857c0(eax_4, &var_6c, ebx_4, &var_90, ebx_4)
                        sub_5857c0(eax_4, &var_6c, ebx_4, &var_9c, ebx_4)
                        sub_5857c0(eax_4, &var_84, ebx_4, &var_90, ebx_4)
                        sub_5857c0(eax_4, &var_84, ebx_4, &var_9c, ebx_4)
                        sub_5857c0(eax_4, &var_18, ebx_4, &var_6c, ebx_4)
                        sub_5857c0(eax_4, &var_18, ebx_4, &var_84, ebx_4)
                        sub_5857c0(eax_4, &var_18, ebx_4, &var_90, ebx_4)
                        sub_5857c0(eax_4, &var_18, ebx_4, &var_9c, ebx_4)
                        sub_5857c0(eax_4, &var_28, ebx_4, &var_6c, ebx_4)
                        sub_5857c0(eax_4, &var_28, ebx_4, &var_84, ebx_4)
                        sub_5857c0(eax_4, &var_28, ebx_4, &var_90, ebx_4)
                        sub_5857c0(eax_4, &var_28, ebx_4, &var_9c, ebx_4)
                        esi_4 += 1
                    while (esi_4 s< var_38)
                
                void* ecx_26 = var_60
                
                if (ecx_26 != 0)
                    sub_403160(ecx_26, (var_58_1 - ecx_26) s>> 2, 4)
            
            eax_5.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_5

eax_4.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
