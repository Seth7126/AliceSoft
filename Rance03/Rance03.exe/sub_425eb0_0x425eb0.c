// 函数: sub_425eb0
// 地址: 0x425eb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4e00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (data_75d534 == 0)
    result.b = 0
else
    void* var_78_1 = arg1
    result = sub_6203f0()
    
    if (result == 0)
        result.b = 0
    else
        result = (*result)->Next(0x6dab64)
        
        if (result == 0)
            result.b = 0
        else
            sub_401f60(&var_64, (*result)->__offset(0xc).d(eax_4))
            int32_t var_c_1 = 0
            char var_34
            char* eax_7 = sub_402a20(&var_34, &var_64)
            var_c_1.b = 1
            char var_4c
            char* eax_8 = sub_410a80(eax_7.b, eax_7, &var_4c, ".DebugV")
            
            if (arg1 + 0xc != eax_8)
                if (*(arg1 + 0x20) u>= 0x10)
                    j__free(*(arg1 + 0xc))
                
                *(arg1 + 0x20) = 0xf
                *(arg1 + 0x1c) = 0
                *(arg1 + 0xc) = 0
                sub_4030b0(arg1 + 0xc, eax_8)
            
            int32_t var_38
            
            if (var_38 u>= 0x10)
                j__free(var_4c.d)
            
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            var_4c = 0
            int32_t var_20
            
            if (var_20 u>= 0x10)
                j__free(var_34.d)
            
            int32_t var_c_2 = 0xffffffff
            int32_t var_20_1 = 0xf
            int32_t var_24_1 = 0
            var_34 = 0
            int32_t var_50
            
            if (var_50 u>= 0x10)
                j__free(var_64.d)
            
            int32_t var_50_1 = 0xf
            int32_t var_54_1 = 0
            var_64 = 0
            result.b = sub_42c7c0(arg1 + 0x8c0).b != 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
