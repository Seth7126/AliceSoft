// 函数: sub_60ca00
// 地址: 0x60ca00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742f10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* eax_3
int32_t ecx
eax_3, ecx = sub_41bd80(arg2)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
int32_t var_3c = ecx
sub_60e1e0(eax_3, arg1[1], *arg1, eax_3)
int32_t ebx = arg1[1]
void* i = *arg1
char var_1c
var_1c.d = (ebx - i) s/ 0x48

if (i != 0)
    for (; i != ebx; i += 0x48)
        sub_60e560(i)
    
    void* esi = *arg1
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = muls.dp.d(0x38e38e39, arg1[2] - esi)
    int32_t edx_4 = edx_3 s>> 4
    sub_403160(esi, (edx_4 u>> 0x1f) + edx_4, 0x48)

arg1[2] = &eax_3[arg2 * 0x12]
void* result = &eax_3[var_1c.d * 0x12]
arg1[1] = result
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
