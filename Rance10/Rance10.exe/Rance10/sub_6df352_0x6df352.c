// 函数: sub_6df352
// 地址: 0x6df352
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x40
int32_t (* var_c)(void* arg1) = sub_749cfb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_5 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_5
void* const var_64_3 = &data_6df35e
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_44
void var_2c
int32_t arg_8
int32_t arg_10
sub_6dc0c7(&var_44, &arg_8, &arg_10, arg4, arg5, &var_2c)
int32_t var_8 = 0

if (sub_6e320e(&arg_8, &arg_10) != 0)
    *arg6 |= 1

int32_t var_34

if (var_34 == 0)
    *arg6 |= 2
else
    int32_t* edi_1 = var_44
    int32_t var_30
    
    if (var_30 u< 0x10)
        edi_1 = &var_44
    
    int32_t var_48 = 0
    int32_t var_4c
    std::_Stodx_v2(edi_1, &var_4c, 0, &var_48)
    
    if (var_4c == edi_1 || var_48 != 0)
        *arg6 |= 2
    else
        *arg7 = fconvert.d(arg1)

*arg2 = arg_8
arg2[1] = arg3
sub_4033f0(&var_44, 1, nullptr)
@__security_check_cookie@4(eax_5 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6df3fb
return arg2
