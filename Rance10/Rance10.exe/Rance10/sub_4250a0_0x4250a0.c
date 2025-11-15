// 函数: sub_4250a0
// 地址: 0x4250a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if ((*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2 s<= arg3)
label_42512e:
    char* var_2c
    sub_424b40(arg1, &var_2c, arg3)
    char* edx_1 = &var_2c
    int32_t var_8_1 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c
    
    void* ebx
    ebx.b = sub_63a670(arg4, edx_1, arg2, arg4) != 0
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result = ebx.b
else
    int32_t ecx = *(arg1 + 0x48)
    
    if ((*(arg1 + 0x4c) - ecx) s>> 2 u<= arg3)
        sub_6d0947("invalid vector<T> subscript")
        noreturn
    
    if (sub_42ad70(*(ecx + (arg3 << 2)), arg4, arg1 + 0x54, *(arg1 + 0x10)) == 0)
        goto label_42512e
    
    result = sub_4254c0(arg1 + 0x14, arg2, arg3, arg4, *(arg1 + 0x10))

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
