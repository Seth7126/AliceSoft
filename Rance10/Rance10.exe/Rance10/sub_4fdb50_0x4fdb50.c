// 函数: sub_4fdb50
// 地址: 0x4fdb50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736c08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, 0x765a64, 0x10)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg4 + 4)
int32_t eax_3

if (ecx_1 != 0)
    char* edx_1 = &var_30
    
    if (var_1c u>= 0x10)
        edx_1 = var_30.d
    
    eax_3 = (*(*ecx_1 + 8))(edx_1, 0)
else
    eax_3 = 0

*(arg1 + 4) = eax_3
int32_t var_8_2 = 0xffffffff

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0
sub_403490(&var_30, 0x7659ec, 0xc)
int32_t var_8_3 = 1
int32_t* ecx_3 = *(arg4 + 4)
int32_t eax_7

if (ecx_3 != 0)
    char* edx_2 = &var_30
    
    if (var_1c_1 u>= 0x10)
        edx_2 = var_30.d
    
    eax_7 = (*(*ecx_3 + 8))(edx_2, 0)
else
    eax_7 = 0

int32_t var_8_4 = 0xffffffff
eax_7.b = eax_7 == 1
*(arg1 + 8) = eax_7.b

if (var_1c_1 u>= 0x10)
    sub_403160(var_30.d, var_1c_1 + 1, 1)

int32_t var_1c_2 = 0xf
int32_t var_20_2 = 0
var_30 = 0
sub_403490(&var_30, 0x7659dc, 0xe)
int32_t var_8_5 = 2
int32_t* ecx_5 = *(arg4 + 4)
int32_t xmm0

if (ecx_5 != 0)
    char* edx_3 = &var_30
    
    if (var_1c_2 u>= 0x10)
        edx_3 = var_30.d
    
    int32_t* var_64_1 = ecx_5
    (*(*ecx_5 + 0xc))(edx_3, 0)
    xmm0 = fconvert.s(arg2)
else
    xmm0 = (zx.o(0)).d

int32_t var_8_6 = 0xffffffff
*(arg1 + 0xc) = xmm0

if (var_1c_2 u>= 0x10)
    sub_403160(var_30.d, var_1c_2 + 1, 1)

if (arg3 s> 4)
    int32_t var_1c_3 = 0xf
    int32_t var_20_3 = 0
    var_30 = 0
    sub_403490(&var_30, 0x765a04, 0x24)
    int32_t var_8_7 = 3
    int32_t* ecx_7 = *(arg4 + 4)
    int32_t eax_15
    
    if (ecx_7 != 0)
        char* edx_4 = &var_30
        
        if (var_1c_3 u>= 0x10)
            edx_4 = var_30.d
        
        eax_15 = (*(*ecx_7 + 8))(edx_4, 0)
    else
        eax_15 = 0
    
    int32_t var_8_8 = 0xffffffff
    eax_15.b = eax_15 == 1
    *(arg1 + 0x10) = eax_15.b
    
    if (var_1c_3 u>= 0x10)
        sub_403160(var_30.d, var_1c_3 + 1, 1)
else
    *(arg1 + 0x10) = 0

int32_t var_1c_4 = 0xf
int32_t var_20_4 = 0
var_30 = 0
sub_403490(&var_30, 0x7659fc, 4)
int32_t var_8_9 = 4
int32_t* ecx_9 = *(arg4 + 4)
int32_t eax_19

if (ecx_9 != 0)
    char* edx_5 = &var_30
    
    if (var_1c_4 u>= 0x10)
        edx_5 = var_30.d
    
    eax_19 = (*(*ecx_9 + 8))(edx_5, 0)
else
    eax_19 = 0

*(arg1 + 0x14) = eax_19
int32_t var_8_10 = 0xffffffff

if (var_1c_4 u>= 0x10)
    sub_403160(var_30.d, var_1c_4 + 1, 1)

int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_403490(&var_48, 0x7659d0, 0xa)
int32_t var_8_11 = 5
int32_t* ecx_11 = *(arg4 + 4)
int32_t* esi_1

if (ecx_11 != 0)
    char* edx_6 = &var_48
    
    if (var_34 u>= 0x10)
        edx_6 = var_48.d
    
    esi_1 = (*(*ecx_11 + 0x2c))(edx_6)
else
    esi_1 = nullptr

struct common::CEXArrayReader::VTable* const var_50 = &common::CEXArrayReader::`vftable'
int32_t* var_4c_2 = esi_1
var_8_11.b = 7

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0
int32_t eax_27

if (esi_1 != 0)
    eax_27 = (*(*esi_1 + 0xc))(0, 0)
else
    eax_27 = 0

*(arg1 + 0x18) = eax_27
int32_t eax_29

if (esi_1 != 0)
    eax_29 = (*(*esi_1 + 0xc))(1, 0)
else
    eax_29 = 0

*(arg1 + 0x1c) = eax_29
int32_t eax_31

if (esi_1 != 0)
    eax_31 = (*(*esi_1 + 0xc))(2, 0)
else
    eax_31 = 0

*(arg1 + 0x20) = eax_31
int32_t result

if (esi_1 != 0)
    result = (*(*esi_1 + 0xc))(3, 0)
else
    result = 0

*(arg1 + 0x24) = result
result.b = 1
*(arg1 + 0x28) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
