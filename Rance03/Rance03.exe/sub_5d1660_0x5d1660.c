// 函数: sub_5d1660
// 地址: 0x5d1660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_2c = 0
int32_t edx_2

if (arg3 s>= 0)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
    edx_2 = edx_1 s>> 1

if (arg3 s< 0 || arg3 s>= (edx_2 u>> 0x1f) + edx_2)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
else
    int32_t eax_9 = *(arg1 + 4)
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    int32_t var_4 = 0
    sub_5d1750(&var_28, eax_9 + arg3 * 0xc)
    sub_403000(arg2, &var_28)
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return arg2
