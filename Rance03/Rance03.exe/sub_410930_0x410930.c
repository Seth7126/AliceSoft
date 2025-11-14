// 函数: sub_410930
// 地址: 0x410930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2aa9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10 = arg3
int32_t var_14 = 0
arg3[5] = 0xf
arg3[4] = 0
*arg3 = 0
int32_t var_4 = 0
int32_t var_14_1 = 1
void* ecx

if (*arg4 != 0)
    char* ecx_2 = arg4
    char i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    ecx = ecx_2 - &arg4[1]
else
    ecx = nullptr

char* eax_3 = ecx + arg2[4]
int32_t ebx_1 = arg3[4]

if (ebx_1 u<= eax_3 && arg3[5] != eax_3 && sub_4022d0(arg3, eax_3, 1) != 0)
    bool cond:0_1 = arg3[5] u< 0x10
    arg3[4] = ebx_1
    int32_t* eax_5
    
    if (cond:0_1)
        eax_5 = arg3
    else
        eax_5 = *arg3
    
    *(eax_5 + ebx_1) = 0

sub_403110(arg3, arg2, nullptr, 0xffffffff)
void* ecx_5

if (*arg4 != 0)
    char* ecx_6 = arg4
    char i_1
    
    do
        i_1 = *ecx_6
        ecx_6 = &ecx_6[1]
    while (i_1 != 0)
    ecx_5 = ecx_6 - &ecx_6[1]
else
    ecx_5 = nullptr

sub_4057c0(arg3, arg4, ecx_5)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
