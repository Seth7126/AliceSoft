// 函数: sub_45f0b0
// 地址: 0x45f0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8828
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct exfile::CToken::VTable* var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t entry_ebx
int32_t var_5c = entry_ebx
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *arg3

if (result != arg3[1])
    sub_4601f0(arg2)
    sub_45f050(arg1, *arg3, arg3[1])
    
    while (true)
        struct exfile::CToken::VTable* var_34
        sub_45f1d0(arg1, &var_34)
        result = *arg1
        arg1[1] = result
        var_34 = &exfile::CToken::`vftable'
        int32_t var_1c
        int32_t var_30
        
        if (var_1c u>= 0x10)
            result = j__free(var_30)
        int32_t var_18
        
        if (var_18 == 0)
            break
        
        int32_t var_4 = 0
        sub_45d470(arg2, sub_45f1d0(arg1, &var_58))
        int32_t var_4_1 = 0xffffffff
        var_58 = &exfile::CToken::`vftable'
        char var_54
        int32_t var_40
        
        if (var_40 u>= 0x10)
            j__free(var_54.d)
        
        var_40 = 0xf
        int32_t var_44_1 = 0
        var_54 = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
