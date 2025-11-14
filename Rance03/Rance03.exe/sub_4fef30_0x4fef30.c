// 函数: sub_4fef30
// 地址: 0x4fef30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c0e66
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 0
void* var_64
int32_t var_4c
int32_t* eax_7 =
    sub_410930(sub_410930(&ExceptionList, arg3, &var_64, .\"), &var_64, &var_4c, 0x6e2240)
int32_t* edi = eax_7
var_c_1.b = 1
var_c_1.b = 2
char var_94
char var_7c
var_a4 = sub_401c90(arg2, &var_7c, sub_410930(eax_7, &var_64, &var_94, 0x6e2238))
var_c_1.b = 3
int32_t* ecx_4 = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** eax_10

if (ecx_4 != 0)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    eax_10 = (*(*ecx_4 + 0x44))(edi)
else
    eax_10 = nullptr

struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4fe4a0(arg1, var_a4, eax_10)
void* const ebx
ebx.b = result.b == 0
int32_t var_68

if (var_68 u>= 0x10)
    result = j__free(var_7c.d)

int32_t var_68_1 = 0xf
int32_t var_6c = 0
var_7c = 0
int32_t var_80

if (var_80 u>= 0x10)
    result = j__free(var_94.d)

var_c_1.b = 0
int32_t var_80_1 = 0xf
int32_t var_84 = 0
var_94 = 0
int32_t var_38

if (var_38 u>= 0x10)
    result = j__free(var_4c)

if (ebx.b == 0)
    int32_t var_34
    int32_t* eax_12 = sub_410930(result, &var_64, &var_34, 0x6e2224)
    int32_t* edi_1 = eax_12
    var_c_1.b = 4
    int32_t* eax_13 = sub_410930(eax_12, &var_64, &var_4c, 0x6e2210)
    int32_t* ebx_1 = eax_13
    var_c_1.b = 5
    int32_t* eax_14 = sub_410930(eax_13, &var_64, &var_7c, 0x6e225c)
    var_c_1.b = 6
    int32_t* eax_15 = sub_410930(eax_14, &var_64, &var_94, 0x6e2248)
    var_c_1.b = 7
    char* ecx_11 = *(arg2 + 4)
    
    if (ecx_11 != 0)
        if (edi_1[5] u>= 0x10)
            edi_1 = *edi_1
        
        var_a4 = (*(*ecx_11 + 0x50))(edi_1, 3)
    else
        var_a4 = ecx_11
    
    int32_t* ecx_12 = *(arg2 + 4)
    
    if (ecx_12 != 0)
        if (ebx_1[5] u>= 0x10)
            ebx_1 = *ebx_1
        
        ebx = (*(*ecx_12 + 0x50))(ebx_1, 2)
    else
        ebx = nullptr
    
    int32_t* ecx_13 = *(arg2 + 4)
    int32_t edi_3
    
    if (ecx_13 != 0)
        int32_t* edx_7 = eax_14
        
        if (edx_7[5] u>= 0x10)
            edx_7 = *edx_7
        
        edi_3 = (*(*ecx_13 + 0x50))(edx_7, 1)
    else
        edi_3 = 0
    
    int32_t* ecx_15 = *(arg2 + 4)
    
    if (ecx_15 != 0)
        int32_t* edx_8 = eax_15
        
        if (edx_8[5] u>= 0x10)
            edx_8 = *edx_8
        
        result = (*(*ecx_15 + 0x50))(edx_8, 0)
    else
        result = nullptr
    
    if (ebx s>= 0)
        char* ecx_16 = var_a4
        
        if (ecx_16 s>= 0 && result s>= 0 && edi_3 s>= 0)
            *(arg1 + 0x48) = result
            *(arg1 + 0x4c) = edi_3
            *(arg1 + 0x50) = ebx
            *(arg1 + 0x54) = ecx_16
            *(arg1 + 0x58) = 1
    
    if (var_80_1 u>= 0x10)
        j__free(var_94.d)
    
    int32_t var_80_2 = 0xf
    int32_t var_84_1 = 0
    var_94 = 0
    
    if (var_68_1 u>= 0x10)
        j__free(var_7c.d)
    
    int32_t var_68_2 = 0xf
    int32_t var_6c_1 = 0
    var_7c = 0
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c.b = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    *(arg1 + 0x58) = 1
    ebx.b = 1
else
    ebx.b = 0

int32_t var_50

if (var_50 u>= 0x10)
    j__free(var_64)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a4)
return result
