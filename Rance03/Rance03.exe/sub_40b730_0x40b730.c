// 函数: sub_40b730
// 地址: 0x40b730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3568
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *(arg1 + 4)
int32_t var_50 = 0
int32_t eax_6

if (eax_5 == 0xc || eax_5 == 4 || eax_5 == 0x14)
    eax_6 = *(arg3 i+ 4)

if ((eax_5 == 0xc || eax_5 == 4 || eax_5 == 0x14) && (eax_6 == 0xc || eax_6 == 4 || eax_6 == 0x14))
    int32_t var_34
    sub_4058f0(&var_34)
    int32_t var_c_1 = 0
    char var_4c
    sub_4058f0(&var_4c)
    sub_40d890(arg2, sub_40c340(&var_4c, &var_34))
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c.d)
    
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
else
    sub_40cad0(arg1, arg2, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return arg2
