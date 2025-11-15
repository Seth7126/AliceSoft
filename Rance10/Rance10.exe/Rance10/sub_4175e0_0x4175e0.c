// 函数: sub_4175e0
// 地址: 0x4175e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??2@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg3
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

if (*arg4 != 0)
    char* ecx_1 = arg4
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

void* eax_4 = ecx + arg2[4]
int32_t ebx_2 = arg3[4]

if (ebx_2 u<= eax_4 && arg3[5] != eax_4 && sub_4036c0(arg3, eax_4, 1) != 0)
    bool cond:1_1 = arg3[5] u< 0x10
    arg3[4] = ebx_2
    int32_t* eax_6
    
    if (cond:1_1)
        eax_6 = arg3
    else
        eax_6 = *arg3
    
    *(eax_6 + ebx_2) = 0

sub_4055a0(arg3, arg2, 0, 0xffffffff)
void* ecx_4

if (*arg4 != 0)
    char* ecx_5 = arg4
    char i
    
    do
        i = *ecx_5
        ecx_5 = &ecx_5[1]
    while (i != 0)
    ecx_4 = ecx_5 - &ecx_5[1]
else
    ecx_4 = nullptr

sub_407430(arg3, arg4, ecx_4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
