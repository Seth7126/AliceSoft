// 函数: sub_437d60
// 地址: 0x437d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5e20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CToken::VTable* var_60
sub_438a40(arg1, &var_60)
*(arg1 + 8) = *(arg1 + 4)
int32_t var_5c
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = var_5c == 0xfffffffd
char var_61 = result.b
var_60 = &advengine::CToken::`vftable'
int32_t var_58
int32_t var_44

if (var_44 u>= 0x10)
    j__free(var_58)
    result.b = var_61

if (result.b == 0)
    struct advengine::CToken::VTable* var_38
    sub_438a40(arg1, &var_38)
    int32_t var_4 = 0
    int32_t var_34
    int32_t var_30
    
    if (var_34 == 0xf)
        int32_t esi_1 = 1
        
        while (true)
            sub_438a40(arg1, &var_60)
            *(arg1 + 8) = *(arg1 + 4)
            result.b = var_5c == 0xfffffffd
            char var_61_1 = result.b
            var_60 = &advengine::CToken::`vftable'
            
            if (var_44 u>= 0x10)
                j__free(var_58)
                result.b = var_61_1
            
            if (result.b != 0)
                break
            
            struct advengine::CToken::VTable** eax_5 = sub_438a40(arg1, &var_60)
            var_4.b = 1
            int32_t ecx_8 = eax_5[1]
            
            if (&var_30 != &eax_5[2])
                sub_401ff0(&var_30, &eax_5[2], 0, 0xffffffff)
            
            int32_t var_18_1 = eax_5[8]
            var_4.b = 0
            int32_t var_14_1 = eax_5[9]
            var_60 = &advengine::CToken::`vftable'
            
            if (var_44 u>= 0x10)
                j__free(var_58)
            
            if (ecx_8 == 0xf)
                esi_1 += 1
            else if (ecx_8 == 0x10)
                esi_1 -= 1
            
            if (esi_1 == 0)
                break
            
            sub_437860(arg2, &var_38)
    else
        sub_437860(arg2, &var_38)
    
    var_38 = &advengine::CToken::`vftable'
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        j__free(var_30)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return result
