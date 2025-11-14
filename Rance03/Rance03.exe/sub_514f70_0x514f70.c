// 函数: sub_514f70
// 地址: 0x514f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2398
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_58
void* var_40
int32_t* ecx_2 =
    sub_410930(sub_410930(&ExceptionList, arg3, &var_40, ."), &var_40, &var_58, 0x6e2b4c)
var_4.b = 1
int32_t* edx_2 = *(arg2 + 4)
int32_t eax_8

if (edx_2 != 0)
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    eax_8 = (*(*edx_2 + 0x44))(ecx_2)
else
    eax_8 = 0

var_4.b = 0
*(arg1 + 8) = eax_8
int32_t var_44

if (var_44 u>= 0x10)
    eax_8 = j__free(var_58)

int32_t* ecx_5 = sub_410930(eax_8, &var_40, &var_58, 0x6e2c60)
var_4.b = 2
int32_t* edx_4 = *(arg2 + 4)
int32_t eax_11

if (edx_4 != 0)
    if (ecx_5[5] u>= 0x10)
        ecx_5 = *ecx_5
    
    eax_11 = (*(*edx_4 + 0x44))(ecx_5)
else
    eax_11 = 0

var_4.b = 0
*(arg1 + 0xc) = eax_11

if (var_44 u>= 0x10)
    eax_11 = j__free(var_58)

int32_t var_70
int32_t* eax_13 = sub_410930(eax_11, &var_40, &var_70, 0x6e2c70)
int32_t* ebx = eax_13
var_4.b = 3
int32_t* eax_14 = sub_410930(eax_13, &var_40, &var_58, 0x6e2c7c)
int32_t* ebp = eax_14
var_4.b = 4
char var_28
var_88 = sub_410930(eax_14, &var_40, &var_28, 0x6e2c88)
var_4.b = 5
int32_t* ecx_10 = *(arg2 + 4)
int32_t* var_84

if (ecx_10 != 0)
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    var_84 = (*(*ecx_10 + 0x50))(ebx, 2)
else
    var_84 = ecx_10

int32_t* ecx_11 = *(arg2 + 4)
int32_t ebx_1

if (ecx_11 != 0)
    if (ebp[5] u>= 0x10)
        ebp = *ebp
    
    ebx_1 = (*(*ecx_11 + 0x50))(ebp, 1)
else
    ebx_1 = 0

int32_t* edx_8 = *(arg2 + 4)
int32_t eax_20

if (edx_8 != 0)
    int32_t* ecx_12 = var_88
    
    if (ecx_12[5] u>= 0x10)
        ecx_12 = *ecx_12
    
    eax_20 = (*(*edx_8 + 0x50))(ecx_12, 0)
else
    eax_20 = 0

int32_t ecx_14 = 0
int32_t var_74 = 0xff

if (eax_20 s> 0)
    ecx_14 = eax_20

if (ecx_14 s> 0xff)
    ecx_14 = 0xff

int32_t eax_22 = 0

if (ebx_1 s> 0)
    eax_22 = ebx_1

if (eax_22 s> 0xff)
    eax_22 = 0xff

int32_t var_7c = eax_22
int32_t* eax_23 = nullptr

if (var_84 s> 0)
    eax_23 = var_84

if (eax_23 s> 0xff)
    eax_23 = 0xff

int32_t* var_78 = eax_23
*(arg1 + 0x10) = ecx_14.o
int32_t var_14

if (var_14 u>= 0x10)
    eax_23 = j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18 = 0
var_28 = 0

if (var_44 u>= 0x10)
    eax_23 = j__free(var_58)

var_4.b = 0
int32_t var_44_1 = 0xf
int32_t var_48 = 0
var_58.b = 0
int32_t var_5c

if (var_5c u>= 0x10)
    eax_23 = j__free(var_70)

int32_t* eax_24 = sub_410930(eax_23, &var_40, &var_70, 0x6e2c18)
int32_t* ecx_17 = eax_24
var_4.b = 6
int32_t* edx_10 = *(arg2 + 4)
int32_t* xmm0_1

if (edx_10 != 0)
    if (ecx_17[5] u>= 0x10)
        ecx_17 = *ecx_17
    
    eax_24 = (*(*edx_10 + 0x48))(ecx_17)
    long double x87_r0
    var_88 = fconvert.s(x87_r0)
    xmm0_1 = var_88
else
    xmm0_1 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x20) = xmm0_1

if (var_5c u>= 0x10)
    eax_24 = j__free(var_70)

int32_t* eax_27 = sub_410930(eax_24, &var_40, &var_70, 0x6e2c28)
int32_t* ecx_20 = eax_27
var_4.b = 7
int32_t* edx_12 = *(arg2 + 4)
int32_t* xmm0_2

if (edx_12 != 0)
    if (ecx_20[5] u>= 0x10)
        ecx_20 = *ecx_20
    
    eax_27 = (*(*edx_12 + 0x48))(ecx_20)
    var_88 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
    unimplemented  {fstp dword [esp+0x14], st0}
    xmm0_2 = var_88
else
    xmm0_2 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x24) = xmm0_2

