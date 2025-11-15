// 函数: sub_6921a0
// 地址: 0x6921a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg1
int32_t var_1c = 0

if ((arg2.b & 3) != 1)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

int32_t* var_24 = nullptr
int32_t var_20 = 0
var_24 = sub_4321d0()
int32_t var_8_1 = 0
sub_691ac0(&var_24)
int32_t* ebx = var_24
void* eax_6 = *ebx
void* var_14 = eax_6

if (eax_6 == ebx)
label_692257:
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
else
    while (*(eax_6 + 0x28) != (arg2 u>> 4 & 0xf))
        sub_429080(&var_14)
        eax_6 = var_14
        
        if (eax_6 == ebx)
            goto label_692257
    
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_403590(arg1, eax_6 + 0x10, 0, 0xffffffff)

int32_t* eax_8 = var_24
int32_t* var_38 = eax_8
sub_456ff0(&var_24, &var_14, *eax_8)
sub_403160(var_24, 1, 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
