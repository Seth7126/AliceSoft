// 函数: ??$parse_floating_point@V?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@N@__crt_strtox@@YA?AW4SLD_STATUS@@QAU__crt_locale_pointers@@V?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@0@QAN@Z
// 地址: 0x706f62
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result
void var_314
int32_t arg_8[0x4]

if (arg5 == 0 || arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 1
else
    result = sub_70779b(sub_706fdd(arg1, &arg_8, &var_314), &var_314, arg5)

if (arg4 != 0)
    int32_t ecx_2 = arg2 | arg3
    
    if (ecx_2 == 0)
        *arg4 = ecx_2.b

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
