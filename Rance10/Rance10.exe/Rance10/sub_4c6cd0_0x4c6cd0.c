// 函数: sub_4c6cd0
// 地址: 0x4c6cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728be8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_34
int16_t* ecx = &var_34
var_34 = 0x5c81
char var_32 = 0
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t* eax_3

do
    eax_3.b = *ecx
    ecx += 1
while (eax_3.b != 0)
sub_403490(&var_30, &var_34, ecx - &var_34:1)
int32_t var_8_1 = 0
int32_t esi = 0
int32_t var_3c

if (sub_641fe0(arg4, &var_30, &var_3c) != 0)
    esi = var_3c

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

*arg1 = (esi + arg5) * arg3 - arg5
int32_t edi_1 = *(arg4 + 8)
int32_t ebx_1 = edi_1

if ((ebx_1.b & 1) != 0)
    ebx_1 += 1

int32_t eax_9 = int.d(sub_4a78b0(*(arg4 + 0x20)))
int32_t esi_1 = edi_1

if (eax_9 s< edi_1)
    esi_1 = eax_9

int32_t eax_11 = int.d(sub_4a78b0(*(arg4 + 0x1c)))

if (eax_11 s< edi_1)
    edi_1 = eax_11

if (edi_1 s< esi_1)
    edi_1 = esi_1

int32_t result = ebx_1 + (edi_1 << 1)
*arg2 = result
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
