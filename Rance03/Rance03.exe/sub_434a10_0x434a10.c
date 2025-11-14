// 函数: sub_434a10
// 地址: 0x434a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5943
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CFunctionSyntax::VTable** var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t ebx
int32_t var_60 = ebx
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_434990(arg1)

while (true)
    struct advengine::CToken::VTable* var_3c
    sub_438a40(arg2, &var_3c)
    int32_t var_38
    ebx.b = var_38 == 0xfffffffd
    *(arg2 + 8) = *(arg2 + 4)
    var_3c = &advengine::CToken::`vftable'
    int32_t var_20
    int32_t var_34
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    int32_t result
    
    if (ebx.b != 0)
        result.b = 1
    label_434b55:
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_69a5bc(eax_2 ^ &var_5c)
        return result
    
    struct advengine::CFunctionSyntax::VTable** eax_5 = sub_69adc6(0x84)
    var_5c = eax_5
    int32_t var_4 = 0
    int32_t* esi_1
    
    if (eax_5 == 0)
        esi_1 = nullptr
    else
        esi_1 = sub_435de0(eax_5)
    
    int32_t var_4_1 = 0xffffffff
    
    if (sub_4365d0(esi_1, arg2).b == 0)
        if (esi_1 != 0)
            (**esi_1)(1)
        
        result.b = 0
        goto label_434b55
    
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    char var_58 = 0
    sub_401ff0(&var_58, &esi_1[0xd], 0, 0xffffffff)
    int32_t* var_40_1 = esi_1
    int32_t var_4_2 = 1
    sub_434cb0(arg1 + 0x1c, &var_58)
    int32_t var_4_3 = 0xffffffff
    
    if (var_44_1 u>= 0x10)
        j__free(var_58.d)
    
    int32_t var_44_2 = 0xf
    int32_t var_48_2 = 0
    var_58 = 0
