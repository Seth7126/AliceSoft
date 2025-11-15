// 函数: sub_69cb90
// 地址: 0x69cb90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748a18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
void* var_18 = arg1

if (sub_69b540(*(arg1 + 4)) == 0)
    int32_t* ecx_1 = *(arg1 + 4)
    int32_t eax_5 = (*(*ecx_1 + 4))(1, 0, 0, &ecx_1[3])
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

int32_t var_8_1 = 0
int32_t eax_6 = *(arg1 + 0xc)
int32_t* var_84 = &std::_Func_impl<class <lambda_41d2005c7cb10ad02a9dd11342294f61>, class std::allocator<int>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_80 = eax_6
int32_t** var_60 = &var_84
void var_5c
sub_698bd0(eax_6, &var_5c, &var_5c, var_84)
char eax_7 = sub_69cf70(arg1, var_5c)
int32_t* eax_8 = sub_69a9f0(*(arg1 + 4), eax_7)
int32_t var_8_2 = 0xffffffff
*(arg1 + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
