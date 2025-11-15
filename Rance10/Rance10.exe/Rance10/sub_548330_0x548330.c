// 函数: sub_548330
// 地址: 0x548330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_73a260
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_80[0x10]
int32_t eax_2 = __security_cookie ^ &var_80
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1

if (arg3 == 0)
    (*(eax_3 + 0x34))(eax_2)
else
    (*(eax_3 + 0x30))(eax_2)

int32_t var_54 = 0xf
int32_t var_58 = 0
char var_68 = 0
sub_403490(&var_68, 0x766f64, 4)
int32_t var_84_1 = 0
int32_t var_3c = 0xf
int32_t var_40 = 0
char var_50 = 0
sub_403490(&var_50, 0x75d3e5, nullptr)
var_84_1.b = 1
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_403490(&var_38, 0x766f5c, 6)
var_84_1.b = 2
void** eax_4 = sub_403cd0(arg2, &var_80, &var_38, &var_50)
var_84_1.b = 3
int32_t* ecx_4 = *(arg2 + 4)
int32_t* eax_5

if (ecx_4 != 0)
    char* edx_1 = &var_68
    
    if (var_54 u>= 0x10)
        edx_1 = var_68.d
    
    eax_5 = (*(*ecx_4 + 8))(edx_1, 0)
else
    eax_5 = nullptr

sub_547af0(arg1, eax_4, eax_5)
int32_t var_6c

if (var_6c u>= 0x10)
    sub_403160(var_80[0].d, var_6c + 1, 1)

int32_t var_6c_1 = 0xf
int32_t var_70 = 0
var_80[0] = 0

if (var_24 u>= 0x10)
    sub_403160(var_38.d, var_24 + 1, 1)

int32_t var_24_1 = 0xf
int32_t var_28_1 = 0
var_38 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50.d, var_3c + 1, 1)

int32_t var_84_2 = 0xffffffff
int32_t var_3c_1 = 0xf
int32_t var_40_1 = 0
var_50 = 0

if (var_54 u>= 0x10)
    sub_403160(var_68.d, var_54 + 1, 1)

int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x766f48, 0x12)
int32_t var_84_3 = 4
int32_t* ecx_7 = *(arg2 + 4)
int32_t* edi_1

if (ecx_7 != 0)
    char* edx_2 = &var_20
    
    if (var_c u>= 0x10)
        edx_2 = var_20.d
    
    edi_1 = (*(*ecx_7 + 0x2c))(edx_2)
else
    edi_1 = nullptr

struct common::CEXArrayReader::VTable* const var_9c = &common::CEXArrayReader::`vftable'
int32_t* var_98 = edi_1
var_84_3.b = 6

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
int32_t result
int32_t ecx_8
int32_t edx_3
int32_t ebx_1

if (edi_1 != 0)
    ebx_1 = (*(*edi_1 + 0xc))(3, 0)
    int32_t eax_21 = (*(*edi_1 + 0xc))(2, 0)
    int32_t result_1 = (*(*edi_1 + 0xc))(1, 0)
    edx_3 = eax_21
    ecx_8 = (*(*edi_1 + 0xc))(0, 0)
    
    if (edx_3 s>= 0 && ebx_1 s>= 0 && ecx_8 s>= 0)
        result = result_1
        
        if (result s>= 0)
            goto label_54859d
else
    ebx_1 = 0
    edx_3 = 0
    result = 0
    ecx_8 = 0
label_54859d:
    arg1[0x26] = ecx_8
    arg1[0x27] = result
    arg1[0x29] = edx_3
    arg1[0x2a] = ebx_1
    arg1[0x2b].b = 1
arg1[0x2b].b = 1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
