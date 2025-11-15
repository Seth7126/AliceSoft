// 函数: sub_68bc00
// 地址: 0x68bc00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_68bdc0(arg1)
char result

if (sub_684b50(arg1 + 0x98, 0x70, *(*(arg1 + 4) + 0x34)) != 0)
    if (sub_684b50(arg1 + 0xac, 0x180, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_684b50(arg1 + 0xc0, 0x3000, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_684b50(arg1 + 0xd4, 0x5000, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_684b50(arg1 + 0xe8, 0xd0, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_684b50(arg1 + 0xfc, 0x40, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_684b50(arg1 + 0x110, 0x3000, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_684b50(arg1 + 0x124, 0x1000, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_684b50(arg1 + 0x138, 0x10, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_684b50(arg1 + 0x14c, 0x10, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_684b50(arg1 + 0x160, 0x200, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else
        void var_2c
        sub_403360(&var_2c, "Data\Shader.slk")
        int32_t var_8_1 = 0
        char eax_14 = sub_5f2400(&var_2c)
        char eax_15
        
        if (eax_14 != 0)
            eax_15 = sub_681cf0(arg1 + 0x10, &var_2c)
        
        int32_t ebx
        
        if (eax_14 == 0 || eax_15 != 0)
            ebx.b = 1
        else
            ebx.b = 0
        
        sub_403320(&var_2c)
        result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
