// 函数: sub_623660
// 地址: 0x623660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (sub_62ab60(arg1, arg3) == 0)
    result = false
else if (arg3 s>= 0)
    int32_t var_44_1 = arg3
    int32_t* eax_3 = sub_60b530(arg2 + 0x44)
    
    if (eax_3 != 0)
        void** ecx_5 = &eax_3[1]
        void* eax_5 = ecx_5[4]
        
        if (eax_3[6] u>= 0x10)
            ecx_5 = *ecx_5
        
        if (sub_62ab00(arg1, ecx_5, eax_5 + 1) == 0)
            result = false
        else if (sub_62ab60(arg1, arg3 - *eax_3) == 0)
            result = false
        else
            result = sub_62ab60(arg1, eax_3[0x17]) != 0
    else
        void var_30
        sub_403360(&var_30, 0x76d6bc)
        int32_t* var_8_1 = eax_3
        int32_t* ebx_1
        ebx_1.b = sub_6c52e0(&var_30)
        sub_403320(&var_30)
        result = ebx_1.b
else
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
