// 函数: sub_44f680
// 地址: 0x44f680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_28
int32_t eax_1 = __security_cookie ^ &var_28

if (arg1 != 0)
    if (arg1 == 1)
        sub_44f770(*arg2)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5
        eax_5.b = 1
        sub_69a5bc(eax_1 ^ &var_28)
        return eax_5
    
    int32_t eax_4
    eax_4.b = 0
    sub_69a5bc(eax_1 ^ &var_28)
    return eax_4

int32_t* ecx_6 = *arg2

if (ecx_6 != 0)
    int32_t var_24
    sub_401f60(&var_24, (**ecx_6)())
    sub_696f50(data_75d4d0, &var_24)
    int32_t var_10
    
    if (var_10 u>= 0x10)
        j__free(var_24)

BOOL eax_3
eax_3.b = 1
sub_69a5bc(eax_1 ^ &var_28)
return eax_3
