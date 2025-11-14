// 函数: sub_438a40
// 地址: 0x438a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *(arg1 + 8)
int32_t var_40 = 0
*(arg1 + 4) = eax_5

while (true)
    if (*(arg1 + 0x10) u> eax_5)
        int32_t ebx_1 = eax_5
        char eax_6 = sub_439780(arg1)
        char eax_7
        
        if (eax_6 != 0)
            eax_7 = sub_4398b0(arg1)
        
        if (eax_6 == 0 || eax_7 == 0)
            sub_438820(arg2)
            break
        
        eax_5 = *(arg1 + 8)
        
        if (eax_5 != ebx_1)
            continue
    
    int32_t var_44
    sub_438b70(arg1, &var_44, &var_48)
    struct advengine::CToken::VTable* var_3c
    sub_438c00(arg1, &var_3c)
    int32_t var_4 = 0
    int32_t eax_8 = var_44
    int32_t eax_9 = var_48
    int32_t var_38
    arg2[1] = var_38
    *arg2 = &advengine::CToken::`vftable'
    arg2[7] = 0xf
    arg2[6] = 0
    arg2[2].b = 0
    void* var_34
    sub_401ff0(&arg2[2], &var_34, 0, 0xffffffff)
    arg2[8] = eax_8
    arg2[9] = eax_9
    var_3c = &advengine::CToken::`vftable'
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return arg2
