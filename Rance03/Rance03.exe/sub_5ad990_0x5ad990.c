// 函数: sub_5ad990
// 地址: 0x5ad990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8be0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *arg1
int32_t eax_3 = arg1[1]
int32_t* result
struct sealengine::CEmitterRotate::VTable* var_4c
struct sealengine::CEmitterRotate::VTable* var_2c
struct sealengine::CEmitterRotate::VTable* arg_4

if (esi != eax_3)
    struct sealengine::CEmitterRotate::VTable* ebp_1 = arg_4
    
    if (ebp_1 s< *esi)
        var_4c = &sealengine::CEmitterRotate::`vftable'
        int32_t var_48_2 = 0
        int32_t var_44_2 = 0
        int32_t var_40_2 = 0
        int32_t var_4_1 = 2
        var_2c = ebp_1
        int32_t var_28_2 = 1
        struct sealengine::CEmitterRotate::VTable* const var_24_2 =
            &sealengine::CEmitterRotate::`vftable'
        int32_t var_20_2 = 0
        int32_t var_1c_2 = 0
        int32_t var_18_2 = 0
        int32_t var_14_2 = 0xffffffff
        var_4_1.b = 3
        result = sub_5ae750(arg1, &arg_4, esi, &var_2c)
    else if (esi == eax_3)
    label_5adb07:
        var_4c = &sealengine::CEmitterRotate::`vftable'
        int32_t var_48_3 = 0
        int32_t var_44_3 = 0
        int32_t var_40_3 = 0
        int32_t var_4_3 = 8
        var_2c = ebp_1
        int32_t var_28_3 = 1
        struct sealengine::CEmitterRotate::VTable* const var_24_3 =
            &sealengine::CEmitterRotate::`vftable'
        int32_t var_20_3 = 0
        int32_t var_1c_3 = 0
        int32_t var_18_3 = 0
        int32_t var_14_3 = 0xffffffff
        var_4_3.b = 9
        result = sub_5698f0(arg1, &var_2c)
    else
        int32_t* eax_7
        
        while (true)
            if (ebp_1 s< *esi)
                esi = &esi[7]
            else
                int32_t* ecx_1 = esi
                esi = &esi[7]
                arg_4 = ecx_1
                
                if (esi == eax_3)
                    eax_7 = sub_5698b0(&var_2c, ebp_1, ecx_1[1], &ecx_1[2])
                    int32_t var_4_5 = 4
                    break
                
                if (ebp_1 s< *esi)
                    int32_t edi_1 = *ecx_1
                    int32_t edx_2 = *esi - edi_1
                    
                    if (edx_2 s> 0)
                        float xmm0_2 = _mm_cvtepi32_ps(zx.o(edx_2))
                        float xmm2_3 = _mm_cvtepi32_ps(zx.o(ebp_1 - edi_1)) / xmm0_2
                        struct sealengine::CEmitterRotate::VTable* var_3c
                        sub_538210(&ecx_1[2], &var_4c, 
                            sub_538290(sub_538250(&esi[2], &var_3c, &ecx_1[2]), xmm2_3, &var_2c))
                        int32_t var_4_4 = 6
                        var_4_4.b = 7
                        result = sub_5ae750(arg1, &arg_4, esi, 
                            sub_5698b0(&var_2c, ebp_1, arg_4, &var_4c))
                    else
                        int32_t var_4_2 = 5
                        result = sub_5ae750(arg1, &arg_4, esi, 
                            sub_5698b0(&var_2c, ebp_1, ecx_1[1], &ecx_1[2]))
                    
                    goto label_5adb78
            
            if (esi == eax_3)
                goto label_5adb07
        
        result = sub_5698f0(arg1, eax_7)
else
    var_4c = &sealengine::CEmitterRotate::`vftable'
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t var_4 = 0
    var_2c = arg_4
    int32_t var_28_1 = 1
    struct sealengine::CEmitterRotate::VTable* const var_24_1 =
        &sealengine::CEmitterRotate::`vftable'
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0xffffffff
    var_4.b = 1
    result = sub_5698f0(arg1, &var_2c)
label_5adb78:
fsbase->NtTib.ExceptionList = ExceptionList
return result
