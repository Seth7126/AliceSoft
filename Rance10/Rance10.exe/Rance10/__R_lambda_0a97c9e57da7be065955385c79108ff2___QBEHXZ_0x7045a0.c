// 函数: ??R<lambda_0a97c9e57da7be065955385c79108ff2>@@QBEHXZ
// 地址: 0x7045a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_484 = edi
int32_t* edi_1 = **arg1
char eax_3 = ___acrt_stdio_begin_temporary_buffering_nolock(edi_1)
void* var_47c
_LocaleUpdate::_LocaleUpdate(&var_47c, *arg1[1])
int32_t var_464 = **arg1
int32_t* eax_9 = arg1[2]
void var_478
void var_460
__crt_stdio_output::output_processor<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t>,class __crt_stdio_output::standard_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> > >::output_processor<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t>,class __crt_stdio_output::standard_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> > >(
    &var_460, &var_464, *eax_9, eax_9[1], *arg1[3], &var_478, *arg1[4])
int32_t result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::string_output_adapter<char> > >::process(
    &var_460)
void var_420
__crt_stdio_output::formatting_buffer::~formatting_buffer(&var_420)
char var_470

if (var_470 != 0)
    void* ecx_4 = var_47c
    *(ecx_4 + 0x350) &= 0xfffffffd

___acrt_stdio_end_temporary_buffering_nolock(eax_3, edi_1)
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
