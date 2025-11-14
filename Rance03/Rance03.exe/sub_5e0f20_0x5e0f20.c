// 函数: sub_5e0f20
// 地址: 0x5e0f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cac21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t* var_30 = arg2
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
int32_t var_4 = 0
int32_t i = 0
int32_t var_34_1 = 1

if (*(arg1 + 0x10) s> 0)
    do
        int32_t var_4_1 = 1
        int32_t var_2c
        sub_412d60(arg2, sub_5e0ec0(arg1, &var_2c, i))
        var_4_1.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        i += 1
    while (i s< *(arg1 + 0x10))

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return arg2
