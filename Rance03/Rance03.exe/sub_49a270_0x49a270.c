// 函数: sub_49a270
// 地址: 0x49a270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t ecx = arg2[4]
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t ebp = *(arg1 + 0x60)

if (*(arg1 + 0x64) u< 0x10)
    var_20 = arg1 + 0x50
else
    var_20 = *(arg1 + 0x50)

int32_t eax_3 = ecx

if (ebp u< ecx)
    eax_3 = ebp

int32_t* result = sub_405190(eax_3, edx, var_20, eax_3)

if (result != 0)
label_49a2dd:
    
    if (arg1 + 0x50 != arg2)
        result = sub_401ff0(arg1 + 0x50, arg2, 0, 0xffffffff)
    
    int32_t var_1c
    int32_t* eax_4 = sub_410930(result, arg2, &var_1c, 0x6e00b8)
    
    if (arg1 + 0x68 != eax_4)
        if (*(arg1 + 0x7c) u>= 0x10)
            j__free(*(arg1 + 0x68))
        
        *(arg1 + 0x7c) = 0xf
        *(arg1 + 0x78) = 0
        *(arg1 + 0x68) = 0
        eax_4 = sub_4030b0(arg1 + 0x68, eax_4)
    
    int32_t var_8
    
    if (var_8 u>= 0x10)
        eax_4 = j__free(var_1c)
    
    int32_t* eax_5 = sub_410930(eax_4, arg2, &var_1c, 0x6e00cc)
    
    if (arg1 + 0x80 != eax_5)
        if (*(arg1 + 0x94) u>= 0x10)
            j__free(*(arg1 + 0x80))
        
        *(arg1 + 0x94) = 0xf
        *(arg1 + 0x90) = 0
        *(arg1 + 0x80) = 0
        eax_5 = sub_4030b0(arg1 + 0x80, eax_5)
    
    if (var_8 u>= 0x10)
        eax_5 = j__free(var_1c)
    
    int32_t* eax_6 = sub_410930(eax_5, arg2, &var_1c, 0x6e00c0)
    
    if (arg1 + 0x98 != eax_6)
        if (*(arg1 + 0xac) u>= 0x10)
            j__free(*(arg1 + 0x98))
        
        *(arg1 + 0xac) = 0xf
        *(arg1 + 0xa8) = 0
        *(arg1 + 0x98) = 0
        eax_6 = sub_4030b0(arg1 + 0x98, eax_6)
    
    if (var_8 u>= 0x10)
        eax_6 = j__free(var_1c)
    
    int32_t* eax_7 = sub_410930(eax_6, arg2, &var_1c, 0x6e00e8)
    
    if (arg1 + 0xb0 != eax_7)
        if (*(arg1 + 0xc4) u>= 0x10)
            j__free(*(arg1 + 0xb0))
        
        *(arg1 + 0xc4) = 0xf
        *(arg1 + 0xc0) = 0
        *(arg1 + 0xb0) = 0
        eax_7 = sub_4030b0(arg1 + 0xb0, eax_7)
    
    if (var_8 u>= 0x10)
        eax_7 = j__free(var_1c)
    
    int32_t* eax_8 = sub_410930(eax_7, arg2, &var_1c, 0x6e00d4)
    
    if (arg1 + 0xc8 != eax_8)
        if (*(arg1 + 0xdc) u>= 0x10)
            j__free(*(arg1 + 0xc8))
        
        *(arg1 + 0xdc) = 0xf
        *(arg1 + 0xd8) = 0
        *(arg1 + 0xc8) = 0
        eax_8 = sub_4030b0(arg1 + 0xc8, eax_8)
    
    if (var_8 u>= 0x10)
        eax_8 = j__free(var_1c)
    
    result = sub_410930(eax_8, arg2, &var_1c, 0x6e0104)
    
    if (arg1 + 0xe0 != result)
        if (*(arg1 + 0xf4) u>= 0x10)
            j__free(*(arg1 + 0xe0))
        
        *(arg1 + 0xf4) = 0xf
        *(arg1 + 0xf0) = 0
        *(arg1 + 0xe0) = 0
        result = sub_4030b0(arg1 + 0xe0, result)
    
    if (var_8 u>= 0x10)
        result = j__free(var_1c)
    
    int32_t* ecx_16 = *(arg1 + 0x1c8)
    
    if (ecx_16 != 0)
        result = (**ecx_16)()
else
    int32_t ecx_2 = arg2[4]
    
    if (ebp u< ecx_2)
        goto label_49a2dd
    
    result.b = ebp != ecx_2
    
    if (result != 0)
        goto label_49a2dd

sub_69a5bc(eax_1 ^ &var_20)
return result
