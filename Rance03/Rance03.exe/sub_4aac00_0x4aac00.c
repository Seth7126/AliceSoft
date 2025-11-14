// 函数: sub_4aac00
// 地址: 0x4aac00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bce00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg2[4]
int32_t* var_68

if (arg2[5] u< 0x10)
    var_68 = arg2
else
    var_68 = *arg2

int32_t ecx = *(arg1 + 0x68)

if (*(arg1 + 0x6c) u< 0x10)
    var_6c = arg1 + 0x58
else
    var_6c = *(arg1 + 0x58)

int32_t eax_7 = edx

if (ecx u< edx)
    eax_7 = ecx

int32_t* result = sub_405190(eax_7, var_68, var_6c, eax_7)
bool cond:2 = result == 0

if (result == 0)
    int32_t ecx_2 = *(arg1 + 0x68)
    int32_t edx_2 = arg2[4]
    
    if (ecx_2 u>= edx_2)
        result.b = ecx_2 != edx_2
    else
        result = 0xffffffff
    
    cond:2 = result == 0

result.b = cond:2

if (result.b == 0)
    if (arg1 + 0x58 != arg2)
        result = sub_401ff0(arg1 + 0x58, arg2, 0, 0xffffffff)
    
    int32_t var_4c
    int32_t* eax_8 = sub_410930(result, arg2, &var_4c, 0x6e0760)
    int32_t var_c_1 = 0
    char var_64
    char* eax_9 = sub_410ad0(eax_8, eax_8, &var_64, arg1 + 4)
    var_6c = eax_9
    
    if (arg1 + 0x70 != eax_9)
        if (*(arg1 + 0x84) u>= 0x10)
            j__free(*(arg1 + 0x70))
            eax_9 = var_6c
        
        *(arg1 + 0x84) = 0xf
        *(arg1 + 0x80) = 0
        *(arg1 + 0x70) = 0
        eax_9 = sub_4030b0(arg1 + 0x70, eax_9)
    
    int32_t var_50
    
    if (var_50 u>= 0x10)
        eax_9 = j__free(var_64.d)
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_38
    
    if (var_38 u>= 0x10)
        eax_9 = j__free(var_4c)
    
    int32_t* eax_10 = sub_410930(eax_9, arg2, &var_4c, 0x6e0804)
    int32_t var_c_3 = 1
    int32_t* eax_11 = sub_410ad0(eax_10, eax_10, &var_64, arg1 + 0x1c)
    var_6c = eax_11
    
    if (arg1 + 0x88 != eax_11)
        if (*(arg1 + 0x9c) u>= 0x10)
            j__free(*(arg1 + 0x88))
            eax_11 = var_6c
        
        *(arg1 + 0x9c) = 0xf
        *(arg1 + 0x98) = 0
        *(arg1 + 0x88) = 0
        eax_11 = sub_4030b0(arg1 + 0x88, eax_11)
    
    if (var_50_1 u>= 0x10)
        eax_11 = j__free(var_64.d)
    
    int32_t var_c_4 = 0xffffffff
    int32_t var_50_2 = 0xf
    int32_t var_54_2 = 0
    var_64 = 0
    
    if (var_38 u>= 0x10)
        eax_11 = j__free(var_4c)
    
    int32_t* eax_12 = sub_410930(eax_11, arg2, &var_4c, 0x6e0808)
    var_6c = eax_12
    
    if (arg1 + 0xa0 != eax_12)
        if (*(arg1 + 0xb4) u>= 0x10)
            j__free(*(arg1 + 0xa0))
            eax_12 = var_6c
        
        *(arg1 + 0xb4) = 0xf
        *(arg1 + 0xb0) = 0
        *(arg1 + 0xa0) = 0
        eax_12 = sub_4030b0(arg1 + 0xa0, eax_12)
    
    if (var_38 u>= 0x10)
        eax_12 = j__free(var_4c)
    
    char var_34
    result = sub_410930(eax_12, arg2, &var_34, 0x6e07f8)
    
    if (arg1 + 0xb8 != result)
        if (*(arg1 + 0xcc) u>= 0x10)
            j__free(*(arg1 + 0xb8))
        
        *(arg1 + 0xcc) = 0xf
        *(arg1 + 0xc8) = 0
        *(arg1 + 0xb8) = 0
        result = sub_4030b0(arg1 + 0xb8, result)
    
    int32_t var_20
    
    if (var_20 u>= 0x10)
        result = j__free(var_34.d)
    
    int32_t* ecx_16 = *(arg1 + 0x148)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    var_34 = 0
    
    if (ecx_16 != 0)
        result = (**ecx_16)(eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
