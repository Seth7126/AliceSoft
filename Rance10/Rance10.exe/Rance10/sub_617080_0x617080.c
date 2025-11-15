// 函数: sub_617080
// 地址: 0x617080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t ebx = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t edx = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
arg1[0x7f] = ecx - 2
void* eax_7 = sub_6227b0(&arg1[0x52], edx)
int32_t result

if (eax_7 != 0)
    result = sub_405d30(&arg1[0x7d], sub_625860(eax_7, ebx))
else
    int32_t result_1 = 0xf
    void* var_1c_1 = eax_7
    char var_2c = eax_7.b
    sub_403490(&var_2c, 0x76c994, 0x23)
    int32_t var_8_1 = 0
    sub_612320(arg1, &var_2c)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
