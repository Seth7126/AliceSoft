// 函数: sub_694830
// 地址: 0x694830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747c20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0xb] s<= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

void* var_20
sub_4275f0(&var_20, &arg1[4])
int32_t var_8_1 = 0
void* var_2c
sub_4630a0(&var_2c, &arg1[7])
var_8_1.b = 1
void* ebx = var_2c
void* edx = *arg1
void* edi = var_20
int32_t var_28
char var_11
int32_t var_1c

if (ebx != var_28)
    if ((*(edx + 0xc))(arg1[0xb], edi, (var_1c - edi) s>> 2, ebx) != 0)
        var_11 = 1
    else
        var_11 = 0
else if ((*(edx + 8))(arg1[0xb], edi, (var_1c - edi) s>> 2, zx.d(arg1[0xc].b)) == 0)
    var_11 = 0
else
    var_11 = 1
int32_t var_24

if (ebx != 0)
    sub_403160(ebx, var_24 - ebx, 1)
int32_t var_18

if (edi != 0)
    sub_403160(edi, (var_18 - edi) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return var_11
