// 函数: sub_51ab00
// 地址: 0x51ab00
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
char var_29 = 0x20
sub_414b60(&var_24, &var_29)
var_29 = 0x40
sub_414b60(&var_24, &var_29)
struct _EXCEPTION_REGISTRATION_RECORD** var_18
sub_51b860(&var_18, arg1, &var_24)
struct _EXCEPTION_REGISTRATION_RECORD** esi = var_18
int32_t result_1
int32_t var_14
int32_t eax_8

if ((var_14 - esi) s/ 0x18 == 2)
    void* eax_7 = &esi[6]
    
    if (esi[0xb] u>= 0x10)
        eax_7 = *eax_7
    
    int32_t* var_3c_3 = &result_1
    eax_8 = sub_69b31c(eax_7, 0x6dcf3c)

int32_t result

if ((var_14 - esi) s/ 0x18 != 2 || eax_8 != 1)
    result = 0
else
    result = result_1

int32_t eax_9 = var_24

if (eax_9 != 0)
    j__free(eax_9)

if (esi != 0)
    sub_4107c0(esi, var_14)
    j__free(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
