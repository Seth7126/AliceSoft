// 函数: sub_4b08e0
// 地址: 0x4b08e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731e90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x761a1c, 0xc)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg2 + 4)
int32_t* esi

if (ecx_1 != 0)
    char* edx_1 = &var_44
    
    if (var_30 u>= 0x10)
        edx_1 = var_44.d
    
    esi = (*(*ecx_1 + 0x2c))(edx_1)
else
    esi = nullptr

struct common::CEXArrayReader::VTable* const var_70 = &common::CEXArrayReader::`vftable'
int32_t* var_6c = esi
var_8_1.b = 2

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t eax_7

if (esi != 0)
    eax_7 = (*(*esi + 0xc))(0, 0)
else
    eax_7 = 0

eax_7.b = eax_7 == 1
arg1[3].b = eax_7.b
int32_t eax_9

if (esi != 0)
    eax_9 = (*(*esi + 0xc))(1, 0)
else
    eax_9 = 0

eax_9.b = eax_9 == 1
*(arg1 + 0xd) = eax_9.b
int32_t eax_11

if (esi != 0)
    eax_11 = (*(*esi + 0xc))(2, 0)
else
    eax_11 = 0

eax_11.b = eax_11 == 1
*(arg1 + 0xe) = eax_11.b
int32_t eax_13

if (esi != 0)
    eax_13 = (*(*esi + 0xc))(3, 0)
else
    eax_13 = 0

int32_t var_18 = 0xf
eax_13.b = eax_13 == 1
int32_t var_1c = 0
*(arg1 + 0xf) = eax_13.b
char var_2c = 0
sub_403490(&var_2c, 0x761a2c, 0xa)
var_8_1.b = 3
int32_t* ecx_7 = *(arg2 + 4)
int32_t esi_1

if (ecx_7 != 0)
    char* edx_2 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_2 = var_2c.d
    
    esi_1 = (*(*ecx_7 + 8))(edx_2, 0)
else
    esi_1 = 0

var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result = sub_4b0c30(arg1, esi_1)
int32_t result_1 = 0

if (esi_1 s> 0)
    struct common::CEXTreeReader::VTable* const var_68 = &common::CEXTreeReader::`vftable'
    
    do
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x761a48, 0xa)
        var_8_1.b = 4
        char var_5c
        char* ecx_13 = sub_409350(&result_1, &var_2c, &var_5c, &result_1)
        var_8_1.b = 5
        int32_t* edx_4 = *(arg2 + 4)
        int32_t eax_19
        
        if (edx_4 != 0)
            if (*(ecx_13 + 0x14) u>= 0x10)
                ecx_13 = *ecx_13
            
            eax_19, ecx_13 = (*(*edx_4 + 0x24))(ecx_13)
        else
            eax_19 = 0
        
        int32_t var_64_1 = eax_19
        var_8_1.b = 6
        struct common::CEXTreeReader::VTable* const* var_88_5 = &var_68
        sub_4afad0(*arg1 + result_1 * 0xc, ecx_13)
        var_68 = &common::CEXTreeReader::`vftable'
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        var_8_1.b = 2
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        result = result_1 + 1
        result_1 = result
    while (result s< esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
