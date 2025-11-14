// 函数: sub_496150
// 地址: 0x496150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t edx = arg2[4]
int32_t* var_28

if (arg2[5] u< 0x10)
    var_28 = arg2
else
    var_28 = *arg2

int32_t ecx = *(arg1 + 0x60)

if (*(arg1 + 0x64) u< 0x10)
    var_2c = arg1 + 0x50
else
    var_2c = *(arg1 + 0x50)

int32_t eax_4 = edx

if (ecx u< edx)
    eax_4 = ecx

int32_t* result = sub_405190(eax_4, var_28, var_2c, eax_4)

if (result != 0)
label_4961ce:
    
    if (arg1 + 0x50 != arg2)
        result = sub_401ff0(arg1 + 0x50, arg2, 0, 0xffffffff)
    
    int32_t var_24
    int32_t* eax_5 = sub_410930(result, arg2, &var_24, 0x6dfdd4)
    var_2c = eax_5
    
    if (arg1 + 0x68 != eax_5)
        if (*(arg1 + 0x7c) u>= 0x10)
            j__free(*(arg1 + 0x68))
            eax_5 = var_2c
        
        *(arg1 + 0x7c) = 0xf
        *(arg1 + 0x78) = 0
        *(arg1 + 0x68) = 0
        eax_5 = sub_4030b0(arg1 + 0x68, eax_5)
    
    int32_t var_10
    
    if (var_10 u>= 0x10)
        eax_5 = j__free(var_24)
    
    int32_t* eax_6 = sub_410930(eax_5, arg2, &var_24, 0x6dfde8)
    var_2c = eax_6
    
    if (arg1 + 0x80 != eax_6)
        if (*(arg1 + 0x94) u>= 0x10)
            j__free(*(arg1 + 0x80))
            eax_6 = var_2c
        
        *(arg1 + 0x94) = 0xf
        *(arg1 + 0x90) = 0
        *(arg1 + 0x80) = 0
        eax_6 = sub_4030b0(arg1 + 0x80, eax_6)
    
    if (var_10 u>= 0x10)
        eax_6 = j__free(var_24)
    
    int32_t* eax_7 = sub_410930(eax_6, arg2, &var_24, 0x6dfddc)
    var_2c = eax_7
    
    if (arg1 + 0x98 != eax_7)
        if (*(arg1 + 0xac) u>= 0x10)
            j__free(*(arg1 + 0x98))
            eax_7 = var_2c
        
        *(arg1 + 0xac) = 0xf
        *(arg1 + 0xa8) = 0
        *(arg1 + 0x98) = 0
        eax_7 = sub_4030b0(arg1 + 0x98, eax_7)
    
    if (var_10 u>= 0x10)
        eax_7 = j__free(var_24)
    
    result = sub_410930(eax_7, arg2, &var_24, 0x6dfdf8)
    
    if (arg1 + 0xb0 != result)
        if (*(arg1 + 0xc4) u>= 0x10)
            j__free(*(arg1 + 0xb0))
        
        *(arg1 + 0xc4) = 0xf
        *(arg1 + 0xc0) = 0
        *(arg1 + 0xb0) = 0
        result = sub_4030b0(arg1 + 0xb0, result)
    
    if (var_10 u>= 0x10)
        result = j__free(var_24)
    
    int32_t* ecx_12 = *(arg1 + 0x174)
    
    if (ecx_12 != 0)
        result = (**ecx_12)()
else
    int32_t ecx_2 = *(arg1 + 0x60)
    int32_t edx_2 = arg2[4]
    
    if (ecx_2 u< edx_2)
        goto label_4961ce
    
    result.b = ecx_2 != edx_2
    
    if (result != 0)
        goto label_4961ce

sub_69a5bc(eax_1 ^ &var_2c)
return result
