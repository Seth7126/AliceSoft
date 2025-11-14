// 函数: sub_505260
// 地址: 0x505260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c1411
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ac
int32_t eax_2 = __security_cookie ^ &var_ac
int32_t __saved_edi
int32_t var_bc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = arg3
int32_t var_c_1 = 0
void* var_7c
int32_t var_64
int32_t* eax_7 =
    sub_410930(sub_410930(&ExceptionList, arg4, &var_7c, ."), &var_7c, &var_64, 0x6e240c)
int32_t* edi = eax_7
var_c_1.b = 1
char var_94
int32_t* eax_8 = sub_410930(eax_7, &var_7c, &var_94, 0x6e23f8)
var_c_1.b = 2
char var_34
int32_t* eax_9 = sub_410930(eax_8, &var_7c, &var_34, 0x6e23e4)
var_c_1.b = 3
char var_4c
int32_t* eax_10 = sub_410930(eax_9, &var_7c, &var_4c, 0x6e243c)
var_c_1.b = 4
int32_t* ecx_5 = arg3[1]
int32_t* var_a0

if (ecx_5 != 0)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    var_a0 = (*(*ecx_5 + 0x50))(edi, 3)
else
    var_a0 = ecx_5

int32_t* edx_5 = arg3[1]
int32_t* var_a8_1

if (edx_5 != 0)
    int32_t* ecx_6 = eax_8
    
    if (ecx_6[5] u>= 0x10)
        ecx_6 = *ecx_6
    
    var_a8_1 = (*(*edx_5 + 0x50))(ecx_6, 2)
else
    var_a8_1 = edx_5

int32_t* ecx_8 = arg3[1]
int32_t edi_1

if (ecx_8 != 0)
    int32_t* edx_6 = eax_9
    
    if (edx_6[5] u>= 0x10)
        edx_6 = *edx_6
    
    edi_1 = (*(*ecx_8 + 0x50))(edx_6, 1)
else
    edi_1 = 0

int32_t* ecx_9 = arg3[1]
int32_t eax_17

if (ecx_9 != 0)
    int32_t* edx_7 = eax_10
    
    if (edx_7[5] u>= 0x10)
        edx_7 = *edx_7
    
    eax_17 = (*(*ecx_9 + 0x50))(edx_7, 0)
else
    eax_17 = 0

if (*(arg1 + 0x48) != eax_17 || *(arg1 + 0x4c) != edi_1 || *(arg1 + 0x50) != var_a8_1
        || *(arg1 + 0x54) != var_a0)
    *(arg1 + 0x48) = eax_17
    *(arg1 + 0x4c) = edi_1
    *(arg1 + 0x50) = var_a8_1
    *(arg1 + 0x54) = var_a0
    *(arg1 + 0x58) = 1

int32_t var_38

if (var_38 u>= 0x10)
    eax_17 = j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
int32_t var_20

if (var_20 u>= 0x10)
    eax_17 = j__free(var_34.d)

int32_t var_20_1 = 0xf
int32_t var_24 = 0
var_34 = 0
int32_t var_80

if (var_80 u>= 0x10)
    eax_17 = j__free(var_94.d)

var_c_1.b = 0
int32_t var_80_1 = 0xf
int32_t var_84 = 0
var_94 = 0
int32_t var_50

if (var_50 u>= 0x10)
    eax_17 = j__free(var_64)

var_c_1.b = 5
var_c_1.b = 6
int32_t* result =
    sub_504240(arg1, sub_401c90(arg3, &var_94, sub_410930(eax_17, &var_7c, &var_64, 0x6e2434)))
void** ebx
ebx.b = result.b == 0

if (var_80_1 u>= 0x10)
    result = j__free(var_94.d)

var_c_1.b = 0
int32_t var_80_2 = 0xf
int32_t var_84_1 = 0
var_94 = 0

if (var_50 u>= 0x10)
    result = j__free(var_64)

if (ebx.b == 0)
    int32_t* eax_21 = sub_410930(result, &var_7c, &var_64, 0x6e242c)
    ebx = eax_21
    var_c_1.b = 7
    int32_t* edi_2 = sub_410930(eax_21, &var_7c, &var_94, 0x6e2424)
    result = result_1
    int32_t xmm1_1 = (zx.o(0)).d
    var_c_1.b = 8
    int32_t* ecx_16 = result[1]
    float var_a8_2
    
    if (ecx_16 != 0)
        if (ebx[5] u>= 0x10)
            ebx = *ebx
        
        (*(*ecx_16 + 0x48))(ebx)
        result = result_1
        xmm1_1 = (zx.o(0)).d
        var_a8_2 = fconvert.s(arg2)
    else
        var_a8_2 = 0f
    
    int32_t* ecx_17 = result[1]
    
    if (ecx_17 != 0)
        if (edi_2[5] u>= 0x10)
            edi_2 = *edi_2
        
        (*(*ecx_17 + 0x48))(edi_2)
        int32_t var_a4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
        unimplemented  {fstp dword [esp+0x18], st0}
        xmm1_1 = var_a4_2
    
    float xmm0_2 = *(arg1 + 0x20)
    xmm0_2 f- xmm1_1
    result:1.b = (xmm0_2 f== xmm1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, xmm1_1) ? 1 : 0) << 2
        | (xmm0_2 f< xmm1_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (not(p_2))
        float xmm0_3 = *(arg1 + 0x24)
        xmm0_3 - var_a8_2
        result:1.b = (xmm0_3 == var_a8_2 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_3, var_a8_2) ? 1 : 0) << 2 | (xmm0_3 < var_a8_2 ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    if (p_2 || p_4)
        *(arg1 + 0x20) = xmm1_1
        *(arg1 + 0x24) = var_a8_2
        *(arg1 + 0x58) = 1
    
    if (var_80_2 u>= 0x10)
        j__free(var_94.d)
    
    int32_t var_80_3 = 0xf
    int32_t var_84_2 = 0
    var_94 = 0
    
    if (var_50 u>= 0x10)
        j__free(var_64)
    
    ebx.b = 1
else
    ebx.b = 0

int32_t var_68

if (var_68 u>= 0x10)
    j__free(var_7c)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ac)
return result
