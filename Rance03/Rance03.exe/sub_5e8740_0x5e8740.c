// 函数: sub_5e8740
// 地址: 0x5e8740
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
char result = sub_5e8960()

if (result != 0)
    int32_t var_28
    sub_5e87d0(arg1, &var_28)
    int32_t var_4 = 0
    result = sub_5ec270(&var_28)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
