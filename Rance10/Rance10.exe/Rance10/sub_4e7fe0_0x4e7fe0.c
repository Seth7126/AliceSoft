// 函数: sub_4e7fe0
// 地址: 0x4e7fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_9c = 0xffffffff
int32_t (* var_a0)(void* arg1) = sub_735544
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_98
int32_t eax_2 = __security_cookie ^ &var_98
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_a8 = arg2
int32_t* var_ac = arg3
int32_t var_b0 = 0
int32_t* eax_4
eax_4.b = *(arg1 + 0xf0)
char var_68
char var_50
char* eax_5
int32_t ebx

if (eax_4.b == 0)
    eax_5 = sub_4e3820(arg1 + 0xe4, &var_50)
    int32_t var_9c_2 = 1
    ebx = 2
else
    eax_5 = sub_4e3700(arg1 + 0xe4, &var_68)
    int32_t var_9c_1 = 0
    ebx = 1

int32_t var_b0_1 = ebx
int32_t result_1 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_403590(&var_38, eax_5, 0, 0xffffffff)
int32_t var_9c_3 = 2

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_b0_2 = ebx
    int32_t* var_3c
    
    if (var_3c u>= 0x10)
        sub_403160(var_50.d, var_3c + 1, 1)
    
    int32_t var_3c_1 = 0xf
    int32_t var_40_1 = 0
    var_50 = 0

var_9c_3.b = 4

if ((ebx.b & 1) != 0)
    ebx &= 0xfffffffe
    int32_t var_b0_3 = ebx
    int32_t* var_54
    
    if (var_54 u>= 0x10)
        sub_403160(var_68.d, var_54 + 1, 1)
    
    int32_t var_54_1 = 0xf
    int32_t var_58_1 = 0
    var_68 = 0

int32_t* eax_6
eax_6.b = *(arg1 + 0xf0)
char var_80
char* eax_9
int32_t ebx_1

if (eax_6.b == 0)
    eax_9 = sub_4e3090(arg1 + 0xe4, &var_80)
    int32_t var_9c_4 = 6
    ebx_1 = ebx | 8
else
    eax_9 = sub_4e2f70(arg1 + 0xe4, &var_98)
    var_9c_3.b = 5
    ebx_1 = ebx | 4

int32_t var_b0_4 = ebx_1
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403590(&var_20, eax_9, 0, 0xffffffff)
int32_t var_9c_5 = 7

if ((ebx_1.b & 8) != 0)
    ebx_1 &= 0xfffffff7
    int32_t var_6c
    
    if (var_6c u>= 0x10)
        sub_403160(var_80.d, var_6c + 1, 1)
    
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    var_80 = 0

var_9c_5.b = 9

if ((ebx_1.b & 4) != 0)
    int32_t var_84
    
    if (var_84 u>= 0x10)
        sub_403160(var_98.d, var_84 + 1, 1)
    
    int32_t var_84_1 = 0xf
    int32_t var_88_1 = 0
    var_98 = 0

int32_t* ebx_2
int32_t* edi_1

if (var_28 == 0)
    edi_1 = var_ac
    ebx_2 = var_a8
    
    if (var_10 == 0)
        *ebx_2 = *(arg1 + 0xe8)
        *edi_1 = *(arg1 + 0xec)
    else
        char* eax_16 = &var_20
        
        if (var_c u>= 0x10)
            eax_16 = var_20.d
        
        sub_44c5f0(eax_16, ebx_2, edi_1)
else
    void* ecx_4 = *(*(arg1 + 0x1f4) + 8)
    
    if (ecx_4 == 0)
        ebx_2 = var_a8
        edi_1 = var_ac
    else
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** 
            eax_15 = sub_4d61b0(ecx_4, &var_38)
        ebx_2 = var_a8
        edi_1 = var_ac
        
        if (eax_15 != 0)
            *ebx_2 = eax_15[0xa]
            *edi_1 = eax_15[0xb]
            (*eax_15)->vFunc_1(eax_2)

if (*(arg1 + 0x1d4) != 0 && *(arg1 + 0x1e0) == 0)
    sub_4e1d40(arg1 + 0x100, arg1 + 0x1c4, &var_ac, &var_a8, *(arg1 + 0x1e4), *(arg1 + 0x1e8))
    *ebx_2 += *(arg1 + 0x74) + var_ac
    int32_t* ecx_8 = *edi_1
    
    if (ecx_8 s< var_a8)
        ecx_8 = var_a8
    
    *edi_1 = ecx_8

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t result = result_1
int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0

if (result u>= 0x10)
    result = sub_403160(var_38.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_98)
return result
