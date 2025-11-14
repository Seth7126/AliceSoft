// 函数: sub_513860
// 地址: 0x513860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c21be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 0
int32_t var_94
void* var_7c
int32_t* ecx_2 =
    sub_410930(sub_410930(&ExceptionList, arg3, &var_7c, ."), &var_7c, &var_94, 0x6e2ab0)
var_c_1.b = 1
int32_t* edx_2 = *(arg2 + 4)
int32_t eax_8

if (edx_2 != 0)
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    eax_8 = (*(*edx_2 + 0x44))(ecx_2)
else
    eax_8 = 0

var_c_1.b = 0
eax_8.b = eax_8 == 1
*(arg1 + 0x3c) = eax_8.b
int32_t var_80

if (var_80 u>= 0x10)
    eax_8 = j__free(var_94)

int32_t* eax_10 = sub_410930(eax_8, &var_7c, &var_94, 0x6e2abc)
int32_t* ecx_5 = eax_10
var_c_1.b = 2
int32_t* edx_4 = *(arg2 + 4)
int32_t result_3

if (edx_4 != 0)
    if (ecx_5[5] u>= 0x10)
        ecx_5 = *ecx_5
    
    eax_10 = (*(*edx_4 + 0x54))(ecx_5, 0)
    long double x87_r0
    result_1 = fconvert.s(x87_r0)
    result_3 = result_1
else
    result_3 = (zx.o(0)).d

var_c_1.b = 0
*(arg1 + 8) = result_3

if (var_80 u>= 0x10)
    eax_10 = j__free(var_94)

int32_t* eax_13 = sub_410930(eax_10, &var_7c, &var_94, 0x6e2ac4)
int32_t* ecx_8 = eax_13
var_c_1.b = 3
int32_t* edx_6 = *(arg2 + 4)
int32_t result_4

if (edx_6 != 0)
    if (ecx_8[5] u>= 0x10)
        ecx_8 = *ecx_8
    
    eax_13 = (*(*edx_6 + 0x54))(ecx_8, 1)
    result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    result_4 = result_1
else
    result_4 = (zx.o(0)).d

var_c_1.b = 0
*(arg1 + 0xc) = result_4

if (var_80 u>= 0x10)
    eax_13 = j__free(var_94)

int32_t* eax_16 = sub_410930(eax_13, &var_7c, &var_94, 0x6e2acc)
int32_t* ecx_11 = eax_16
var_c_1.b = 4
int32_t* edx_8 = *(arg2 + 4)
int32_t result_5

if (edx_8 != 0)
    if (ecx_11[5] u>= 0x10)
        ecx_11 = *ecx_11
    
    eax_16 = (*(*edx_8 + 0x54))(ecx_11, 0)
    result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    result_5 = result_1
else
    result_5 = (zx.o(0)).d

var_c_1.b = 0
*(arg1 + 0x10) = result_5

if (var_80 u>= 0x10)
    eax_16 = j__free(var_94)

int32_t* eax_19 = sub_410930(eax_16, &var_7c, &var_94, 0x6e2a90)
int32_t* ecx_14 = eax_19
var_c_1.b = 5
int32_t* edx_10 = *(arg2 + 4)
int32_t result_6

if (edx_10 != 0)
    if (ecx_14[5] u>= 0x10)
        ecx_14 = *ecx_14
    
    eax_19 = (*(*edx_10 + 0x54))(ecx_14, 1)
    result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    result_6 = result_1
else
    result_6 = (zx.o(0)).d

var_c_1.b = 0
*(arg1 + 0x14) = result_6

if (var_80 u>= 0x10)
    eax_19 = j__free(var_94)

int32_t* eax_22 = sub_410930(eax_19, &var_7c, &var_94, 0x6e2a98)
int32_t* ecx_17 = eax_22
var_c_1.b = 6
int32_t* edx_12 = *(arg2 + 4)
int32_t result_7

if (edx_12 != 0)
    if (ecx_17[5] u>= 0x10)
        ecx_17 = *ecx_17
    
    eax_22 = (*(*edx_12 + 0x54))(ecx_17, 0)
    result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    result_7 = result_1
else
    result_7 = (zx.o(0)).d

var_c_1.b = 0
*(arg1 + 0x18) = result_7

if (var_80 u>= 0x10)
    eax_22 = j__free(var_94)

int32_t* eax_25 = sub_410930(eax_22, &var_7c, &var_94, 0x6e2aa0)
int32_t* ecx_20 = eax_25
var_c_1.b = 7
int32_t* edx_14 = *(arg2 + 4)
int32_t result_8

if (edx_14 != 0)
    if (ecx_20[5] u>= 0x10)
        ecx_20 = *ecx_20
    
    eax_25 = (*(*edx_14 + 0x54))(ecx_20, 1)
    result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    result_8 = result_1
else
    result_8 = (zx.o(0)).d

var_c_1.b = 0
*(arg1 + 0x1c) = result_8

if (var_80 u>= 0x10)
    eax_25 = j__free(var_94)

int32_t* eax_28 = sub_410930(eax_25, &var_7c, &var_94, 0x6e2aa8)
int32_t* ecx_23 = eax_28
var_c_1.b = 8
int32_t* edx_16 = *(arg2 + 4)
int32_t result_9

if (edx_16 != 0)
    if (ecx_23[5] u>= 0x10)
        ecx_23 = *ecx_23
    
    eax_28 = (*(*edx_16 + 0x54))(ecx_23, 0)
    result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    result_9 = result_1
else
    result_9 = (zx.o(0)).d

var_c_1.b = 0
*(arg1 + 0x20) = result_9

if (var_80 u>= 0x10)
    eax_28 = j__free(var_94)

int32_t* eax_31 = sub_410930(eax_28, &var_7c, &var_94, 0x6e2a4c)
int32_t* ecx_26 = eax_31
var_c_1.b = 9
int32_t* edx_18 = *(arg2 + 4)
int32_t result_10

if (edx_18 != 0)
    if (ecx_26[5] u>= 0x10)
        ecx_26 = *ecx_26
    
    eax_31 = (*(*edx_18 + 0x54))(ecx_26, 1)
    result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    result_10 = result_1
else
    result_10 = (zx.o(0)).d

var_c_1.b = 0
*(arg1 + 0x24) = result_10

if (var_80 u>= 0x10)
    eax_31 = j__free(var_94)

int32_t var_34
int32_t* eax_34 = sub_410930(eax_31, &var_7c, &var_34, 0x6e2a54)
int32_t* ebx = eax_34
var_c_1.b = 0xa
int32_t* eax_35 = sub_410930(eax_34, &var_7c, &var_94, 0x6e2a68)
var_c_1.b = 0xb
char var_4c
int32_t* eax_36 = sub_410930(eax_35, &var_7c, &var_4c, 0x6e2a7c)
var_c_1.b = 0xc
char var_64
int32_t* eax_37 = sub_410930(eax_36, &var_7c, &var_64, 0x6e2b14)
var_c_1.b = 0xd
int32_t result_2 = *(arg2 + 4)

if (result_2 != 0)
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    result_1 = (*(*result_2 + 0x50))(ebx, 3)
else
    result_1 = result_2

int32_t* edx_23 = *(arg2 + 4)
int32_t* var_a0_1

if (edx_23 != 0)
    int32_t* ecx_32 = eax_35
    
    if (ecx_32[5] u>= 0x10)
        ecx_32 = *ecx_32
    
    var_a0_1 = (*(*edx_23 + 0x50))(ecx_32, 2)
else
    var_a0_1 = edx_23

int32_t* ecx_34 = *(arg2 + 4)
int32_t ebx_1

if (ecx_34 != 0)
    int32_t* edx_24 = eax_36
    
    if (edx_24[5] u>= 0x10)
        edx_24 = *edx_24
    
    ebx_1 = (*(*ecx_34 + 0x50))(edx_24, 1)
else
    ebx_1 = 0

int32_t* ecx_35 = *(arg2 + 4)
int32_t eax_44

if (ecx_35 != 0)
    int32_t* edx_25 = eax_37
    
    if (edx_25[5] u>= 0x10)
        edx_25 = *edx_25
    
    eax_44 = (*(*ecx_35 + 0x50))(edx_25, 0)
else
    eax_44 = 0

*(arg1 + 0x2c) = eax_44
*(arg1 + 0x34) = var_a0_1
int32_t result = result_1
*(arg1 + 0x30) = ebx_1
*(arg1 + 0x38) = result
int32_t var_50

if (var_50 u>= 0x10)
    j__free(var_64.d)

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0

if (var_80 u>= 0x10)
    j__free(var_94)

int32_t var_80_1 = 0xf
int32_t var_84 = 0
var_94.b = 0
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t var_68

if (var_68 u>= 0x10)
    j__free(var_7c)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
