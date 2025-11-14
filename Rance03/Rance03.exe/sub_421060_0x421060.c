// 函数: sub_421060
// 地址: 0x421060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b49e2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_48 = 0
char var_44
int32_t var_30
char var_2c
int32_t var_18
char* eax_5
int32_t ebx

if (arg1[6] != 0)
    var_30 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_401ff0(&var_44, &arg1[2], 0, 0xffffffff)
    eax_5 = &var_44
    int32_t var_4_1 = 1
    ebx = 2
else
    var_18 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_402110(&var_2c, "struct", 6)
    eax_5 = &var_2c
    int32_t var_4 = 0
    ebx = 1

int32_t var_5c = arg1[1]
int32_t edx = *arg1
var_48 = ebx
sub_4211a0(eax_5, edx, arg2, eax_5, var_5c)
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
sub_69a5bc(eax_2 ^ &var_48)
return arg2
