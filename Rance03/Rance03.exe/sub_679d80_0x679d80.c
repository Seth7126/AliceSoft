// 函数: sub_679d80
// 地址: 0x679d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
var_40 = 0
sub_402110(&var_40, 0x7025ac, 0x15)
int32_t var_4 = 0
sub_412d60(arg2, &var_40)
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t* eax_5 = arg1 + 0xa4

if (*(arg1 + 0xb8) u>= 0x10)
    eax_5 = *eax_5

int32_t* var_50_2 = eax_5
int32_t var_4_2 = 1
int32_t var_28
int32_t result = sub_412d60(arg2, sub_4691f0(&var_28, 0x70295c))
int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
