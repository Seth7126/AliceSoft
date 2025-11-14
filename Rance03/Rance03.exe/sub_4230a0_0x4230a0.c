// 函数: sub_4230a0
// 地址: 0x4230a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4b08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = arg3 - 2

if ((*(**(*(arg1 + 0xe0) + 8) + 0x14))(arg5) == 4)
    esi_1 += sub_423e80(arg1, arg5, esi_1)

int32_t arg_c
int32_t eax_9 = arg_c
int32_t edi_2 = sub_4233c0(arg1, arg2, &arg_c, arg4, esi_1) + sub_4310e0(arg1, arg2, &arg_c, arg4)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char* var_54_4 = &var_2c
char eax_12 = sub_4306f0(*(arg1 + 0xe0), arg5, esi_1)
int32_t var_34
char eax_13

if (eax_12 != 0)
    eax_13 = sub_42dd60(*(arg1 + 0xe0), arg5, &var_34)

int32_t result

if (eax_12 == 0 || eax_13 == 0)
    result = 0
else
    int32_t esi_2 = var_34
    result = edi_2 + sub_430d20(arg1, arg2, &arg_c, arg4, &var_2c, sub_430c60(esi_2))
    sub_431190(arg1, arg2, eax_9, arg4, result, arg3, esi_2)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
