// 函数: sub_4aa740
// 地址: 0x4aa740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7317f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_dc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float var_d0[0x30]
sub_526e80(arg1, sub_5269a0(&var_d0))
___dyn_tls_init@12(&var_d0)
*(arg1 + 0xc4) = arg1[0xc].d
void* edi = arg1[0xc].d

if (edi != 0)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x66666667, *(arg1 + 0xc8) - edi)
    int32_t edx_2 = edx_1 s>> 4
    sub_403160(edi, (edx_2 u>> 0x1f) + edx_2, 0x28)
    arg1[0xc].d = 0
    *(arg1 + 0xc4) = 0
    *(arg1 + 0xc8) = 0

struct _EXCEPTION_REGISTRATION_RECORD** result = ___dyn_tls_init@12(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
