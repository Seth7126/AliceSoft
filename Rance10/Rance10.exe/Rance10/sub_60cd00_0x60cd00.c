// 函数: sub_60cd00
// 地址: 0x60cd00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742f70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
char* eax_3
int32_t ecx
eax_3, ecx = sub_467970(arg2)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
int32_t var_3c = ecx
sub_60e360(eax_3, arg1[1], *arg1, eax_3)
int32_t ebx = arg1[1]
int32_t* i = *arg1
char var_1c
var_1c.d = (ebx - i) s/ 0x38

if (i != 0)
    for (; i != ebx; i = &i[0xe])
        sub_60e600(i)
    
    void* esi = *arg1
    sub_403160(esi, (arg1[2] - esi) s/ 0x38, 0x38)

arg1[2] = &eax_3[arg2 * 0x38]
void* result = &eax_3[var_1c.d * 0x38]
arg1[1] = result
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
