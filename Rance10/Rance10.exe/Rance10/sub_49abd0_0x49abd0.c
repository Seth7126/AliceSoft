// 函数: sub_49abd0
// 地址: 0x49abd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730558
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_3 = *(arg1 + 0x24)

if (result_3 != arg1)
    result = *(arg2 + 0x24)

if (result_3 == arg1 || result == arg2)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = nullptr
    void var_40
    
    if (result_3 != 0)
        if (result_3 != arg1)
            result_1 = result_3
            *(arg1 + 0x24) = 0
            result_2 = result_1
        else
            result = (*(*result_3 + 4))(&var_40)
            result_1 = result
            result_2 = result_1
            int32_t var_8_1 = 0
            int32_t* ebx_1 = *(arg1 + 0x24)
            
            if (ebx_1 != 0)
                result.b = ebx_1 != arg1
                result = (*(*ebx_1 + 0x10))(zx.d(result.b))
                result_1 = result_2
                *(arg1 + 0x24) = 0
            
            int32_t var_8_2 = 0xffffffff
    
    int32_t* edx_1 = *(arg2 + 0x24)
    
    if (edx_1 != 0)
        if (edx_1 != arg2)
            *(arg1 + 0x24) = edx_1
            *(arg2 + 0x24) = 0
        else
            result = (*(*edx_1 + 4))(arg1)
            *(arg1 + 0x24) = result
            int32_t var_8_3 = 1
            int32_t* ecx_3 = *(arg2 + 0x24)
            
            if (ecx_3 != 0)
                result.b = ecx_3 != arg2
                result = (*(*ecx_3 + 0x10))(zx.d(result.b))
                *(arg2 + 0x24) = 0
            
            int32_t var_8_4 = 0xffffffff
            result_1 = result_2
    
    if (result_1 != 0)
        result = &var_40
        int32_t var_1c_1
        
        if (result_1 != &var_40)
            *(arg2 + 0x24) = result_1
            result_1 = nullptr
            var_1c_1 = 0
        else
            result = (*result_1)->Handler(arg2)
            *(arg2 + 0x24) = result
            int32_t var_8_5 = 2
            result_1 = result_2
            
            if (result_1 != 0)
                result = (*result_1)->__offset(0x10).d(result_1 != &var_40)
                result_1 = nullptr
                var_1c_1 = 0
    
    int32_t var_8_6 = 3
    
    if (result_1 != 0)
        result = (*result_1)->__offset(0x10).d(result_1 != &var_40)
else
    *(arg1 + 0x24) = result
    *(arg2 + 0x24) = result_3

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
