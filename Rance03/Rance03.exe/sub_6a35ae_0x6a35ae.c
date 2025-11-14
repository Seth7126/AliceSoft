// 函数: sub_6a35ae
// 地址: 0x6a35ae
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 0x30
int32_t var_8 = 0x747f40
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747f40 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_54 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_54
void* const var_58_13 = &data_6a35ba
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30_1
__builtin_memset(&var_30_1, 0, 0x14)
int32_t var_38 = 0
int32_t var_40 = 0
__lock(7)
int32_t var_8_1 = 0
void** var_24 = &data_74a608
int32_t var_2c
int32_t var_28
int32_t var_20

if (sub_6a326c(&var_20) == 0 && sub_6a3218(&var_28) == 0 && sub_6a3242(&var_2c) == 0)
    uint32_t CodePage = ____lc_codepage_func()
    data_75c988 = 0
    data_74a61c = 0xffffffff
    data_74a610 = 0xffffffff
    void* eax_3 = __getenv_helper_nolock("TZ")
    void* var_40_1 = eax_3
    
    if (eax_3 == 0 || *eax_3 == 0)
        int32_t eax_13 = data_75c980
        
        if (eax_13 != 0)
            _free(eax_13)
            data_75c980 = 0
        
        if (GetTimeZoneInformation(&data_75c990) != 0xffffffff)
            data_75c988 = 1
            int32_t ecx_10 = data_75c990 * 0x3c
            var_20 = ecx_10
            
            if (data_75c9d6 != 0)
                var_20 = ecx_10 + data_75c9e4 * 0x3c
            
            int32_t eax_16
            
            if (data_75ca2a != 0)
                eax_16 = data_75ca38
            
            if (data_75ca2a == 0 || eax_16 == 0)
                var_28 = 0
                var_2c = 0
            else
                var_28 = 1
                var_2c = (eax_16 - data_75c9e4) * 0x3c
            
            BOOL usedDefaultChar
            
            if (WideCharToMultiByte(CodePage, 0, &data_75c994, 0xffffffff, *var_24, 0x3f, nullptr, 
                    &usedDefaultChar) == 0 || usedDefaultChar != 0)
                **var_24 = 0
            else
                *(*var_24 + 0x3f) = 0
            
            if (WideCharToMultiByte(CodePage, 0, &data_75c9e8, 0xffffffff, var_24[1], 0x3f, 
                    nullptr, &usedDefaultChar) == 0 || usedDefaultChar != 0)
                *var_24[1] = 0
            else
                *(var_24[1] + 0x3f) = 0
        
        var_30_1 = 1
        goto label_6a37bd
    
    char* eax_4 = data_75c980
    
    if (eax_4 == 0)
    label_6a367c:
        int32_t eax_9 = sub_69e76b(_strlen(eax_3) + 1)
        data_75c980 = eax_9
        
        if (eax_9 == 0)
            goto label_6a368c
        
        void* eax_11 = _strlen(eax_3) + 1
        
        if (_strcpy_s(data_75c980, eax_11, eax_3) == 0)
            goto label_6a37bd
    else
        if (_strcmp(eax_3, eax_4) != 0)
            int32_t eax_6 = data_75c980
            
            if (eax_6 != 0)
                _free(eax_6)
            
            goto label_6a367c
        
    label_6a368c:
        var_30_1 = 1
    label_6a37bd:
        data_74a578 = var_20
        data_74a57c = var_28
        data_74a580 = var_2c
        int32_t var_8_2 = 0xfffffffe
        int32_t result = sub_6a383e()
        
        if (var_30_1 != 0)
            goto label_69e898
        
        if (_strncpy_s(*var_24, 0x40, eax_3, 3) == 0)
            void* edi_2 = eax_3 + 3
            
            if (*edi_2 == 0x2d)
                var_38 = 1
                edi_2 += 1
            
            int32_t ecx_12 = __sanitizer::internal_atoll(edi_2) * 0xe10
            var_20 = ecx_12
            
            while (true)
                int32_t eax_32
                eax_32.b = *edi_2
                
                if (eax_32.b != 0x2b)
                    if (eax_32.b s< 0x30)
                        break
                    
                    if (eax_32.b s> 0x39)
                        break
                
                edi_2 += 1
            
            if (*edi_2 == 0x3a)
                edi_2 += 1
                int32_t eax_34 = __sanitizer::internal_atoll(edi_2) * 0x3c
                ecx_12 = var_20 + eax_34
                var_20 = ecx_12
                
                while (true)
                    eax_34.b = *edi_2
                    
                    if (eax_34.b s< 0x30)
                        break
                    
                    if (eax_34.b s> 0x39)
                        break
                    
                    edi_2 += 1
                
                if (*edi_2 == 0x3a)
                    edi_2 += 1
                    int32_t eax_35 = __sanitizer::internal_atoll(edi_2)
                    ecx_12 = var_20 + eax_35
                    var_20 = ecx_12
                    
                    while (true)
                        eax_35.b = *edi_2
                        
                        if (eax_35.b s< 0x30)
                            break
                        
                        if (eax_35.b s> 0x39)
                            break
                        
                        edi_2 += 1
            
            if (var_38 != 0)
                var_20 = neg.d(ecx_12)
            
            if (*edi_2 == 0)
                var_28 = 0
                *var_24[1] = 0
            label_6a38ce:
                data_74a578 = var_20
                int32_t esi_6 = var_28
                result = sub_6a3200()
                data_74a57c = esi_6
            label_69e898:
                fsbase->NtTib.ExceptionList = ExceptionList
                void* const __saved_ebp_2 = &data_6a38df
                return result
            
            var_28 = 1
            
            if (_strncpy_s(var_24[1], 0x40, edi_2, 3) == 0)
                goto label_6a38ce

int32_t var_68
__builtin_memset(&var_68, 0, 0x14)
__invoke_watson()
noreturn
