// 函数: sub_419600
// 地址: 0x419600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726ef9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_14 = 0
arg3[4] = 0
arg3[5] = 0
arg3[5] = 0xf
bool cond:0 = arg3[5] u< 0x10
arg3[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg3
else
    eax_3 = *arg3

*eax_3 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
void* ecx

if (*arg2 != 0)
    char* ecx_1 = arg2
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

int32_t ebx = arg3[4]
int32_t* eax_6 = arg4[4] + ecx

if (ebx u<= eax_6 && arg3[5] != eax_6 && sub_4036c0(arg3, eax_6, 1).b != 0)
    bool cond:2_1 = arg3[5] u< 0x10
    arg3[4] = ebx
    
    if (cond:2_1)
        eax_6 = arg3
    else
        eax_6 = *arg3
    
    *(eax_6 + ebx) = 0

void* ecx_3

if (*arg2 != 0)
    char* ecx_4 = arg2
    
    do
        eax_6.b = *ecx_4
        ecx_4 = &ecx_4[1]
    while (eax_6.b != 0)
    
    ecx_3 = ecx_4 - &ecx_4[1]
else
    ecx_3 = nullptr

sub_407430(arg3, arg2, ecx_3)
sub_4055a0(arg3, arg4, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
