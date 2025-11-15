// 函数: ??$parse_floating_point@V?$c_string_character_source@D@__crt_strtox@@U_LDBL12@@@__crt_strtox@@YA?AW4SLD_STATUS@@QAU__crt_locale_pointers@@V?$c_string_character_source@D@0@QAU_LDBL12@@@Z
// 地址: 0x70c0e8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t arg_8
int32_t result
void var_314

if (arg3 == 0 || arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 1
else
    result = sub_70779b(
        __crt_strtox::parse_floating_point_from_source<class __crt_strtox::c_string_character_source<char> >(
            arg1, &arg_8, &var_314), 
        &var_314, arg3)

if (arg2 != 0)
    *arg2 = arg_8

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
