// 函数: sub_40ec30
// 地址: 0x40ec30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727b8f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = 0xf
int32_t var_1c = 0
int32_t var_18 = 0xf
char var_2c = 0
int32_t edi = 1
int32_t var_8_1 = 0
int32_t edx = arg2[4]
int32_t ebx = 1
int32_t result

if (edx u<= 1)
label_40ed5c:
    result = 0
else
    while (true)
        int32_t ecx_1 = arg2[5]
        char* eax_3
        
        if (ecx_1 u< 0x10)
            eax_3 = arg2
        else
            eax_3 = *arg2
        
        struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<class std::string>::VTable** 
            var_48
        void* var_44
        int32_t var_30
        
        if (eax_3[edi] == 0x22)
            var_8_1.b = 1
            sub_4055a0(&var_2c, sub_405480(arg2, &var_44, ebx, edi - ebx), 0, 0xffffffff)
            var_8_1.b = 0
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<class std::string>::VTable** 
                eax_22 = sub_6e810c(0x1c)
            var_48 = eax_22
            var_8_1.b = 3
            *eax_22 = &dpanalysis::CValueLiteralToken<class std::string>::`vftable'{for `dpanalysis::IToken'}
            eax_22[6] = 0xf
            eax_22[5] = 0
            eax_22[1].b = 0
            sub_403590(&eax_22[1], &var_2c, 0, 0xffffffff)
            result = edi + 2
            ecx = var_18
            *arg1 = eax_22
            break
        
        char* eax_4
        
        if (ecx_1 u< 0x10)
            eax_4 = arg2
        else
            eax_4 = *arg2
        
        if (eax_4[edi] == 0x5c && edi + 1 u< edx)
            var_8_1.b = 4
            sub_4055a0(&var_2c, sub_405480(arg2, &var_44, ebx, edi - ebx), 0, 0xffffffff)
            var_8_1.b = 0
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            var_48.b = 0
            char* eax_11
            int32_t edx_1
            eax_11, edx_1 = sub_405480(arg2, &var_44, edi, 0xffffffff)
            edi += sub_40f180(eax_11, edx_1, &var_48, eax_11) - 1
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            sub_405500(&var_2c, 1, var_48.b)
            ebx = edi + 1
        
        edx = arg2[4]
        edi += 1
        
        if (edi u>= edx)
            ecx = var_18
            goto label_40ed5c

if (ecx u>= 0x10)
    sub_403160(var_2c.d, ecx + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
