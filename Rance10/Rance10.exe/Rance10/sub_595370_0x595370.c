// 函数: sub_595370
// 地址: 0x595370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
char* eax_3
int32_t ecx
eax_3, ecx = sub_56e3a0(arg2)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
int32_t var_3c = ecx
sub_595540(eax_3, arg1[1], *arg1, eax_3)
int32_t eax_4 = arg1[1]
int32_t* i = *arg1
void* ebx_1 = eax_4 - i
char var_1c
var_1c.d = eax_4

if (i != 0)
    if (i != eax_4)
        do
            sub_408940(i)
            i = &i[0x10]
        while (i != var_1c.d)
    
    void* ecx_3 = *arg1
    sub_403160(ecx_3, (arg1[2] - ecx_3) s>> 6, 0x40)

void* result = &eax_3[arg2 << 6]
arg1[2] = result
arg1[1] = (ebx_1 & 0xffffffc0) + eax_3
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
