// 函数: sub_4aaf10
// 地址: 0x4aaf10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bce40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[4]
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t ebp = *(arg1 + 0xe0)
int32_t* var_60

if (*(arg1 + 0xe4) u< 0x10)
    var_60 = arg1 + 0xd0
else
    var_60 = *(arg1 + 0xd0)

int32_t eax_6 = ecx

if (ebp u< ecx)
    eax_6 = ebp

int32_t* result = sub_405190(eax_6, edx, var_60, eax_6)
bool cond:2 = result == 0

if (result == 0)
    int32_t ecx_2 = arg2[4]
    
    if (ebp u>= ecx_2)
        result.b = ebp != ecx_2
    else
        result = 0xffffffff
    
    cond:2 = result == 0

result.b = cond:2

if (result.b == 0)
    if (arg1 + 0xd0 != arg2)
        result = sub_401ff0(arg1 + 0xd0, arg2, 0, 0xffffffff)
    
    int32_t var_44
    int32_t* eax_7 = sub_410930(result, arg2, &var_44, 0x6e0800)
    int32_t var_4 = 0
    char var_5c
    char* eax_8 = sub_410ad0(eax_7, eax_7, &var_5c, arg1 + 4)
    
    if (arg1 + 0xe8 != eax_8)
        if (*(arg1 + 0xfc) u>= 0x10)
            j__free(*(arg1 + 0xe8))
        
        *(arg1 + 0xfc) = 0xf
        *(arg1 + 0xf8) = 0
        *(arg1 + 0xe8) = 0
        eax_8 = sub_4030b0(arg1 + 0xe8, eax_8)
    
    int32_t var_48
    
    if (var_48 u>= 0x10)
        eax_8 = j__free(var_5c.d)
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        eax_8 = j__free(var_44)
    
    int32_t* eax_9 = sub_410930(eax_8, arg2, &var_44, 0x6e0824)
    int32_t var_4_2 = 1
    char* eax_10 = sub_410ad0(eax_9, eax_9, &var_5c, arg1 + 0x1c)
    
    if (arg1 + 0x100 != eax_10)
        if (*(arg1 + 0x114) u>= 0x10)
            j__free(*(arg1 + 0x100))
        
        *(arg1 + 0x114) = 0xf
        *(arg1 + 0x110) = 0
        *(arg1 + 0x100) = 0
        eax_10 = sub_4030b0(arg1 + 0x100, eax_10)
    
    if (var_48_1 u>= 0x10)
        eax_10 = j__free(var_5c.d)
    
    int32_t var_4_3 = 0xffffffff
    int32_t var_48_2 = 0xf
    int32_t var_4c_2 = 0
    var_5c = 0
    
    if (var_30 u>= 0x10)
        eax_10 = j__free(var_44)
    
    int32_t* eax_11 = sub_410930(eax_10, arg2, &var_44, 0x6e0828)
    
    if (arg1 + 0x118 != eax_11)
        if (*(arg1 + 0x12c) u>= 0x10)
            j__free(*(arg1 + 0x118))
        
        *(arg1 + 0x12c) = 0xf
        *(arg1 + 0x128) = 0
        *(arg1 + 0x118) = 0
        eax_11 = sub_4030b0(arg1 + 0x118, eax_11)
    
    if (var_30 u>= 0x10)
        eax_11 = j__free(var_44)
    
    char var_2c
    result = sub_410930(eax_11, arg2, &var_2c, 0x6e0810)
    
    if (arg1 + 0x130 != result)
        if (*(arg1 + 0x144) u>= 0x10)
            j__free(*(arg1 + 0x130))
        
        *(arg1 + 0x144) = 0xf
        *(arg1 + 0x140) = 0
        *(arg1 + 0x130) = 0
        result = sub_4030b0(arg1 + 0x130, result)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        result = j__free(var_2c.d)
    
    int32_t* ecx_16 = *(arg1 + 0x148)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (ecx_16 != 0)
        result = (**ecx_16)(eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
