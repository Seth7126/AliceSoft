// 函数: sub_5ae030
// 地址: 0x5ae030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8cc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *arg1
int32_t eax_3 = arg1[1]
int32_t* result
struct sealengine::CFrameMulColor::VTable* var_58
struct sealengine::CFrameMulColor::VTable* var_30
struct sealengine::CFrameMulColor::VTable* arg_4

if (esi != eax_3)
    struct sealengine::CFrameMulColor::VTable* ebx_1 = arg_4
    
    if (ebx_1 s>= *esi)
        if (esi == eax_3)
        label_5ae168:
            int128_t xmm0_3 = data_709450
            var_58 = &sealengine::CFrameMulColor::`vftable'
            int128_t var_54_3 = xmm0_3
            int32_t var_4_3 = 8
            var_30 = ebx_1
            int32_t var_2c_3 = 1
            struct sealengine::CFrameMulColor::VTable* const var_28_3 =
                &sealengine::CFrameMulColor::`vftable'
            int128_t var_24_3 = xmm0_3
            int32_t var_14_3 = 0xffffffff
            var_4_3.b = 9
        else
            while (true)
                if (ebx_1 s< *esi)
                    esi = &esi[8]
                else
                    int32_t* ebp_1 = esi
                    esi = &esi[8]
                    
                    if (esi == eax_3)
                        int128_t xmm0_6 = *(ebp_1 + 0xc)
                        int32_t eax_12 = ebp_1[1]
                        var_30 = ebx_1
                        int32_t var_2c_4 = eax_12
                        struct sealengine::CFrameMulColor::VTable* const var_28_4 =
                            &sealengine::CFrameMulColor::`vftable'
                        int128_t var_24_4 = xmm0_6
                        int32_t var_14_4 = 0xffffffff
                        int32_t var_4_5 = 4
                        break
                    
                    if (ebx_1 s< *esi)
                        int32_t edx_1 = *ebp_1
                        int32_t ecx_2 = *esi - edx_1
                        
                        if (ecx_2 s> 0)
                            float xmm0_5 = _mm_cvtepi32_ps(zx.o(ecx_2))
                            float xmm2_3[0x4] = _mm_cvtepi32_ps(zx.o(ebx_1 - edx_1)) / xmm0_5
                            struct sealengine::CFrameMulColor::VTable* var_44
                            sub_53a0a0(&ebp_1[2], &var_58, 
                                sub_53a160(sub_53a100(&esi[2], &var_44, &ebp_1[2]), xmm2_3, 
                                    &var_30))
                            int32_t var_4_4 = 6
                            var_4_4.b = 7
                            result = sub_5ae880(arg1, &arg_4, esi, 
                                sub_54e1d0(&var_30, ebx_1, ebp_1[1], &var_58))
                        else
                            int32_t var_4_2 = 5
                            result = sub_5ae880(arg1, &arg_4, esi, 
                                sub_54e1d0(&var_30, ebx_1, ebp_1[1], &ebp_1[2]))
                        
                        goto label_5ae1bb
                
                if (esi == eax_3)
                    goto label_5ae168
        
        result = sub_54e2d0(arg1, &var_30)
    else
        int128_t xmm0_2 = data_709450
        var_58 = &sealengine::CFrameMulColor::`vftable'
        int128_t var_54_2 = xmm0_2
        int32_t var_4_1 = 2
        var_30 = ebx_1
        int32_t var_2c_2 = 1
        struct sealengine::CFrameMulColor::VTable* const var_28_2 =
            &sealengine::CFrameMulColor::`vftable'
        int128_t var_24_2 = xmm0_2
        int32_t var_14_2 = 0xffffffff
        var_4_1.b = 3
        result = sub_5ae880(arg1, &arg_4, esi, &var_30)
else
    int128_t xmm0_1 = data_709450
    var_58 = &sealengine::CFrameMulColor::`vftable'
    int128_t var_54_1 = xmm0_1
    int32_t var_4 = 0
    var_30 = arg_4
    int32_t var_2c_1 = 1
    struct sealengine::CFrameMulColor::VTable* const var_28_1 =
        &sealengine::CFrameMulColor::`vftable'
    int128_t var_24_1 = xmm0_1
    int32_t var_14_1 = 0xffffffff
    var_4.b = 1
    result = sub_54e2d0(arg1, &var_30)
label_5ae1bb:
fsbase->NtTib.ExceptionList = ExceptionList
return result
