// 函数: sub_433d50
// 地址: 0x433d50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5880
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
void* esi = data_75d4bc
struct advengine::CToken::VTable* var_38
sub_438820(&var_38)
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_434b80(esi + 0xc, edi)
int32_t ebx

if (result == 0)
label_433dce:
    
    if (*(esi + 0x20) != 0)
        int32_t var_54_1 = 0xf
        int32_t var_58_1 = 0
        char var_68 = 0
        var_4.b = 1
        void** eax_5
        
        if (*(esi + 0x24) u< 0x10)
            eax_5 = esi + 0x10
        else
            eax_5 = *(esi + 0x10)
        
        void** var_80_2 = eax_5
        var_4.b = 2
        int32_t var_50
        sub_403110(&var_68, sub_4691f0(&var_50, 0x6db180), nullptr, 0xffffffff)
        var_4.b = 1
        int32_t var_3c
        
        if (var_3c u>= 0x10)
            j__free(var_50)
        
        if (edi[5] u>= 0x10)
            edi = *edi
        
        int32_t* var_80_4 = edi
        var_4.b = 3
        sub_403110(&var_68, sub_4691f0(&var_50, 0x6db198), nullptr, 0xffffffff)
        var_4.b = 1
        
        if (var_3c u>= 0x10)
            j__free(var_50)
        
        sub_4057c0(&var_68, 0x6db1e0, 0x2c)
        char* eax_8 = &var_68
        
        if (var_54_1 u>= 0x10)
            eax_8 = var_68.d
        
        sub_64b6b0(eax_8)
        int32_t var_18
        int32_t var_14
        sub_433fb0(esi + 0x10, var_18, var_14)
        ebx.b = 0
        
        if (var_54_1 u>= 0x10)
            j__free(var_68.d)
        
        int32_t var_54_2 = 0xf
        int32_t var_58_2 = 0
        var_68 = 0
    else
        ebx.b = 0
else
    if (sub_4371c0(result, &var_38, arg2).b == 0)
        goto label_433dce
    
    ebx.b = 1

var_38 = &advengine::CToken::`vftable'
int32_t var_1c
int32_t var_30

if (var_1c u>= 0x10)
    j__free(var_30)
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
