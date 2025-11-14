// 函数: sub_48ef50
// 地址: 0x48ef50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb229
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    sub_48eec0(arg1)
    *(arg1 + 0xc) = arg2
    (**arg2)(eax_4)
    struct _EXCEPTION_REGISTRATION_RECORD** result_2
    int32_t* var_60
    struct partsengine::CSpriteEngineWrapper::VTable* var_5c
    
    if (arg5 != 3)
        result = arg4
        
        if (result s> 0)
            *(arg1 + 0x34) = arg5
            *(arg1 + 0x2c) = result
            int32_t var_28
            sub_402a20(&var_28, arg3)
            int32_t var_4_2 = 1
            char var_40
            sub_4026d0(&var_40, arg3)
            var_4_2.b = 2
            struct partsengine::CSpriteEngineWrapper::VTable* ebx_1 =
                sub_4937f0(*(arg1 + 0x10), arg3)
            
            if (ebx_1 != 0)
            label_48f0c5:
                struct _EXCEPTION_REGISTRATION_RECORD** result_4 = sub_69adc6(0x1c)
                result_2 = result_4
                var_4_2.b = 3
                struct partsengine::CLLSprite::VTable** result_7
                
                if (result_4 == 0)
                    result_7 = nullptr
                else
                    result_7 = sub_505680(result_4)
                
                var_4_2.b = 2
                result_2 = result_7
                sub_5066b0(result_7, ebx_1)
                struct partsengine::CSpriteEngineWrapper::VTable* var_80_10 = ebx_1
                char eax_14 = sub_4876d0(*(arg1 + 0xc))
                void* ecx_17 = result_7[1]
                
                if (ecx_17 != 0)
                    *(ecx_17 + 0xc1) = eax_14
                
                void* eax_15 = result_7[1]
                
                if (eax_15 != 0)
                    *(eax_15 + 0x2c) = 0
                
                sub_412de0(arg1 + 0x14, &result_2)
                sub_421cd0(arg1 + 0x20, arg3)
            else
                ebx_1 = sub_487610(*(arg1 + 0xc), arg3)
                
                if (ebx_1 != 0)
                    goto label_48f0c5
            
            int32_t ebp_1 = 1
            int32_t var_58
            int32_t var_44
            
            while (true)
                int32_t* var_80_13 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                    &var_40)
                int32_t var_84_2 = ebp_1
                int32_t* var_88_1 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                    &var_28)
                sub_4691f0(&var_58, "%s_%02d.%s")
                var_4_2.b = 4
                struct _EXCEPTION_REGISTRATION_RECORD** result_1 =
                    sub_4937f0(*(arg1 + 0x10), &var_58)
                
                if (result_1 == 0)
                    result = sub_487610(*(arg1 + 0xc), &var_58)
                    result_1 = result
                    
                    if (result_1 == 0)
                        break
                
                struct partsengine::CLLSprite::VTable** result_5 = sub_69adc6(0x1c)
                result_2 = result_5
                var_4_2.b = 5
                struct partsengine::CSpriteEngineWrapper::VTable* ebx_2
                
                if (result_5 == 0)
                    ebx_2 = nullptr
                else
                    ebx_2 = sub_505680(result_5)
                
                var_4_2.b = 4
                var_5c = ebx_2
                sub_5066b0(ebx_2, result_1)
                result_2 = result_1
                void* esi_3 = *(arg1 + 0xc)
                sub_420040(esi_3 + 0x48, &var_60, &result_2)
                int32_t* eax_20 = var_60
                
                if (eax_20 != *(esi_3 + 0x48))
                    eax_20.b = eax_20[5] == 1
                else
                    eax_20.b = 0
                
                struct partsengine::CSpriteEngineWrapper::VTable ecx_27 = ebx_2
                
                if (ecx_27 != 0)
                    *(ecx_27 + 0xc1) = eax_20.b
                
                struct partsengine::CSpriteEngineWrapper::VTable eax_21 = ebx_2
                
                if (eax_21 != 0)
                    *(eax_21 + 0x2c) = 0
                
                sub_412de0(arg1 + 0x14, &var_5c)
                sub_421cd0(arg1 + 0x20, &var_58)
                var_4_2.b = 2
                
                if (var_44 u>= 0x10)
                    j__free(var_58)
                
                ebp_1 += 1
            
            if (var_44 u>= 0x10)
                result = j__free(var_58)
            
            int32_t var_2c
            
            if (var_2c u>= 0x10)
                result = j__free(var_40.d)
            
            int32_t var_2c_1 = 0xf
            int32_t var_30_1 = 0
            var_40 = 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                result = j__free(var_28)
    else
        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = sub_69adc6(0x1c)
        result_2 = result_3
        int32_t var_4 = 0
        struct partsengine::CLLSprite::VTable** result_6
        
        if (result_3 == 0)
            result_6 = nullptr
        else
            result_6 = sub_505680(result_3)
        
        int32_t var_4_1 = 0xffffffff
        void* ecx_3 = *(arg1 + 0x10)
        result_2 = result_6
        struct partsengine::CSpriteEngineWrapper::VTable* esi_1 = sub_4937f0(ecx_3, arg3)
        
        if (esi_1 == 0)
            esi_1 = sub_487610(*(arg1 + 0xc), arg3)
        
        sub_5066b0(result_6, esi_1)
        var_5c = esi_1
        void* esi_2 = *(arg1 + 0xc)
        sub_420040(esi_2 + 0x48, &var_60, &var_5c)
        int32_t* eax_9 = var_60
        
        if (eax_9 != *(esi_2 + 0x48))
            eax_9.b = eax_9[5] == 1
        else
            eax_9.b = 0
        
        void* ecx_7 = result_6[1]
        
        if (ecx_7 != 0)
            *(ecx_7 + 0xc1) = eax_9.b
        
        void* eax_10 = result_6[1]
        
        if (eax_10 != 0)
            *(eax_10 + 0x2c) = 0
        
        sub_412de0(arg1 + 0x14, &result_2)
        result = sub_421cd0(arg1 + 0x20, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return result
