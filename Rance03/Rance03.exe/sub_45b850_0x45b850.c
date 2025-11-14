// 函数: sub_45b850
// 地址: 0x45b850
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
int32_t* result

if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
label_45b8d7:
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    sub_402110(&var_28, 0x6dbe34, 0x12)
    int32_t var_4 = 0
    sub_456a00(*(arg1 + 4), &var_28)
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)
    
    result.b = 0
else
    void* eax_7 = **(arg2 + 0x24)
    *(arg2 + 0x24) = eax_7
    
    if (*(arg2 + 0x20) == 0 || eax_7 == *(arg2 + 0x1c) || eax_7 == 0xfffffff8)
        goto label_45b8d7
    
    if (*(eax_7 + 0x24) != 9)
        void* var_38_1 = arg3
        result = sub_45d960(arg1, arg3, arg2)
    else
        result = sub_45ce40(arg1, arg3, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
