// 函数: sub_51ac30
// 地址: 0x51ac30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c28e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_24
__builtin_memset(&var_24, 0, 0x18)
var_4.b = 1
char var_25 = 0x20
sub_414b60(&var_24, &var_25)
var_25 = 0x40
sub_414b60(&var_24, &var_25)
struct _EXCEPTION_REGISTRATION_RECORD** var_18
sub_51b860(&var_18, arg1, &var_24)
struct _EXCEPTION_REGISTRATION_RECORD** edi = var_18
int32_t var_14
int32_t result

if ((var_14 - edi) s/ 0x18 != 2)
    result = 7
else if (sub_40c250(&edi[6], 0x6e2d5c) == 0)
    if (sub_40c250(&edi[6], 0x6e2d3c) == 0)
        if (sub_40c250(&edi[6], 0x6e2d44) == 0)
            if (sub_40c250(&edi[6], 0x6e2d4c) == 0)
                if (sub_40c250(&edi[6], 0x6e2d54) == 0)
                    if (sub_40c250(&edi[6], 0x6e2d1c) == 0)
                        if (sub_40c250(&edi[6], 0x6e2d24) != 0)
                            result = 7
                        else if (sub_40c250(&edi[6], 0x6e2d2c) == 0)
                            result = 9
                            
                            if (sub_40c250(&edi[6], 0x6e2d34) == 0)
                                result = 7
                        else
                            result = 8
                    else
                        result = 6
                else
                    result = 5
            else
                result = 4
        else
            result = 3
    else
        result = 2
else
    result = 1

int32_t eax_16 = var_24

if (eax_16 != 0)
    j__free(eax_16)

if (edi != 0)
    sub_4107c0(edi, var_14)
    j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
