// 函数: sub_5ad320
// 地址: 0x5ad320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *arg1
int32_t eax_3 = arg1[1]
int32_t* result
struct sealengine::CEmitterPos::VTable* var_64
struct sealengine::CEmitterPos::VTable* var_34
int32_t* arg_4

if (esi != eax_3)
    struct sealengine::CEmitterPos::VTable* ebp_1 = arg_4
    
    if (ebp_1 s>= *esi)
        int32_t* eax_5
        
        if (esi == eax_3)
        label_5ad4ad:
            var_64 = &sealengine::CEmitterPos::`vftable'
            int128_t var_60_2
            __builtin_memset(&var_60_2, 0, 0x14)
            int32_t var_4_3 = 8
            eax_5 = sub_565ec0(&var_34, ebp_1, 1, &var_64)
            var_4_3.b = 9
        else
            while (true)
                if (ebp_1 s< *esi)
                    esi = &esi[9]
                else
                    int32_t* ecx_1 = esi
                    esi = &esi[9]
                    arg_4 = ecx_1
                    
                    if (esi == eax_3)
                        eax_5 = sub_565ec0(&var_34, ebp_1, ecx_1[1], &ecx_1[2])
                        int32_t var_4_5 = 4
                        break
                    
                    if (ebp_1 s< *esi)
                        int32_t edi_1 = *ecx_1
                        int32_t edx_2 = *esi - edi_1
                        
                        if (edx_2 s> 0)
                            float xmm0_2 = _mm_cvtepi32_ps(zx.o(edx_2))
                            float xmm3_3 = _mm_cvtepi32_ps(zx.o(ebp_1 - edi_1)) / xmm0_2
                            struct sealengine::CEmitterPos::VTable* var_4c
                            sub_538010(&ecx_1[2], &var_64, 
                                sub_5380f0(sub_538080(&esi[2], &var_4c, &ecx_1[2]), xmm3_3, 
                                    &var_34))
                            int32_t var_4_4 = 6
                            var_4_4.b = 7
                            result = sub_5ae660(arg1, &arg_4, esi, 
                                sub_565ec0(&var_34, ebp_1, arg_4[1], &var_64))
                        else
                            int32_t var_4_2 = 5
                            result = sub_5ae660(arg1, &arg_4, esi, 
                                sub_565ec0(&var_34, ebp_1, ecx_1[1], &ecx_1[2]))
                        
                        goto label_5ad4ec
                
                if (esi == eax_3)
                    goto label_5ad4ad
        
        result = sub_565f30(arg1, eax_5)
    else
        var_64 = &sealengine::CEmitterPos::`vftable'
        int128_t var_60_1
        __builtin_memset(&var_60_1, 0, 0x14)
        int32_t var_4_1 = 2
        int64_t var_28_2 = 0
        int32_t xmm1_2 = _mm_bsrli_si128(zx.o(0), 8)
        var_34 = ebp_1
        int32_t var_30_2 = 1
        struct sealengine::CEmitterPos::VTable* const var_2c_2 = &sealengine::CEmitterPos::`vftable'
        int32_t var_20_2 = xmm1_2
        int32_t var_1c_2 = 0
        int32_t var_18_2 = 0
        int32_t var_14_2 = 0xffffffff
        var_4_1.b = 3
        result = sub_5ae660(arg1, &arg_4, esi, &var_34)
else
    var_64 = &sealengine::CEmitterPos::`vftable'
    int128_t var_60
    __builtin_memset(&var_60, 0, 0x14)
    int32_t var_4 = 0
    int32_t* eax_4 = arg_4
    int64_t var_28_1 = 0
    int32_t xmm1_1 = _mm_bsrli_si128(zx.o(0), 8)
    var_34 = eax_4
    int32_t var_30_1 = 1
    struct sealengine::CEmitterPos::VTable* const var_2c_1 = &sealengine::CEmitterPos::`vftable'
    int32_t var_20_1 = xmm1_1
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0xffffffff
    var_4.b = 1
    result = sub_565f30(arg1, &var_34)
label_5ad4ec:
fsbase->NtTib.ExceptionList = ExceptionList
return result
