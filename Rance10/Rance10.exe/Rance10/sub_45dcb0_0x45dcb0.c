// 函数: sub_45dcb0
// 地址: 0x45dcb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bd88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg5 + 0x2d) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1

int32_t var_20
sub_431b80(&var_20, 
    ((*(arg5 + 0x1c) & 1) + *(arg5 + 0x1c)) * ((*(arg5 + 0x18) & 1) + *(arg5 + 0x18)))
int32_t var_8_1 = 0
char eax_7 = sub_45e330(&var_20, arg5)
int32_t esi = var_20
int32_t* ebx

if (eax_7 == 0)
    ebx.b = 0
else
    *arg3
    arg3[1]
    int32_t var_1c
    
    if (sub_45ded0(esi, var_1c - esi, arg2) == 0)
        ebx.b = 0
    else
        ebx.b = 1

int32_t var_18

if (esi != 0)
    sub_403160(esi, var_18 - esi, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
