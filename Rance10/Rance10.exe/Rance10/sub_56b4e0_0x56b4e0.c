// 函数: sub_56b4e0
// 地址: 0x56b4e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int128_t* eax_3
int32_t ecx
eax_3, ecx = sub_4096f0(arg2)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
int128_t* var_1c = eax_3
int32_t var_3c = ecx
sub_56b680(eax_3, arg1[1], *arg1, eax_3)
void* esi = *arg1
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = muls.dp.d(0x2aaaaaab, arg1[1] - esi)
int32_t edx_2 = edx_1 s>> 3
int32_t ecx_6 = (edx_2 u>> 0x1f) + edx_2
char var_18
var_18.d = ecx_6

if (esi != 0)
    int32_t var_34_2 = arg2
    int32_t var_38_1 = ecx_6
    sub_56b630(esi, arg1[1])
    void* esi_1 = *arg1
    int32_t eax_5
    int32_t edx_4
    edx_4:eax_5 = muls.dp.d(0x2aaaaaab, arg1[2] - esi_1)
    int32_t edx_5 = edx_4 s>> 3
    sub_403160(esi_1, (edx_5 u>> 0x1f) + edx_5, 0x30)
    ecx_6 = var_18.d

arg1[2] = &eax_3[arg2 * 3]
void* result = &eax_3[ecx_6 * 3]
arg1[1] = result
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
