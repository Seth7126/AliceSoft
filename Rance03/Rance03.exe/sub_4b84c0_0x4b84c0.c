// 函数: sub_4b84c0
// 地址: 0x4b84c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdbc9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_104
int32_t eax_2 = __security_cookie ^ &var_104
int32_t __saved_esi
int32_t var_10c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_d4 = 0xf
int32_t var_d8 = 0
char var_e8 = 0
sub_402110(&var_e8, 0x6da315, nullptr)
int32_t var_4 = 0
int32_t var_d0 = arg2
int32_t var_cc = 0
void var_c8
sub_50b610(&var_c8, arg4, arg5, &var_e8)
var_4.b = 1
sub_4bd150(arg1 + 0xdc, &var_d0)
sub_4b7cf0(&var_c8)
int32_t var_4_1 = 0xffffffff

if (var_d4 u>= 0x10)
    j__free(var_e8.d)

int32_t var_ec = 0xf
int32_t var_f0 = 0
char var_100 = 0
sub_402110(&var_100, 0x6da316, nullptr)
int32_t var_4_2 = 2
int32_t var_70 = arg3
int32_t var_6c = 0
void var_68
sub_50b610(&var_68, arg4, arg5, &var_100)
var_4_2.b = 3
sub_4bd150(arg1 + 0xf8, &var_70)
int32_t result = sub_4b7cf0(&var_68)

if (var_ec u>= 0x10)
    result = j__free(var_100.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_104)
return result
