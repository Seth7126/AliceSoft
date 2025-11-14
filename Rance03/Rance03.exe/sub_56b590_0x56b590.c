// 函数: sub_56b590
// 地址: 0x56b590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_6c6148
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_104 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1

if (*(edi + 0x206) != 0)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x38e38e39, *(edi + 0x1a0) - *(edi + 0x19c))
    int128_t var_68
    __builtin_memset(&var_68, 0, 0x14)
    float var_a0_1 = 0f
    int32_t var_74_1 = 0
    int32_t edx_2 = edx_1 s>> 3
    int32_t var_70_1 = 1
    int32_t esi_3 = (edx_2 u>> 0x1f) + edx_2
    struct sealengine::CEmitterPos::VTable* const var_6c_1 = &sealengine::CEmitterPos::`vftable'
    int32_t var_54_1 = 0xffffffff
    int32_t var_14_1 = 0
    float var_50[0x4]
    __builtin_memcpy(&var_50, 
        "\x00\x00\x80\x3f\x00\x00\x80\x3e\x00\x00\x80\x3e\x00\x00\x80\x3f\xcd\xcc\xcc\x3e\xcd\xcc\xcc\x"
    "3e\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\xcd\xcc\x4c\x3f\x00\x00\x00\x00\x00\x00\x80"
    "3f", 
        0x30)
    float var_c0 = 0f
    float var_bc_1 = 0f
    int80_t x87_r0
    float xmm0_1 = ___libm_sse2_sinf(0x3f490fdb, x87_r0)
    float var_f4_1 = xmm0_1
    float xmm0_2 = xmm0_1 ^ (data_7094c0).d
    float var_9c_1 = xmm0_2
    int80_t x87_r1
    float xmm0_3 = ___libm_sse2_cosf(0x3f490fdb, x87_r1)
    int32_t ecx_3 = 0
    int32_t* esi_4 = arg4
    int32_t var_c4_1 = 0
    float var_98[0x4]
    __builtin_memcpy(&var_98, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x20)
    float var_b0 = var_f4_1
    float var_ac_1 = 0f
    float var_a8_1 = 0f
    float var_f0
    float var_e0
    float var_88[0x4]
    int128_t var_40
    int128_t var_30
    
    if (esi_3 s> 0)
        int32_t eax_5 = 0
        int32_t var_f4_2 = 0
        
        do
            int32_t* esi_6 = *(edi + 0x19c) + eax_5
            float xmm0_5[0x4]
            
            if (esi_6[8] != 0)
                uint32_t eax_7
                int32_t temp4_1
                
                if (*(edi + 0x20) == 1)
                    eax_7 = ecx_3 u/ 3 * 3
                    temp4_1 = ecx_3
                    ecx_3 = ecx_3 u% 3
                
                if (*(edi + 0x20) != 1 || temp4_1 != eax_7)
                    xmm0_5 = data_709450
                else
                    xmm0_5 = data_709410
            else
                xmm0_5 = data_709440
            
            var_88 = xmm0_5
            int32_t var_108_1 = ecx_3
            sub_56bda0(&var_f0, edi, arg2, arg3, _mm_cvtepi32_ps(zx.o(*esi_6)))
            int32_t* var_108_3 = &var_f0
            int128_t* var_10c_2 = &var_88
            
            if (*(edi + 4) == 2)
                sub_56cf50(arg4, &esi_6[3], var_10c_2, var_108_3)
            else
                sub_56c0c0(arg4, &esi_6[3], var_10c_2, var_108_3)
            
            if (var_c4_1 s> 0)
                var_e0.o = data_709450
                sub_56eb60(arg4, &var_68, &esi_6[3], &var_e0)
            
            if (*esi_6 == int.d(fconvert.t(arg5)))
                int32_t* var_108_5 = &var_c0
                int32_t* eax_10 = &var_e0
                
                if (esi_6[8] != 1)
                    eax_10 = &var_50
                
                var_e0.o = data_709440
                sub_56e7e0(arg4, &esi_6[3], &var_50, eax_10)
                int128_t* var_108_6 = &var_98
                int32_t* eax_11 = &var_e0
                
                if (esi_6[8] != 2)
                    eax_11 = &var_30
                
                sub_56e7e0(arg4, &esi_6[3], &var_30, eax_11)
                int32_t* var_108_7 = &var_b0
                int32_t* eax_12 = &var_e0
                
                if (esi_6[8] != 3)
                    eax_12 = &var_40
                
                sub_56e7e0(arg4, &esi_6[3], &var_40, eax_12)
            
            edi = arg1
            ecx_3 = var_c4_1 + 1
            int32_t var_74_2 = *esi_6
            int32_t var_70_2 = esi_6[1]
            var_68:8.d = esi_6[5]
            var_68.q = *(esi_6 + 0xc)
            int32_t var_54_2 = esi_6[8]
            var_68:0xc.d = esi_6[6]
            eax_5 = var_f4_2 + 0x24
            int32_t var_58_1 = esi_6[7]
            var_c4_1 = ecx_3
            var_f4_2 = eax_5
        while (ecx_3 s< esi_3)
        
        esi_4 = arg4
        var_9c_1 = xmm0_2
        var_a0_1 = var_c0
        var_88 = var_98
        var_f4_1 = var_b0
    
    struct sealengine::CEmitterPos::VTable** eax_18
    int32_t ecx_6
    eax_18, ecx_6 = sub_537660(&var_e0, *(edi + 0x20))
    int32_t var_108_9 = ecx_6
    var_98[0].q = *(eax_18 + 4)
    var_98[2] = eax_18[3]
    sub_56bda0(&var_f0, edi, arg2, arg3, arg5)
    int32_t eax_20
    int32_t edx_5
    edx_5:eax_20 = muls.dp.d(0x38e38e39, *(edi + 0x1a0) - *(edi + 0x19c))
    int32_t edx_6 = edx_5 s>> 3
    int32_t eax_23 = (edx_6 u>> 0x1f) + edx_6
    
    if (eax_23 u> 1)
        int32_t* ecx_9 = *(edi + 0x19c)
        
        if (not(_mm_cvtepi32_ps(zx.o(*ecx_9)) f> arg5)
                && not(arg5 f> _mm_cvtepi32_ps(zx.o(ecx_9[eax_23 * 9 - 9]))))
            int32_t* var_108_11 = &var_f0
            int32_t* var_10c_9 = &var_e0
            int32_t* var_110_8 = &var_98
            var_e0.o = data_7093f0
            
            if (*(edi + 4) == 2)
                sub_56cf50(esi_4, var_110_8, var_10c_9, var_108_11)
            else
                sub_56c0c0(esi_4, var_110_8, var_10c_9, var_108_11)
    
    int32_t eax_26 = *(edi + 0x24)
    
    if (eax_26 == 1)
        float xmm5_1 = var_f0
        float var_ec
        float var_e8
        float var_e4
        float var_d4_1 = ((xmm5_1 * var_a0_1) ^ (data_7094c0).d) + var_e4 * xmm0_3
            + ((var_ec * var_bc_1) ^ (data_7094c0).d) + ((var_e8 * var_9c_1) ^ (data_7094c0).d)
        var_e0 = xmm5_1 * xmm0_3 + var_e4 * var_a0_1 + var_ec * var_9c_1
            + ((var_e8 * var_bc_1) ^ (data_7094c0).d)
        float var_dc_1 = var_ec * xmm0_3 + var_e4 * var_bc_1 + var_e8 * var_a0_1
            + ((xmm5_1 * var_9c_1) ^ (data_7094c0).d)
        float var_d8_1 = var_e8 * xmm0_3 + var_e4 * var_9c_1 + xmm5_1 * var_bc_1
            + ((var_ec * var_a0_1) ^ (data_7094c0).d)
        sub_56d9e0(*(edi + 0x28), esi_4, &var_98, &var_50, &var_e0)
        float xmm2_3[0x4] = var_88
        float xmm1_25 = var_f0 f* xmm2_3
        float xmm4_3 = _mm_shuffle_ps(xmm2_3, xmm2_3, 0xff)
        float xmm1_27 = (xmm1_25 ^ (data_7094c0).d) + var_e4 * xmm4_3
        float xmm3_4[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0x55)
        float xmm2_4 = var_88[2]
        var_50 = xmm3_4
        int32_t xmm3_6 = var_50.d
        float var_d4_2 =
            xmm1_27 + ((var_ec f* xmm3_4) ^ (data_7094c0).d) + ((var_e8 * xmm2_4) ^ (data_7094c0).d)
        var_e0 = var_f0 * xmm4_3 + var_e4 f* var_88.d + var_ec * xmm2_4
            + ((var_e8 f* xmm3_6) ^ (data_7094c0).d)
        float var_dc_2 = var_ec * xmm4_3 + var_e4 f* xmm3_6 + var_e8 * var_88[0]
            + ((var_f0 * xmm2_4) ^ (data_7094c0).d)
        float var_d8_2 = var_e8 * xmm4_3 + var_e4 * xmm2_4 + var_f0 f* xmm3_6
            + ((var_ec * var_88[0]) ^ (data_7094c0).d)
        sub_56d9e0(*(edi + 0x28), esi_4, &var_98, &var_30, &var_e0)
        float xmm5_3 = var_f0
        float var_d4_3 = ((xmm5_3 * var_f4_1) ^ (data_7094c0).d) + var_e4 * xmm0_3
            + ((var_ec * var_ac_1) ^ (data_7094c0).d) + ((var_e8 * var_a8_1) ^ (data_7094c0).d)
        var_e0 = xmm5_3 * xmm0_3 + var_e4 * var_f4_1 + var_ec * var_a8_1
            + ((var_e8 * var_ac_1) ^ (data_7094c0).d)
        float var_dc_3 = var_ec * xmm0_3 + var_e4 * var_ac_1 + var_e8 * var_f4_1
            + ((xmm5_3 * var_a8_1) ^ (data_7094c0).d)
        float var_d8_3 = var_e8 * xmm0_3 + var_e4 * var_a8_1 + xmm5_3 * var_ac_1
            + ((var_ec * var_f4_1) ^ (data_7094c0).d)
        sub_56d9e0(*(edi + 0x28), esi_4, &var_98, &var_40, &var_e0)
    else if (eax_26 == 2)
        var_40 = data_709420
        sub_56d9e0(*(edi + 0x28), esi_4, &var_98, &var_40, &var_f0)

fsbase->NtTib.ExceptionList = ExceptionList
return 1
