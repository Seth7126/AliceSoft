// 函数: sub_49d8d0
// 地址: 0x49d8d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc039
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_esi
int32_t var_58 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
char var_44
int32_t var_30
char var_2c
int32_t var_18
char* eax_7
int32_t ebx

if (*(arg1 + 0x254) == 0)
    var_30 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_402110(&var_44, 0x6da232, nullptr)
    eax_7 = &var_44
    ebx = 2
else
    var_18 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_401ff0(&var_2c, arg1 + 0x238, 0, 0xffffffff)
    eax_7 = &var_2c
    ebx = 1

sub_403000(arg2, eax_7)
int32_t ebx_1 = ebx | 4

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    
    if (var_30 u>= 0x10)
        j__free(var_44.d)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0

if ((ebx_1.b & 1) != 0 && var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return arg2
