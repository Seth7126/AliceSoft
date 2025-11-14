// 函数: sub_405660
// 地址: 0x405660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*(arg1 + 0x50) == 0)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    var_34 = 0
    int32_t var_c_1 = 0
    void* ebx_1
    
    if (sub_408150(arg1 + 0x48, &var_34, arg2) != 0)
        int32_t eax_5 = *(arg1 + 0x14)
        
        if (eax_5 == 1)
            ebx_1.b = sub_408250(arg1 + 0x48, arg2)
        else if (eax_5 == 2)
            if (sub_4058a0(&var_34, arg1 + 0x30) == 0)
                if (arg1 + 0x30 != &var_34)
                    sub_401ff0(arg1 + 0x30, &var_34, 0, 0xffffffff)
                
                ebx_1.b = 1
            else
                ebx_1.b = 0
        else
            ebx_1.b = 1
    else
        ebx_1.b = 0
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)
    
    result = ebx_1.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
