// 函数: sub_4e6a30
// 地址: 0x4e6a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_40
sub_410930(&ExceptionList, arg2, &var_40, U".")
int32_t var_4 = 0
sub_4107c0(*(arg1 + 4), *(arg1 + 8))
int32_t eax_6 = *(arg1 + 4)
*(arg1 + 8) = eax_6
int32_t var_58
int32_t* eax_7 = sub_410930(eax_6, &var_40, &var_58, 0x6e2010)
int32_t* ecx_2 = eax_7
var_4.b = 1
int32_t* edx_2 = *(arg3 + 4)
int32_t* edi

if (edx_2 != 0)
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    eax_7 = (*(*edx_2 + 0x10))(ecx_2)
    edi = eax_7
else
    edi = nullptr

var_4.b = 0
int32_t var_44

if (var_44 u>= 0x10)
    eax_7 = j__free(var_58)

int32_t esi = 0
int32_t var_28
int32_t var_14

if (edi s> 0)
    do
        var_4.b = 2
        var_4.b = 3
        eax_7 = sub_412d60(arg1 + 4, 
            sub_401d70(arg3, &var_58, sub_410930(eax_7, &var_40, &var_28, 0x6e2008), esi))
        
        if (var_44 u>= 0x10)
            eax_7 = j__free(var_58)
        
        var_4.b = 0
        var_44 = 0xf
        int32_t var_48_1 = 0
        var_58.b = 0
        
        if (var_14 u>= 0x10)
            eax_7 = j__free(var_28)
        
        esi += 1
    while (esi s< edi)

int32_t* ecx_8 = sub_410930(eax_7, &var_40, &var_28, 0x6e1ffc)
var_4.b = 4
int32_t* edx_5 = *(arg3 + 4)
int32_t result

if (edx_5 != 0)
    if (ecx_8[5] u>= 0x10)
        ecx_8 = *ecx_8
    
    result = (*(*edx_5 + 0x44))(ecx_8)
else
    result = 0

*(arg1 + 0x10) = result

if (var_14 u>= 0x10)
    j__free(var_28)

int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
