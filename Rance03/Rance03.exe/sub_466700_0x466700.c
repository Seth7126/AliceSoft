// 函数: sub_466700
// 地址: 0x466700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_50 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_44
__builtin_memset(&var_44, 0, 0x24)
int32_t var_4 = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
var_4.b = 1
int128_t var_38
sub_45f0b0(&var_38, &var_44, arg2)
int32_t* var_54_1 = arg2
int32_t var_40
sub_467b80(arg1 + 0x1c, *(arg1 + 0x1c), var_44, var_40)

if (var_18 != 0)
    j__free(var_18)

int64_t var_28
int32_t eax_5 = var_28:4.d

if (eax_5 != 0)
    j__free(eax_5)

int32_t var_4_1 = 0xffffffff
int32_t result = sub_45d550(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
return result
