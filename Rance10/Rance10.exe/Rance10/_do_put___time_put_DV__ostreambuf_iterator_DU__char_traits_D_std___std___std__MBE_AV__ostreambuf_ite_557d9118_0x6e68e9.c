// 函数: ?do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPBUtm@@DD@Z
// 地址: 0x6e68e9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x2c
int32_t (* var_c)(void* arg1) = sub_74a3a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_8 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_8
void* const var_50_3 = &data_6e68f5
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = 0
int32_t var_1c = 0x782521
char var_18 = 0
int32_t var_20 = 0xf
char var_34 = 0
int32_t var_8 = 0

if (arg7 != 0)
    var_1c:2.b = arg7
    var_1c:3.b = arg6
else
    var_1c:2.b = arg6

int32_t var_50 = 0x10
void* esi = 0x10
int32_t eax_3

while (true)
    sub_405500(&var_34, esi, 0)
    char* eax_2 = var_34.d
    
    if (var_20 u< 0x10)
        eax_2 = &var_34
    
    eax_3 = __ui64tow_s(eax_2, var_24, &var_1c, arg5, *(arg1 + 8))
    
    if (eax_3 != 0)
        break
    
    esi *= 2

char* ecx_1 = var_34.d
char* eax_4 = ecx_1

if (var_20 u< 0x10)
    eax_4 = &var_34
    ecx_1 = &var_34

std::_Copy_impl<wchar_t*,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >(
    arg2, &ecx_1[1], &eax_4[eax_3], arg3, arg4)
sub_4033f0(&var_34, 1, nullptr)
@__security_check_cookie@4(eax_8 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e69b3
return arg2
