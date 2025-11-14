// 函数: sub_4ad970
// 地址: 0x4ad970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bd180
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 0
int32_t var_4c
void* var_34
int32_t* ecx_2 =
    sub_410930(sub_410930(&ExceptionList, arg3, &var_34, ."), &var_34, &var_4c, 0x6e09e8)
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
*(arg1 + 4) = eax_8
int32_t var_38

if (var_38 u>= 0x10)
    eax_8 = j__free(var_4c)

int32_t* ecx_5 = sub_410930(eax_8, &var_34, &var_4c, 0x6e0a50)
var_c_1.b = 2
int32_t* edx_4 = *(arg2 + 4)
int32_t eax_11

if (edx_4 != 0)
    if (ecx_5[5] u>= 0x10)
        ecx_5 = *ecx_5
    
    eax_11 = (*(*edx_4 + 0x44))(ecx_5)
else
    eax_11 = 0

var_c_1.b = 0
eax_11.b = eax_11 == 1
*(arg1 + 8) = eax_11.b

if (var_38 u>= 0x10)
    eax_11 = j__free(var_4c)

int32_t* eax_13 = sub_410930(eax_11, &var_34, &var_4c, 0x6e0a60)
int32_t* ecx_8 = eax_13
var_c_1.b = 3
int32_t* edx_6 = *(arg2 + 4)
int32_t xmm0

if (edx_6 != 0)
    if (ecx_8[5] u>= 0x10)
        ecx_8 = *ecx_8
    
    eax_13 = (*(*edx_6 + 0x48))(ecx_8)
    long double x87_r0
    var_50 = fconvert.s(x87_r0)
    xmm0 = var_50
else
    xmm0 = (zx.o(0)).d

var_c_1.b = 0
*(arg1 + 0xc) = xmm0

if (var_38 u>= 0x10)
    eax_13 = j__free(var_4c)

int32_t* ecx_11 = sub_410930(eax_13, &var_34, &var_4c, 0x6e0a20)
var_c_1.b = 4
int32_t* edx_8 = *(arg2 + 4)
int32_t eax_17

if (edx_8 != 0)
    if (ecx_11[5] u>= 0x10)
        ecx_11 = *ecx_11
    
    eax_17 = (*(*edx_8 + 0x44))(ecx_11)
else
    eax_17 = 0

var_c_1.b = 0
eax_17.b = eax_17 == 1
*(arg1 + 8) = eax_17.b

if (var_38 u>= 0x10)
    eax_17 = j__free(var_4c)

int32_t* ecx_14 = sub_410930(eax_17, &var_34, &var_4c, 0x6e0a48)
var_c_1.b = 5
int32_t* edx_10 = *(arg2 + 4)
int32_t eax_20

if (edx_10 != 0)
    if (ecx_14[5] u>= 0x10)
        ecx_14 = *ecx_14
    
    eax_20 = (*(*edx_10 + 0x44))(ecx_14)
else
    eax_20 = 0

var_c_1.b = 0
*(arg1 + 0x14) = eax_20

if (var_38 u>= 0x10)
    eax_20 = j__free(var_4c)

int32_t* ecx_17 = sub_410930(eax_20, &var_34, &var_4c, 0x6e09cc)
var_c_1.b = 6
int32_t* edx_12 = *(arg2 + 4)
int32_t eax_23

if (edx_12 != 0)
    if (ecx_17[5] u>= 0x10)
        ecx_17 = *ecx_17
    
    eax_23 = (*(*edx_12 + 0x50))(ecx_17, 0)
else
    eax_23 = 0

var_c_1.b = 0
*(arg1 + 0x18) = eax_23

if (var_38 u>= 0x10)
    eax_23 = j__free(var_4c)

int32_t* ecx_20 = sub_410930(eax_23, &var_34, &var_4c, 0x6e09d8)
var_c_1.b = 7
int32_t* edx_14 = *(arg2 + 4)
int32_t eax_26

if (edx_14 != 0)
    if (ecx_20[5] u>= 0x10)
        ecx_20 = *ecx_20
    
    eax_26 = (*(*edx_14 + 0x50))(ecx_20, 1)
else
    eax_26 = 0

var_c_1.b = 0
*(arg1 + 0x1c) = eax_26

if (var_38 u>= 0x10)
    eax_26 = j__free(var_4c)

int32_t* ecx_23 = sub_410930(eax_26, &var_34, &var_4c, 0x6e09b4)
var_c_1.b = 8
int32_t* edx_16 = *(arg2 + 4)
int32_t eax_29

if (edx_16 != 0)
    if (ecx_23[5] u>= 0x10)
        ecx_23 = *ecx_23
    
    eax_29 = (*(*edx_16 + 0x50))(ecx_23, 2)
else
    eax_29 = 0

var_c_1.b = 0
*(arg1 + 0x20) = eax_29

if (var_38 u>= 0x10)
    eax_29 = j__free(var_4c)

int32_t* ecx_26 = sub_410930(eax_29, &var_34, &var_4c, 0x6e09c0)
var_c_1.b = 9
int32_t* edx_18 = *(arg2 + 4)
int32_t result

if (edx_18 != 0)
    if (ecx_26[5] u>= 0x10)
        ecx_26 = *ecx_26
    
    result = (*(*edx_18 + 0x50))(ecx_26, 3)
else
    result = 0

*(arg1 + 0x24) = result

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
