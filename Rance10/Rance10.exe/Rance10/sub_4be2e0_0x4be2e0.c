// 函数: sub_4be2e0
// 地址: 0x4be2e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730c28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14 = arg1
int32_t var_18 = 0
int32_t var_24
std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld(
    &var_24)
int32_t var_8_1 = 0
int32_t edx_1
int32_t ebx_1

if (arg2 s>= 0)
    ebx_1 = var_24
    int32_t var_20
    int32_t eax_3
    int32_t edx
    edx:eax_3 = muls.dp.d(0x2aaaaaab, var_20 - ebx_1)
    edx_1 = edx s>> 2

if (arg2 s< 0 || arg2 u>= (edx_1 u>> 0x1f) + edx_1)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_403490(arg1, 0x75d021, nullptr)
else
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_403590(arg1, ebx_1 + arg2 * 0x18, 0, 0xffffffff)

sub_417070(&var_24)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
