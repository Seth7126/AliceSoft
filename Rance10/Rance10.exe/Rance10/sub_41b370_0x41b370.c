// 函数: sub_41b370
// 地址: 0x41b370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0)
    result.b = 0
else
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x38e38e39, *(arg1 + 0xc) - *(arg1 + 8))
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s>= (edx_2 u>> 0x1f) + edx_2)
        result.b = 0
    else
        void* esi_1 = &(*(arg1 + 8))[arg2 * 0x12]
        
        if (esi_1 == 0)
            result.b = 0
        else
            int32_t var_8_1 = 0
            void* var_2c
            sub_4055a0(esi_1 + 0x18, sub_403360(&var_2c, arg3), 0, 0xffffffff)
            struct _EXCEPTION_REGISTRATION_RECORD** var_18
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c, var_18 + 1, 1)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
