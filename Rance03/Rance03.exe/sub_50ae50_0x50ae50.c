// 函数: sub_50ae50
// 地址: 0x50ae50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c183c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_bc
int32_t eax_2 = __security_cookie ^ &var_bc
int32_t __saved_edi
int32_t var_cc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 0
void* var_64
int32_t var_4c
int32_t* eax_7 =
    sub_410930(sub_410930(&ExceptionList, arg3, &var_64, ."), &var_64, &var_4c, 0x6e2570)
int32_t* edi = eax_7
var_c_1.b = 1
char var_94
int32_t* eax_8 = sub_410930(eax_7, &var_64, &var_94, 0x6e251c)
var_bc = eax_8
var_c_1.b = 2
char var_7c
int32_t* eax_9 = sub_410930(eax_8, &var_64, &var_7c, 0x6e2530)
var_c_1.b = 3
char var_ac
int32_t* eax_10 = sub_410930(eax_9, &var_64, &var_ac, 0x6e2544)
var_c_1.b = 4
int32_t* ecx_5 = *(arg2 + 4)
int32_t* var_b8

if (ecx_5 != 0)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    var_b8 = (*(*ecx_5 + 0x50))(edi, 3)
else
    var_b8 = ecx_5

int32_t* edx_5 = *(arg2 + 4)

if (edx_5 != 0)
    int32_t* ecx_6 = var_bc
    
    if (ecx_6[5] u>= 0x10)
        ecx_6 = *ecx_6
    
    var_bc = (*(*edx_5 + 0x50))(ecx_6, 2)
else
    var_bc = edx_5

int32_t* ecx_8 = *(arg2 + 4)
int32_t edi_1

if (ecx_8 != 0)
    int32_t* edx_6 = eax_9
    
    if (edx_6[5] u>= 0x10)
        edx_6 = *edx_6
    
    edi_1 = (*(*ecx_8 + 0x50))(edx_6, 1)
else
    edi_1 = 0

int32_t* ecx_9 = *(arg2 + 4)
int32_t eax_17

if (ecx_9 != 0)
    int32_t* edx_7 = eax_10
    
    if (edx_7[5] u>= 0x10)
        edx_7 = *edx_7
    
    eax_17 = (*(*ecx_9 + 0x50))(edx_7, 0)
else
    eax_17 = 0

int32_t* ecx_10 = var_bc

if (*(arg1 + 0x48) != eax_17 || *(arg1 + 0x4c) != edi_1 || *(arg1 + 0x50) != ecx_10
        || *(arg1 + 0x54) != var_b8)
    *(arg1 + 0x48) = eax_17
    *(arg1 + 0x4c) = edi_1
    *(arg1 + 0x50) = ecx_10
    *(arg1 + 0x54) = var_b8
    *(arg1 + 0x58) = 1

int32_t var_98

if (var_98 u>= 0x10)
    eax_17 = j__free(var_ac.d)

int32_t var_98_1 = 0xf
int32_t var_9c = 0
var_ac = 0
int32_t var_68

if (var_68 u>= 0x10)
    eax_17 = j__free(var_7c.d)

int32_t var_68_1 = 0xf
int32_t var_6c = 0
var_7c = 0
int32_t var_80

if (var_80 u>= 0x10)
    eax_17 = j__free(var_94.d)

var_c_1.b = 0
int32_t var_80_1 = 0xf
int32_t var_84 = 0
var_94 = 0
int32_t var_38

if (var_38 u>= 0x10)
    eax_17 = j__free(var_4c)

int32_t var_34
int32_t* eax_19 = sub_410930(eax_17, &var_64, &var_34, 0x6e2558)
int32_t* edi_2 = eax_19
var_c_1.b = 5
int32_t* eax_20 = sub_410930(eax_19, &var_64, &var_4c, 0x6e2500)
var_c_1.b = 6
int32_t* eax_21 = sub_410930(eax_20, &var_64, &var_ac, 0x6e2508)
var_c_1.b = 7
var_c_1.b = 8
int32_t* var_b8_1 = sub_401c90(arg2, &var_94, sub_410930(eax_21, &var_64, &var_7c, 0x6e2514))
var_c_1.b = 9
int32_t* ecx_16 = *(arg2 + 4)

if (ecx_16 != 0)
    if (edi_2[5] u>= 0x10)
        edi_2 = *edi_2
    
    var_bc = (*(*ecx_16 + 0x44))(edi_2)
else
    var_bc = ecx_16

int32_t* edx_13 = *(arg2 + 4)
int32_t edi_3

if (edx_13 != 0)
    int32_t* ecx_17 = eax_20
    
    if (ecx_17[5] u>= 0x10)
        ecx_17 = *ecx_17
    
    edi_3 = (*(*edx_13 + 0x44))(ecx_17)
else
    edi_3 = 0

int32_t* ecx_19 = *(arg2 + 4)
int32_t eax_28

if (ecx_19 != 0)
    int32_t* edx_14 = eax_21
    
    if (edx_14[5] u>= 0x10)
        edx_14 = *edx_14
    
    eax_28 = (*(*ecx_19 + 0x44))(edx_14)
else
    eax_28 = 0

void* ebx
ebx.b = sub_50a440(arg1, var_b8_1, eax_28, edi_3, var_bc) == 0

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

if (var_98_1 u>= 0x10)
    j__free(var_ac.d)

int32_t var_98_2 = 0xf
int32_t var_9c_1 = 0
var_ac = 0

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c.b = 0
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

ebx.b = ebx.b == 0
int32_t var_50

if (var_50 u>= 0x10)
    j__free(var_64)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_bc)
return ebx.b
