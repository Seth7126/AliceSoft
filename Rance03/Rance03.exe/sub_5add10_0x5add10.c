// 函数: sub_5add10
// 地址: 0x5add10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8c50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *arg1
int32_t eax_3 = arg1[1]
int32_t* result
struct sealengine::CFrameMulAlpha::VTable* var_3c
int32_t var_24
int32_t arg_4

if (esi != eax_3)
    int32_t ebx_1 = arg_4
    
    if (ebx_1 s< *esi)
        var_3c = &sealengine::CFrameMulAlpha::`vftable'
        int32_t var_38_2 = 0x3f800000
        int32_t var_4_1 = 2
        var_24 = ebx_1
        int32_t var_20_2 = 1
        struct sealengine::CFrameMulAlpha::VTable* const var_1c_2 =
            &sealengine::CFrameMulAlpha::`vftable'
        int32_t var_18_2 = 0x3f800000
        int32_t var_14_2 = 0xffffffff
        var_4_1.b = 3
        result = sub_5ae7f0(arg1, &arg_4, esi, &var_24)
    else if (esi == eax_3)
    label_5ade44:
        var_3c = &sealengine::CFrameMulAlpha::`vftable'
        int32_t var_38_3 = 0x3f800000
        int32_t var_4_3 = 8
        var_24 = ebx_1
        int32_t var_20_3 = 1
        struct sealengine::CFrameMulAlpha::VTable* const var_1c_3 =
            &sealengine::CFrameMulAlpha::`vftable'
        int32_t var_18_3 = 0x3f800000
        int32_t var_14_3 = 0xffffffff
        var_4_3.b = 9
    label_5ade8c:
        result = sub_54e3b0(arg1, &var_24)
    else
        while (true)
            if (ebx_1 s< *esi)
                esi = &esi[5]
            else
                int32_t* ebp_1 = esi
                esi = &esi[5]
                
                if (esi == eax_3)
                    int32_t xmm0_4 = ebp_1[3]
                    int32_t eax_12 = ebp_1[1]
                    var_24 = ebx_1
                    int32_t var_20_5 = eax_12
                    struct sealengine::CFrameMulAlpha::VTable* const var_1c_5 =
                        &sealengine::CFrameMulAlpha::`vftable'
                    int32_t var_18_5 = xmm0_4
                    int32_t var_14_5 = 0xffffffff
                    int32_t var_4_5 = 4
                    goto label_5ade8c_1
                
                if (ebx_1 s< *esi)
                    int32_t edx_1 = *ebp_1
                    int32_t ecx_2 = *esi - edx_1
                    
                    if (ecx_2 s<= 0)
                        int32_t var_4_2 = 5
                        result = sub_5ae7f0(arg1, &arg_4, esi, 
                            sub_54e230(&var_24, ebx_1, ebp_1[1], &ebp_1[2]))
                        goto label_5ade95
                    
                    float xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx_2))
                    float xmm2_3 = _mm_cvtepi32_ps(zx.o(ebx_1 - edx_1)) / xmm0_2
                    struct sealengine::CFrameMulAlpha::VTable* var_34
                    struct sealengine::CFrameMulAlpha::VTable* var_2c
                    sub_539fb0(&ebp_1[2], &var_3c, 
                        sub_539ff0(sub_539fd0(&esi[2], &var_34, &ebp_1[2]), xmm2_3, &var_2c))
                    int32_t var_4_4 = 6
                    int32_t eax_11 = ebp_1[1]
                    var_24 = ebx_1
                    int32_t var_20_4 = eax_11
                    struct sealengine::CFrameMulAlpha::VTable* const var_1c_4 =
                        &sealengine::CFrameMulAlpha::`vftable'
                    int32_t var_14_4 = 0xffffffff
                    int32_t var_38
                    int32_t var_18_4 = var_38
                    var_4_4.b = 7
                    break
            
            if (esi == eax_3)
                goto label_5ade44
        
        result = sub_5ae7f0(arg1, &arg_4, esi, &var_24)
else
    var_3c = &sealengine::CFrameMulAlpha::`vftable'
    int32_t var_38_1 = 0x3f800000
    int32_t var_4 = 0
    var_24 = arg_4
    int32_t var_20_1 = 1
    struct sealengine::CFrameMulAlpha::VTable* const var_1c_1 =
        &sealengine::CFrameMulAlpha::`vftable'
    int32_t var_18_1 = 0x3f800000
    int32_t var_14_1 = 0xffffffff
    var_4.b = 1
label_5ade8c_1:
    result = sub_54e3b0(arg1, &var_24)
label_5ade95:
fsbase->NtTib.ExceptionList = ExceptionList
return result
