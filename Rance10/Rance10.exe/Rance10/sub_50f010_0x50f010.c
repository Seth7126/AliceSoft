// 函数: sub_50f010
// 地址: 0x50f010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737d99
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_14_1 = 0
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
sub_403490(arg1, 0x75d2c3, nullptr)
char eax_4 = 0
int32_t var_8_2 = 0
int32_t var_14_2 = 1
int32_t ecx_2 = arg2[5]
int32_t* i

if (ecx_2 u< 0x10)
    i = arg2
else
    i = *arg2

int32_t* ecx_3

if (ecx_2 u< 0x10)
    ecx_3 = arg2
else
    ecx_3 = *arg2

for (void* edi_2 = arg2[4] + ecx_3; i != edi_2; i += 1)
    if (*i == 0xa && eax_4 != 0xd)
        sub_405500(arg1, 1, 0xd)
    
    arg2.b = *i
    sub_405500(arg1, 1, arg2.b)
    eax_4 = arg2.b

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
