// 函数: sub_5ae330
// 地址: 0x5ae330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8d30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *arg1
int32_t eax_3 = arg1[1]
int32_t var_60
int128_t var_54
struct sealengine::CFrameAddColor::VTable* var_2c
int32_t arg_4

if (esi != eax_3)
    int32_t ecx = arg_4
    
    if (ecx s< *esi)
        var_2c = &sealengine::CFrameAddColor::`vftable'
        int128_t var_28_2 = zx.o(0)
        int32_t var_4_1 = 2
        var_60 = ecx
        int32_t var_5c_1 = 1
        struct sealengine::CFrameAddColor::VTable* const var_58_1 =
            &sealengine::CFrameAddColor::`vftable'
        var_54 = zx.o(0)
        int32_t var_44_1 = 0xffffffff
        var_4_1.b = 3
        int32_t* eax_5 = sub_5ae900(arg1, &arg_4, esi, &var_60)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    if (esi == eax_3)
    label_5ae48e:
        var_2c = &sealengine::CFrameAddColor::`vftable'
        int128_t var_28_3 = zx.o(0)
        int32_t var_4_3 = 8
        var_60 = ecx
        int32_t var_5c_2 = 1
        struct sealengine::CFrameAddColor::VTable* const var_58_2 =
            &sealengine::CFrameAddColor::`vftable'
        var_54 = zx.o(0)
        int32_t var_44_2 = 0xffffffff
        var_4_3.b = 9
    else
        while (true)
            if (ecx s< *esi)
                esi = &esi[8]
            else
                int32_t* edx_1 = esi
                esi = &esi[8]
                
                if (esi == eax_3)
                    int128_t xmm0_3 = *(edx_1 + 0xc)
                    int32_t eax_19 = edx_1[1]
                    var_60 = ecx
                    int32_t var_5c_3 = eax_19
                    struct sealengine::CFrameAddColor::VTable* const var_58_3 =
                        &sealengine::CFrameAddColor::`vftable'
                    var_54 = xmm0_3
                    int32_t var_44_3 = 0xffffffff
                    int32_t var_4_5 = 4
                    break
                
                if (ecx s< *esi)
                    int32_t eax_7 = *esi - *edx_1
                    
                    if (eax_7 s<= 0)
                        int32_t var_4_2 = 5
                        int32_t* eax_10 = sub_5ae900(arg1, &arg_4, esi, 
                            sub_54e200(&var_60, ecx, edx_1[1], &edx_1[2]))
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_10
                    
                    int32_t eax_13 = ecx - *edx_1
                    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_7))
                    float xmm2_2[0x4] = _mm_cvtepi32_ps(zx.o(eax_13)) / xmm0_2
                    struct sealengine::CFrameAddColor::VTable* var_40
                    sub_539df0(&edx_1[2], &var_2c, 
                        sub_539eb0(sub_539e50(&esi[2], &var_40, &edx_1[2]), xmm2_2, &var_54))
                    int32_t var_4_4 = 6
                    var_4_4.b = 7
                    int32_t* eax_18 =
                        sub_5ae900(arg1, &arg_4, esi, sub_54e200(&var_60, arg_4, edx_1[1], &var_2c))
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_18
            
            if (esi == eax_3)
                goto label_5ae48e
else
    var_2c = &sealengine::CFrameAddColor::`vftable'
    int128_t var_28_1 = zx.o(0)
    int32_t var_4 = 0
    var_60 = arg_4
    int32_t var_5c = 1
    struct sealengine::CFrameAddColor::VTable* const var_58 = &sealengine::CFrameAddColor::`vftable'
    var_54 = zx.o(0)
    int32_t var_44 = 0xffffffff
    var_4.b = 1
int32_t eax_11 = sub_54e340(arg1, &var_60)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_11
