// 函数: sub_4ac900
// 地址: 0x4ac900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7319c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t edx_3 = edx_2 s>> 1
int32_t eax_7
int32_t ecx
eax_7, ecx = sub_4ac840(arg1, (edx_3 u>> 0x1f) + edx_3)

if (eax_7.b != 0)
    int32_t var_8_1 = 0
    int32_t var_30_1 = ecx
    int32_t var_34_1 = 0
    int32_t var_38_1 = ecx
    arg1[1] = sub_4aca70(eax_7, arg2[1], *arg2, *arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
