// 函数: sub_688a00
// 地址: 0x688a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[7] s<= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void* var_1c
sub_4630a0(&var_1c, &arg1[4])
int32_t var_8_1 = 0
void* edi = var_1c
void* edx = *arg1
uint32_t eax_4 = zx.d(arg1[8].b)
int32_t var_18
int32_t ebx

if (edi != var_18)
    if ((*(edx + 0xc))(arg1[7], eax_4, edi) != 0)
        ebx.b = 1
    else
        ebx.b = 0
else if ((*(edx + 8))(arg1[7], eax_4) == 0)
    ebx.b = 0
else
    ebx.b = 1

int32_t var_14

if (edi != 0)
    sub_403160(edi, var_14 - edi, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
