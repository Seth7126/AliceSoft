// 函数: sub_437f40
// 地址: 0x437f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5e58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CToken::VTable* const var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = *(arg1 + 0x2c)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edi != *(arg1 + 0x34))
    var_38 = &advengine::CToken::`vftable'
    *(arg1 + 0x2c) = edi + 0x28
    int32_t eax_6 = *(edi + 4)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_401ff0(&var_30, edi + 8, 0, 0xffffffff)
    int32_t var_18_1 = *(edi + 0x20)
    int32_t var_14_1 = *(edi + 0x24)
    int32_t var_4 = 0
    
    if (eax_6 == 0xf)
        int32_t ebx_1 = 1
        
        while (*(arg1 + 0x2c) != *(arg1 + 0x34))
            void* edi_1 = *(arg1 + 0x2c)
            
            if (edi_1 != *(arg1 + 0x34))
                *(arg1 + 0x2c) = edi_1 + 0x28
            else
                edi_1 = arg1 + 4
            
            int32_t ecx_3 = *(edi_1 + 4)
            
            if (&var_30 != edi_1 + 8)
                sub_401ff0(&var_30, edi_1 + 8, 0, 0xffffffff)
            
            int32_t var_18_2 = *(edi_1 + 0x20)
            struct _EXCEPTION_REGISTRATION_RECORD** var_14_2 = *(edi_1 + 0x24)
            
            if (ecx_3 == 0xf)
                ebx_1 += 1
            else if (ecx_3 == 0x10)
                ebx_1 -= 1
            
            if (ebx_1 == 0)
                break
            
            sub_437860(arg2, &var_38)
    else
        sub_437860(arg2, &var_38)
    
    var_38 = &advengine::CToken::`vftable'
    
    if (var_1c_1 u>= 0x10)
        j__free(var_30.d)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
