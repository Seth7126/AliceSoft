// 函数: sub_441e20
// 地址: 0x441e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t var_2c = __security_cookie ^ &var_28
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = data_75d4c4

if (*(result + 0x18) != 0)
    void* eax_5 = *(result + 8)
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    int32_t var_4 = 0
    result = sub_412d60(*(eax_5 + 4) + 0xc, &var_28)
    
    if (var_14_1 u>= 0x10)
        result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
