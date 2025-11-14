// 函数: sub_436060
// 地址: 0x436060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5b88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CToken::VTable* var_3c
sub_438a40(arg2, &var_3c)
int32_t var_4 = 0
int32_t var_38
int32_t var_34
int32_t ebx

if (var_38 == 1)
    struct advengine::CToken::VTable* var_64
    sub_438a40(arg2, &var_64)
    var_4.b = 1
    int32_t var_60
    char var_5c
    
    if (var_60 == 1)
        var_70 = 0
        int32_t var_6c_1 = 0
        int32_t var_68_1 = 0
        var_4.b = 2
        
        if (sub_436220(arg2, &var_70) != 0)
            *(arg1 + 8) = var_38
            
            if (arg1 + 0xc != &var_34)
                sub_401ff0(arg1 + 0xc, &var_34, 0, 0xffffffff)
            
            int32_t var_1c
            *(arg1 + 0x24) = var_1c
            int32_t var_18
            *(arg1 + 0x28) = var_18
            *(arg1 + 0x30) = var_60
            
            if (arg1 + 0x34 != &var_5c)
                sub_401ff0(arg1 + 0x34, &var_5c, 0, 0xffffffff)
            
            int32_t var_44
            *(arg1 + 0x4c) = var_44
            int32_t var_40
            *(arg1 + 0x50) = var_40
            
            if (arg1 + 0x60 != &var_70)
                int32_t ecx_4 = *(arg1 + 0x60)
                *(arg1 + 0x60) = var_70
                var_70 = ecx_4
                int32_t ecx_5 = *(arg1 + 0x64)
                *(arg1 + 0x64) = var_6c_1
                int32_t var_6c_2 = ecx_5
                int32_t ecx_6 = *(arg1 + 0x68)
                *(arg1 + 0x68) = var_68_1
                int32_t var_68_2 = ecx_6
            
            ebx.b = 1
        else
            ebx.b = 0
        
        var_4.b = 1
        sub_435c20(&var_70)
    else
        ebx.b = 0
    
    var_64 = &advengine::CToken::`vftable'
    int32_t var_48
    
    if (var_48 u>= 0x10)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
else
    ebx.b = 0

var_3c = &advengine::CToken::`vftable'
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

struct advengine::CToken::VTable** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return result
