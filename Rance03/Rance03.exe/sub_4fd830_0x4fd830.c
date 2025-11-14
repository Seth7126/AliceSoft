// 函数: sub_4fd830
// 地址: 0x4fd830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c0d1e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 0
void* var_7c
int32_t var_34
int32_t* eax_7 = sub_410930(sub_410930(arg2, arg3, &var_7c, U".\"), &var_7c, &var_34, 0x6e20c0)
int32_t* edi = eax_7
var_c_1.b = 1
char var_94
int32_t* eax_8 = sub_410930(eax_7, &var_7c, &var_94, 0x6e20ac)
int32_t* ebx = eax_8
var_c_1.b = 2
char var_4c
int32_t* eax_9 = sub_410930(eax_8, &var_7c, &var_4c, 0x6e2098)
var_c_1.b = 3
char var_64
int32_t* eax_10 = sub_410930(eax_9, &var_7c, &var_64, 0x6e2100)
var_c_1.b = 4
int32_t* ecx_6 = *(arg2 + 4)

if (ecx_6 != 0)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    var_a4 = (*(*ecx_6 + 0x50))(edi, 3)
else
    var_a4 = ecx_6

int32_t* ecx_7 = *(arg2 + 4)
int32_t ebx_1

if (ecx_7 != 0)
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    ebx_1 = (*(*ecx_7 + 0x50))(ebx, 2)
else
    ebx_1 = 0

int32_t* ecx_8 = *(arg2 + 4)
int32_t edi_2

if (ecx_8 != 0)
    int32_t* edx_5 = eax_9
    
    if (edx_5[5] u>= 0x10)
        edx_5 = *edx_5
    
    edi_2 = (*(*ecx_8 + 0x50))(edx_5, 1)
else
    edi_2 = 0

int32_t* ecx_10 = *(arg2 + 4)
int32_t eax_17

if (ecx_10 != 0)
    int32_t* edx_6 = eax_10
    
    if (edx_6[5] u>= 0x10)
        edx_6 = *edx_6
    
    eax_17 = (*(*ecx_10 + 0x50))(edx_6, 0)
else
    eax_17 = 0

int32_t* ecx_11 = var_a4

if (*(arg1 + 0x38) != eax_17 || *(arg1 + 0x3c) != edi_2 || *(arg1 + 0x40) != ebx_1
        || *(arg1 + 0x44) != ecx_11)
    *(arg1 + 0x38) = eax_17
    *(arg1 + 0x3c) = edi_2
    *(arg1 + 0x40) = ebx_1
    *(arg1 + 0x44) = ecx_11
    *(arg1 + 0x48) = 1

int32_t var_50

if (var_50 u>= 0x10)
    eax_17 = j__free(var_64.d)

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
int32_t var_38

if (var_38 u>= 0x10)
    eax_17 = j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
int32_t var_80

if (var_80 u>= 0x10)
    eax_17 = j__free(var_94.d)

var_c_1.b = 0
int32_t var_80_1 = 0xf
int32_t var_84 = 0
var_94 = 0
int32_t var_20

if (var_20 u>= 0x10)
    eax_17 = j__free(var_34)

var_c_1.b = 5
var_c_1.b = 6
sub_4fd060(arg1, sub_401c90(arg2, &var_94, sub_410930(eax_17, &var_7c, &var_34, 0x6e20f8)))

if (var_80_1 u>= 0x10)
    j__free(var_94.d)

int32_t var_80_2 = 0xf
int32_t var_84_1 = 0
var_94 = 0

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t var_68

if (var_68 u>= 0x10)
    j__free(var_7c)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a4)
return result
