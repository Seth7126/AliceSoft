// 函数: sub_4605e0
// 地址: 0x4605e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t var_2c = __security_cookie ^ &var_28
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    int32_t var_4 = 0
    sub_459e00(arg1 + 0x2c, &var_28)
    char* eax_5 = &var_28
    
    if (var_14_1 u>= 0x10)
        eax_5 = var_28.d
    
    char* var_30_2 = eax_5
    result = sub_64b530(0x6dcb74)
    
    if (var_14_1 u>= 0x10)
        result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
