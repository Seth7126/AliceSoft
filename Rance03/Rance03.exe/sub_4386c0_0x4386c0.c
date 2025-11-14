// 函数: sub_4386c0
// 地址: 0x4386c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5f18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
int32_t* eax_6 = sub_4216c0(arg1 + 0xc, U"''(.;),{}[]-0", &var_2c, arg1 + 0xc)
int32_t var_4 = 0
char* result = sub_410a80(eax_6.b, eax_6, &var_44, &(*U"''(.;),{}[]-0")[1])

if (arg2 != result)
    if (arg2[5] u>= 0x10)
        j__free(*arg2)
    
    arg2[5] = 0xf
    arg2[4] = 0
    *arg2 = 0
    result = sub_4030b0(arg2, result)

int32_t var_30

if (var_30 u>= 0x10)
    result = j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
