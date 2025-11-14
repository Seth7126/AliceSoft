// 函数: sub_4e52e0
// 地址: 0x4e52e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c05c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 0
void* var_4c
int32_t var_34
int32_t* ecx_2 =
    sub_410930(sub_410930(sub_4e4b30(arg1), arg3, &var_4c, .\"), &var_4c, &var_34, 0x6e1e68)
var_c_1.b = 1
int32_t* edx_2 = *(arg2 + 4)
int32_t eax_8

if (edx_2 != 0)
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    eax_8 = (*(*edx_2 + 0x44))(ecx_2)
else
    eax_8 = 0

bool cond:0 = eax_8 == 1
var_c_1.b = 0
int32_t var_20

if (var_20 u>= 0x10)
    eax_8 = j__free(var_34)

var_c_1.b = 2
int32_t var_64
char* eax_11 = sub_401c90(arg2, &var_34, sub_410930(eax_8, &var_4c, &var_64, 0x6e1ea8))

if (&arg1[0xb] != eax_11)
    if (arg1[0x10] u>= 0x10)
        j__free(arg1[0xb])
    
    arg1[0x10] = 0xf
    arg1[0xf] = 0
    arg1[0xb].b = 0
    eax_11 = sub_4030b0(&arg1[0xb], eax_11)

if (var_20 u>= 0x10)
    eax_11 = j__free(var_34)

var_c_1.b = 0
int32_t var_20_1 = 0xf
int32_t var_24 = 0
var_34.b = 0
int32_t var_50

if (var_50 u>= 0x10)
    eax_11 = j__free(var_64)

int32_t* ecx_8 = sub_410930(eax_11, &var_4c, &var_64, 0x6e1e98)
var_c_1.b = 3
int32_t* edx_5 = *(arg2 + 4)
int32_t eax_13

if (edx_5 != 0)
    if (ecx_8[5] u>= 0x10)
        ecx_8 = *ecx_8
    
    eax_13 = (*(*edx_5 + 0x44))(ecx_8)
else
    eax_13 = 0

var_c_1.b = 0
arg1[0x12] = eax_13

if (var_50 u>= 0x10)
    eax_13 = j__free(var_64)

int32_t* ecx_11 = sub_410930(eax_13, &var_4c, &var_64, 0x6e1e84)
var_c_1.b = 4
int32_t* edx_7 = *(arg2 + 4)
int32_t eax_16

if (edx_7 != 0)
    if (ecx_11[5] u>= 0x10)
        ecx_11 = *ecx_11
    
    eax_16 = (*(*edx_7 + 0x44))(ecx_11)
else
    eax_16 = 0

var_c_1.b = 0
arg1[0x13] = eax_16

if (var_50 u>= 0x10)
    eax_16 = j__free(var_64)

int32_t* ecx_14 = sub_410930(eax_16, &var_4c, &var_64, 0x6e1e80)
var_c_1.b = 5
int32_t* edx_9 = *(arg2 + 4)
int32_t eax_19

if (edx_9 != 0)
    if (ecx_14[5] u>= 0x10)
        ecx_14 = *ecx_14
    
    eax_19 = (*(*edx_9 + 0x50))(ecx_14, 0)
else
    eax_19 = 0

var_c_1.b = 0
arg1[0x14] = eax_19

if (var_50 u>= 0x10)
    eax_19 = j__free(var_64)

int32_t* ecx_17 = sub_410930(eax_19, &var_4c, &var_64, 0x6e1ee4)
var_c_1.b = 6
int32_t* edx_11 = *(arg2 + 4)
int32_t eax_22

if (edx_11 != 0)
    if (ecx_17[5] u>= 0x10)
        ecx_17 = *ecx_17
    
    eax_22 = (*(*edx_11 + 0x50))(ecx_17, 1)
else
    eax_22 = 0

var_c_1.b = 0
arg1[0x15] = eax_22

if (var_50 u>= 0x10)
    eax_22 = j__free(var_64)

int32_t* ecx_20 = sub_410930(eax_22, &var_4c, &var_64, 0x6e1ee0)
var_c_1.b = 7
int32_t* edx_13 = *(arg2 + 4)
int32_t eax_25

if (edx_13 != 0)
    if (ecx_20[5] u>= 0x10)
        ecx_20 = *ecx_20
    
    eax_25 = (*(*edx_13 + 0x50))(ecx_20, 2)
else
    eax_25 = 0

var_c_1.b = 0
arg1[0x16] = eax_25

if (var_50 u>= 0x10)
    eax_25 = j__free(var_64)

struct _EXCEPTION_REGISTRATION_RECORD** ecx_23 = sub_410930(eax_25, &var_4c, &var_64, 0x6e1ed4)
var_c_1.b = 8
int32_t* edx_15 = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** esi_3

if (edx_15 != 0)
    if (ecx_23[5] u>= 0x10)
        ecx_23 = *ecx_23
    
    esi_3 = (*(*edx_15 + 0x44))(ecx_23)
else
    esi_3 = nullptr

var_c_1.b = 0

if (var_50 u>= 0x10)
    j__free(var_64)

int32_t* ebx_1

if (cond:0 != 0)
    if (sub_4e48e0(arg1, &arg1[0xb], arg1[0x12], arg1[0x13], arg1[0x14], arg1[0x15], arg1[0x16]).b
            == 0)
        ebx_1.b = 0
    else
        void* ecx_26 = arg1[0x11]
        
        if (ecx_26 == 0)
            ebx_1.b = 0
        else if (sub_442e10(ecx_26).b == 0)
            ebx_1.b = 0
        else
            if (esi_3 s> 0)
                int32_t* ecx_27 = arg1[0x11]
                
                if (ecx_27 != 0)
                    sub_443090(ecx_27, esi_3)
            
            arg1[0x17].b = 1
            ebx_1.b = 1
else
    arg1[0x17].b = 1
    ebx_1.b = 1

int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
