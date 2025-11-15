// 函数: sub_6091a0
// 地址: 0x6091a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742aa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* eax_3
int32_t ecx
eax_3, ecx = sub_4096f0(arg2)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
int32_t* var_1c = eax_3
int32_t var_3c = ecx
sub_609330(eax_3, arg1[1], *arg1, eax_3)
int32_t eax_4 = arg1[1]
void* i = *arg1
char var_18
var_18.d = eax_4
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x2aaaaaab, eax_4 - i)
int32_t edx_2 = edx_1 s>> 3

if (i != 0)
    for (; i != var_18.d; i += 0x30)
        sub_609410(i)
    
    void* esi = *arg1
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = muls.dp.d(0x2aaaaaab, arg1[2] - esi)
    int32_t edx_4 = edx_3 s>> 3
    sub_403160(esi, (edx_4 u>> 0x1f) + edx_4, 0x30)

arg1[2] = &eax_3[arg2 * 0xc]
void* result = &eax_3[((edx_2 u>> 0x1f) + edx_2) * 0xc]
arg1[1] = result
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
