// 函数: sub_4b1030
// 地址: 0x4b1030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731ef1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, arg3 - *arg1)
int32_t edx_3 = edx_2 s>> 1

if (arg1[1] == arg1[2])
    sub_4b0da0(arg1, 1)

int32_t* ecx = arg1[1]
int32_t* var_14 = ecx
int32_t* var_18 = ecx
int32_t var_8_1 = 0
int32_t* arg_c

if (ecx != 0)
    sub_4275f0(ecx, arg_c)

int32_t var_8_2 = 0xffffffff
arg1[1] += 0xc
int32_t* edx_4 = arg1[1]
int32_t esi_4 = ((edx_3 u>> 0x1f) + edx_3) * 0xc
int32_t* eax_6 = *arg1 + esi_4
sub_4b11b0(eax_6, edx_4, &arg_c, eax_6, &edx_4[-3], edx_4)
*arg2 = *arg1 + esi_4
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
