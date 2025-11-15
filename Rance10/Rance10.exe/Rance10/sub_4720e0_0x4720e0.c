// 函数: sub_4720e0
// 地址: 0x4720e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72da60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_60 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x28)
int128_t var_50
__builtin_memset(&var_50, 0, 0x2c)
int32_t var_24 = eax_3
int32_t var_8_1 = 0
void** esi = nullptr
int32_t edi = 0
void** var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
var_8_1.b = 1
void* ecx = *arg2
int32_t eax_5 = arg2[1]

if (ecx == eax_5)
    goto label_472182

sub_46b8e0(&var_50, ecx, eax_5)
void* ebx

if (sub_46b950(&var_50, &var_20) != 0)
    edi = var_1c
    esi = var_20
label_472182:
    int32_t var_64_3 = 0
    sub_4743c0(arg1 + 0x1c, *(arg1 + 0x1c), esi, edi)
    ebx.b = 1
else
    ebx.b = 0

sub_4676f0(&var_20)
sub_46b870(&var_50)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
