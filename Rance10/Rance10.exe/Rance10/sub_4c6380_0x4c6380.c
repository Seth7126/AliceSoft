// 函数: sub_4c6380
// 地址: 0x4c6380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = *arg1

if (ebx != 0)
    int32_t ecx_1 = ebx[1]
    ebx[1] -= 1
    (**ebx)(ecx_1 - 1)
    *arg1 = 0
    arg1[5].b = 1

int32_t* result

if (sub_54dae0(arg1, *(arg2 + 0x2c), *(arg2 + 0x30), 0, 0, 0, 0xff).b != 0)
    result.b = 1
else
    int32_t var_48 = *(arg2 + 0x2c)
    int32_t* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76282c, 0x3e)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_44
    sub_45aae0(sub_417810(&var_48, &var_2c, &var_44, &var_48, *(arg2 + 0x30)))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
