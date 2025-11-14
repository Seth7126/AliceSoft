// 函数: sub_510cf0
// 地址: 0x510cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_12 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2024
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ebx = arg3

if (ebx u<= 3)
    int32_t __saved_edi
    result = (*(**(*(arg1 + 0x28) + (ebx << 2)) + 8))(__security_cookie ^ &__saved_edi)
    
    if (result != arg2)
        (*(**(*(arg1 + 0x28) + (ebx << 2)) + 4))()
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_8
        struct partsengine::CSprite::partsengine::CMovieSprite::VTable** ecx_3
        
        if (arg2 - 0xb u> 0xb)
            eax_8 = sub_69adc6(0x5c)
            arg3 = eax_8
            int32_t var_4_11 = 0xb
        label_510f8a:
            
            if (eax_8 == 0)
            label_510f99:
                result = *(arg1 + 0x28)
                result[ebx] = nullptr
            else
                ecx_3 = sub_4fdb30(eax_8)
                result = *(arg1 + 0x28)
                result[ebx] = ecx_3
        else
            switch (arg2)
                case 0xb
                    eax_8 = sub_69adc6(0x5c)
                    arg3 = eax_8
                    int32_t var_4 = 0
                    goto label_510f8a
                case 0xc
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_9 =
                        sub_69adc6(0x5c)
                    arg3 = eax_9
                    int32_t var_4_1 = 1
                    
                    if (eax_9 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_509810(eax_9)
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
                case 0xd
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_11 =
                        sub_69adc6(0x15c)
                    arg3 = eax_11
                    int32_t var_4_2 = 2
                    
                    if (eax_11 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_517c70(eax_11)
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
                case 0xe
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_13 =
                        sub_69adc6(0x5c)
                    arg3 = eax_13
                    int32_t var_4_3 = 3
                    
                    if (eax_13 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_504100(eax_13)
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
                case 0xf
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_15 =
                        sub_69adc6(0x5c)
                    arg3 = eax_15
                    int32_t var_4_4 = 4
                    
                    if (eax_15 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_51e5e0(eax_15)
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
                case 0x10
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_17 =
                        sub_69adc6(0x2f4)
                    arg3 = eax_17
                    int32_t var_4_5 = 5
                    
                    if (eax_17 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_50c420(eax_17)
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
                case 0x11
                    struct partsengine::CSprite::partsengine::CRectangleDetectionSprite::VTable** 
                        eax_19 = sub_69adc6(0x40)
                    
                    if (eax_19 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_512770(eax_19)
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
                case 0x12
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_21 =
                        sub_69adc6(0x50)
                    arg3 = eax_21
                    int32_t var_4_6 = 6
                    
                    if (eax_21 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_4ff5c0(eax_21, *(arg1 + 0x3c))
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
                case 0x13
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_23 =
                        sub_69adc6(0x4c)
                    arg3 = eax_23
                    int32_t var_4_7 = 7
                    
                    if (eax_23 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_4fbdc0(eax_23)
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
                case 0x14
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_25 =
                        sub_69adc6(0x78)
                    arg3 = eax_25
                    int32_t var_4_8 = 8
                    
                    if (eax_25 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_491950(eax_25, *(arg1 + 0x34), *(arg1 + 0x38))
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
                case 0x15
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_27 =
                        sub_69adc6(0x2c)
                    arg3 = eax_27
                    int32_t var_4_9 = 9
                    
                    if (eax_27 == 0)
                        result = *(arg1 + 0x28)
                        result[ebx] = 0
                    else
                        *eax_27 =
                            &partsengine::C3DLayerSprite::`vftable'{for `partsengine::CSprite'}
                        eax_27[1] = 1
                        sub_505680(&eax_27[2])
                        eax_27[9].b = 1
                        eax_27[0xa] = 0xffffffff
                        result = *(arg1 + 0x28)
                        result[ebx] = eax_27
                case 0x16
                    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_28 =
                        sub_69adc6(0x60)
                    arg3 = eax_28
                    int32_t var_4_10 = 0xa
                    
                    if (eax_28 == 0)
                        goto label_510f99
                    
                    ecx_3 = sub_4e3ff0(eax_28)
                    result = *(arg1 + 0x28)
                    result[ebx] = ecx_3
        *(arg1 + 0x14) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
