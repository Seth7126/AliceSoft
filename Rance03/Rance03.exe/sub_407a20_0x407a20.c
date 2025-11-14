// 函数: sub_407a20
// 地址: 0x407a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b31ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t esi = 1
int32_t var_4 = 0
int32_t edx = arg2[4]
int32_t ebx = 1
int32_t result

if (edx u<= 1)
label_407b57:
    result = 0
else
    while (true)
        int32_t ecx = arg2[5]
        char* eax_5
        
        if (ecx u< 0x10)
            eax_5 = arg2
        else
            eax_5 = *arg2
        
        struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<class std::string>::VTable** 
            var_44
        int32_t var_28
        int32_t var_14
        
        if (eax_5[esi] == 0x22)
            var_4.b = 1
            sub_403110(&var_40, sub_403070(arg2, &var_28, ebx, esi - ebx), nullptr, 0xffffffff)
            var_4.b = 0
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<class std::string>::VTable** 
                eax_17 = sub_69adc6(0x1c)
            var_44 = eax_17
            var_4.b = 2
            
            if (eax_17 == 0)
                result = esi + 2
                *arg1 = nullptr
            else
                var_4.b = 3
                *eax_17 = &dpanalysis::CValueLiteralToken<class std::string>::`vftable'{for `dpanalysis::IToken'}
                eax_17[6] = 0xf
                eax_17[5] = 0
                eax_17[1].b = 0
                sub_401ff0(&eax_17[1], &var_40, 0, 0xffffffff)
                *arg1 = eax_17
                result = esi + 2
            
            break
        
        char* eax_6
        
        if (ecx u< 0x10)
            eax_6 = arg2
        else
            eax_6 = *arg2
        
        if (eax_6[esi] == 0x5c && esi + 1 u< edx)
            var_4.b = 4
            sub_403110(&var_40, sub_403070(arg2, &var_28, ebx, esi - ebx), nullptr, 0xffffffff)
            var_4.b = 0
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            var_44.b = 0
            char* eax_11 = sub_403070(arg2, &var_28, esi, 0xffffffff)
            int32_t eax_12
            
            if (*(eax_11 + 0x10) u< 2)
                eax_12 = 0
            else
                eax_12 = sub_407fd0(&var_44, eax_11)
            
            esi = esi - 1 + eax_12
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            sub_4031c0(&var_40, 1, var_44.b)
            ebx = esi + 1
        
        edx = arg2[4]
        esi += 1
        
        if (esi u>= edx)
            goto label_407b57

if (var_2c u>= 0x10)
    j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