if (var_5c u>= 0x10)
    eax_27 = j__free(var_70)

int32_t* eax_30 = sub_410930(eax_27, &var_40, &var_70, 0x6e2c38)
int32_t* ebx_2 = eax_30
var_4.b = 8
int32_t* eax_31 = sub_410930(eax_30, &var_40, &var_28, 0x6e2c4c)
int32_t* ebp_1 = eax_31
var_4.b = 9
var_88 = sub_410930(eax_31, &var_40, &var_58, 0x6e2bf4)
var_4.b = 0xa
int32_t* ecx_25 = *(arg2 + 4)
int32_t* var_84_1

if (ecx_25 != 0)
    if (ebx_2[5] u>= 0x10)
        ebx_2 = *ebx_2
    
    var_84_1 = (*(*ecx_25 + 0x50))(ebx_2, 2)
else
    var_84_1 = ecx_25

int32_t* ecx_26 = *(arg2 + 4)
int32_t ebx_3

if (ecx_26 != 0)
    if (ebp_1[5] u>= 0x10)
        ebp_1 = *ebp_1
    
    ebx_3 = (*(*ecx_26 + 0x50))(ebp_1, 1)
else
    ebx_3 = 0

int32_t* edx_16 = *(arg2 + 4)
int32_t eax_37

if (edx_16 != 0)
    int32_t* ecx_27 = var_88
    
    if (ecx_27[5] u>= 0x10)
        ecx_27 = *ecx_27
    
    eax_37 = (*(*edx_16 + 0x50))(ecx_27, 0)
else
    eax_37 = 0

int32_t ecx_29 = 0
int32_t var_74_1 = 0xff

if (eax_37 s> 0)
    ecx_29 = eax_37

if (ecx_29 s> 0xff)
    ecx_29 = 0xff

int32_t eax_39 = 0

if (ebx_3 s> 0)
    eax_39 = ebx_3

if (eax_39 s> 0xff)
    eax_39 = 0xff

int32_t var_7c_1 = eax_39
int32_t* eax_40 = nullptr

if (var_84_1 s> 0)
    eax_40 = var_84_1

if (eax_40 s> 0xff)
    eax_40 = 0xff

int32_t* var_78_1 = eax_40
*(arg1 + 0x28) = ecx_29.o

if (var_44_1 u>= 0x10)
    eax_40 = j__free(var_58)

int32_t var_44_2 = 0xf
int32_t var_48_1 = 0
var_58.b = 0

if (var_14_1 u>= 0x10)
    eax_40 = j__free(var_28.d)

var_4.b = 0
int32_t var_14_2 = 0xf
int32_t var_18_1 = 0
var_28 = 0

if (var_5c u>= 0x10)
    eax_40 = j__free(var_70)

int32_t* ecx_32 = sub_410930(eax_40, &var_40, &var_70, 0x6e2c08)
var_4.b = 0xb
int32_t* edx_18 = *(arg2 + 4)
int32_t eax_42

if (edx_18 != 0)
    if (ecx_32[5] u>= 0x10)
        ecx_32 = *ecx_32
    
    eax_42 = (*(*edx_18 + 0x44))(ecx_32)
else
    eax_42 = 0

var_4.b = 0
*(arg1 + 0x38) = eax_42

if (var_5c u>= 0x10)
    eax_42 = j__free(var_70)

int32_t* ecx_35 = sub_410930(eax_42, &var_40, &var_70, 0x6e2c10)
var_4.b = 0xc
int32_t* edx_20 = *(arg2 + 4)
int32_t result

if (edx_20 != 0)
    if (ecx_35[5] u>= 0x10)
        ecx_35 = *ecx_35
    
    result = (*(*edx_20 + 0x44))(ecx_35)
else
    result = 0

*(arg1 + 0x3c) = result

if (var_5c u>= 0x10)
    j__free(var_70)

int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_88)
return result
