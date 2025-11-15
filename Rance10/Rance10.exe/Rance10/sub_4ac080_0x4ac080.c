// 函数: sub_4ac080
// 地址: 0x4ac080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731950
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x761770, 0x10)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg2 + 4)
int32_t esi

if (ecx_1 != 0)
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    esi = (*(*ecx_1 + 8))(edx_1, 0)
else
    esi = 0

int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

sub_4ac230(arg1 + 4, esi)
int32_t result_1 = 0
int32_t result

if (esi s> 0)
    struct common::CEXTreeReader::VTable* const var_68 = &common::CEXTreeReader::`vftable'
    
    do
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        sub_403490(&var_44, 0x761758, 0x10)
        int32_t var_8_3 = 1
        char var_5c
        char* ecx_7 = sub_409350(&result_1, &var_44, &var_5c, &result_1)
        var_8_3.b = 2
        int32_t* edx_3 = *(arg2 + 4)
        int32_t eax_7
        
        if (edx_3 != 0)
            if (*(ecx_7 + 0x14) u>= 0x10)
                ecx_7 = *ecx_7
            
            eax_7, ecx_7 = (*(*edx_3 + 0x24))(ecx_7)
        else
            eax_7 = 0
        
        int32_t var_64_1 = eax_7
        var_8_3.b = 3
        struct common::CEXTreeReader::VTable* const* var_80_3 = &var_68
        sub_4b08e0((result_1 << 4) + *(arg1 + 4), ecx_7)
        var_68 = &common::CEXTreeReader::`vftable'
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        int32_t var_8_4 = 0xffffffff
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        result = result_1 + 1
        result_1 = result
    while (result s< esi)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
