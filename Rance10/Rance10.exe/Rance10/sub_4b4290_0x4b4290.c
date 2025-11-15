// 函数: sub_4b4290
// 地址: 0x4b4290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732040
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x761ae4, 6)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg2 + 4)
int32_t* eax_3

if (ecx_1 != 0)
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    eax_3 = (*(*ecx_1 + 0x2c))(edx_1)
else
    eax_3 = nullptr

struct common::CEXArrayReader::VTable* const var_68 = &common::CEXArrayReader::`vftable'
int32_t* var_64 = eax_3
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x761aec, 2)
var_8_1.b = 3
int32_t* ecx_3 = *(arg2 + 4)
int32_t* edi

if (ecx_3 != 0)
    char* edx_2 = &var_44
    
    if (var_30 u>= 0x10)
        edx_2 = var_44.d
    
    edi = (*(*ecx_3 + 0x2c))(edx_2)
else
    edi = nullptr

struct common::CEXArrayReader::VTable* const var_70 = &common::CEXArrayReader::`vftable'
int32_t* var_6c = edi
var_8_1.b = 5

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x761acc, 0x16)
var_8_1.b = 6
int32_t* ecx_5 = *(arg2 + 4)
int32_t* esi_1

if (ecx_5 != 0)
    char* edx_3 = &var_5c
    
    if (var_48 u>= 0x10)
        edx_3 = var_5c.d
    
    esi_1 = (*(*ecx_5 + 0x2c))(edx_3)
else
    esi_1 = nullptr

struct common::CEXArrayReader::VTable* const var_78 = &common::CEXArrayReader::`vftable'
int32_t* var_74 = esi_1
var_8_1.b = 8

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t* ecx_6 = eax_3
int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0
int32_t eax_15

if (ecx_6 != 0)
    eax_15 = (*(*ecx_6 + 0xc))(0, 0)
    ecx_6 = eax_3
else
    eax_15 = 0

*(arg1 + 4) = eax_15
int32_t eax_17

if (ecx_6 != 0)
    eax_17 = (*(*ecx_6 + 0xc))(1, 0)
else
    eax_17 = 0

*(arg1 + 8) = eax_17
int32_t eax_19

if (edi != 0)
    eax_19 = (*(*edi + 0xc))(0, 0)
else
    eax_19 = 0

*(arg1 + 0xc) = eax_19
int32_t eax_21

if (edi != 0)
    eax_21 = (*(*edi + 0xc))(1, 0)
else
    eax_21 = 0

*(arg1 + 0x10) = eax_21
int32_t eax_23

if (edi != 0)
    eax_23 = (*(*edi + 0xc))(2, 0)
else
    eax_23 = 0

*(arg1 + 0x14) = eax_23
int32_t eax_25

if (edi != 0)
    eax_25 = (*(*edi + 0xc))(3, 0)
else
    eax_25 = 0

*(arg1 + 0x18) = eax_25
int32_t eax_27

if (esi_1 != 0)
    eax_27 = (*(*esi_1 + 0xc))(0, 0)
else
    eax_27 = 0

*(arg1 + 0x1c) = eax_27
int32_t eax_29

if (esi_1 != 0)
    eax_29 = (*(*esi_1 + 0xc))(1, 0)
else
    eax_29 = 0

*(arg1 + 0x20) = eax_29
int32_t eax_31

if (esi_1 != 0)
    eax_31 = (*(*esi_1 + 0xc))(2, 0)
else
    eax_31 = 0

*(arg1 + 0x24) = eax_31
int32_t result

if (esi_1 != 0)
    result = (*(*esi_1 + 0xc))(3, 0)
else
    result = 0

*(arg1 + 0x28) = result
result.b = 1
*(arg1 + 0x2c) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
