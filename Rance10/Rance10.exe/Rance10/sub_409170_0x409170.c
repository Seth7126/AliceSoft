// 函数: sub_409170
// 地址: 0x409170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
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

sub_403490(arg1, arg2, ecx)
int32_t var_8_1 = 0
arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
void* ecx_3

if (*arg3 != 0)
    char* ecx_4 = arg3
    char i
    
    do
        i = *ecx_4
        ecx_4 = &ecx_4[1]
    while (i != 0)
    ecx_3 = ecx_4 - &ecx_4[1]
else
    ecx_3 = nullptr

sub_403490(&arg1[6], arg3, ecx_3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
