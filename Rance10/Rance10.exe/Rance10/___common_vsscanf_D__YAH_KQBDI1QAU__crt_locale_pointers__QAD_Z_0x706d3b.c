// 函数: ??$common_vsscanf@D@@YAH_KQBDI1QAU__crt_locale_pointers@@QAD@Z
// 地址: 0x706d3b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_a0 = edi
int32_t result

if (arg3 != 0 && arg5 != 0)
    void* esi_1 = arg4
    
    if (esi_1 == 0xffffffff)
        char* esi_2 = arg3
        int32_t eax_1
        
        do
            eax_1.b = *esi_2
            esi_2 = &esi_2[1]
        while (eax_1.b != 0)
        esi_1 = esi_2 - &esi_2[1]
    
    void* var_9c
    _LocaleUpdate::_LocaleUpdate(&var_9c, arg6)
    char* var_8c = arg3
    void* var_88_1 = esi_1 + arg3
    char* var_84_1 = arg3
    void var_98
    void var_80
    __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >(
        &var_80, &var_8c, arg1, arg2, arg5, &var_98, arg7)
    result = __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process(
        &var_80)
    char var_90
    
    if (var_90 != 0)
        void* ecx_5 = var_9c
        *(ecx_5 + 0x350) &= 0xfffffffd
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

@__security_check_cookie@4(var_8 ^ &__saved_ebp)
return result
