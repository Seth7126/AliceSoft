// 函数: ??$parse_floating_point_possible_nan@DV?$input_adapter_character_source@V?$stream_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@_K@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$input_adapter_character_source@V?$stream_input_adapter@D@__crt_stdio_input@@@0@_K@Z
// 地址: 0x707505
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_1c = edi
int32_t i = 0
int32_t* var_10 = arg2
char* var_c = arg1
int32_t arg_c
int32_t* var_8 = &arg_c
char eax_1

do
    eax_1 = *arg1
    
    if (eax_1 != *(i + &data_754d70) && eax_1 != *(i + &data_754d74))
        <lambda_1b3fd67d98fc4313a561b89752468e10>::operator()(&var_10)
        return 7
    
    eax_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)
    i += 1
    *arg1 = eax_1
while (i != 3)

__crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >::unget(
    arg2, eax_1)
arg_c = arg2[4]
int32_t arg_10 = arg2[5]
char eax_4 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
    arg2)
*arg1 = eax_4

if (eax_4 == 0x28)
    *arg1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)
    
    if (__crt_strtox::parse_floating_point_possible_nan_is_ind<char,class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char> > >(
            arg1, arg2) != 0)
        __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >::unget(
            arg2, *arg1)
        return 5
    
    if (__crt_strtox::parse_floating_point_possible_nan_is_ind<char,class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> > >(
            arg1, arg2) != 0)
        __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >::unget(
            arg2, *arg1)
        return 6
    
    if (*arg1 == 0x29)
        return 4
    
    char i_1
    
    do
        i_1 = *arg1
        
        if (i_1 == 0)
            break
        
        int32_t i_2 = sx.d(i_1)
        
        if (i_2 - 0x30 u> 9 && i_2 - 0x61 u> 0x19 && i_2 - 0x41 u> 0x19 && i_2 != 0x5f)
            goto label_70756e
        
        i_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        *arg1 = i_1
    while (i_1 != 0x29)
    
    if (*arg1 == 0x29)
        return 4

label_70756e:
uint32_t eax_6 = zx.d(<lambda_1b3fd67d98fc4313a561b89752468e10>::operator()(&var_10))
int32_t eax_7 = neg.d(eax_6)
return (sbb.d(eax_7, eax_7, eax_6 != 0) & 0xfffffffd) + 7
