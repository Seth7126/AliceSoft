// 函数: sub_46d660
// 地址: 0x46d660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** result

if (esi s>= 0xc)
    if (*arg1 != 0x48 || arg1[1] != 0x45 || arg1[2] != 0x41 || arg1[3] != 0x44)
        arg2.b = 0
    else
        arg2.b = 1
    
    char eax_3
    
    if (arg1[8] != 0x45 || arg1[9] != 0x58 || arg1[0xa] != 0x54 || arg1[0xb] != 0x46)
        eax_3 = 0
    else
        eax_3 = 1
    
    if (arg2.b == 0 || eax_3 == 0)
        result = sub_46d5b0(arg1, esi)
    else
        result = sub_46d3b0(arg1, esi)
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x75f79c, 0x1b)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
