// 函数: sub_4c6190
// 地址: 0x4c6190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t eax_5 = *(arg1 + 0x110)
int32_t* var_3c
void* var_38
char* ecx

if (eax_5 == 0)
    var_38 = 0xd
    var_3c = &data_6e166c
    ecx = &var_28
else if (eax_5 == 1)
    var_38 = 9
    var_3c = &data_6e167c
    ecx = &var_28
else
    ecx = &var_28
    
    if (eax_5 == 0x100)
        var_38 = 0xc
        var_3c = &data_6e1688
    else
        var_38 = 0xd
        var_3c = &data_6e1698

int32_t var_38_1 = sub_402110(ecx, var_3c, var_38)
int32_t* result = sub_4e3390(sub_4ff540(arg1 + 0x10c), &var_28)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
