// 函数: sub_49a530
// 地址: 0x49a530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t ecx = arg2[4]
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t ebp = *(arg1 + 0x108)

if (*(arg1 + 0x10c) u< 0x10)
    var_20 = arg1 + 0xf8
else
    var_20 = *(arg1 + 0xf8)

int32_t eax_3 = ecx

if (ebp u< ecx)
    eax_3 = ebp

int32_t* result = sub_405190(eax_3, edx, var_20, eax_3)

if (result != 0)
label_49a5a0:
    
    if (arg1 + 0xf8 != arg2)
        result = sub_401ff0(arg1 + 0xf8, arg2, 0, 0xffffffff)
    
    int32_t var_1c
    int32_t* eax_4 = sub_410930(result, arg2, &var_1c, 0x6e00fc)
    
    if (arg1 + 0x110 != eax_4)
        if (*(arg1 + 0x124) u>= 0x10)
            j__free(*(arg1 + 0x110))
        
        *(arg1 + 0x124) = 0xf
        *(arg1 + 0x120) = 0
        *(arg1 + 0x110) = 0
        eax_4 = sub_4030b0(arg1 + 0x110, eax_4)
    
    int32_t var_8
    
    if (var_8 u>= 0x10)
        eax_4 = j__free(var_1c)
    
    int32_t* eax_5 = sub_410930(eax_4, arg2, &var_1c, 0x6e0030)
    
    if (arg1 + 0x128 != eax_5)
        if (*(arg1 + 0x13c) u>= 0x10)
            j__free(*(arg1 + 0x128))
        
        *(arg1 + 0x13c) = 0xf
        *(arg1 + 0x138) = 0
        *(arg1 + 0x128) = 0
        eax_5 = sub_4030b0(arg1 + 0x128, eax_5)
    
    if (var_8 u>= 0x10)
        eax_5 = j__free(var_1c)
    
    int32_t* eax_6 = sub_410930(eax_5, arg2, &var_1c, 0x6e0024)
    
    if (arg1 + 0x140 != eax_6)
        if (*(arg1 + 0x154) u>= 0x10)
            j__free(*(arg1 + 0x140))
        
        *(arg1 + 0x154) = 0xf
        *(arg1 + 0x150) = 0
        *(arg1 + 0x140) = 0
        eax_6 = sub_4030b0(arg1 + 0x140, eax_6)
    
    if (var_8 u>= 0x10)
        eax_6 = j__free(var_1c)
    
    int32_t* eax_7 = sub_410930(eax_6, arg2, &var_1c, 0x6e004c)
    
    if (arg1 + 0x158 != eax_7)
        if (*(arg1 + 0x16c) u>= 0x10)
            j__free(*(arg1 + 0x158))
        
        *(arg1 + 0x16c) = 0xf
        *(arg1 + 0x168) = 0
        *(arg1 + 0x158) = 0
        eax_7 = sub_4030b0(arg1 + 0x158, eax_7)
    
    if (var_8 u>= 0x10)
        eax_7 = j__free(var_1c)
    
    int32_t* eax_8 = sub_410930(eax_7, arg2, &var_1c, 0x6e0038)
    
    if (arg1 + 0x170 != eax_8)
        if (*(arg1 + 0x184) u>= 0x10)
            j__free(*(arg1 + 0x170))
        
        *(arg1 + 0x184) = 0xf
        *(arg1 + 0x180) = 0
        *(arg1 + 0x170) = 0
        eax_8 = sub_4030b0(arg1 + 0x170, eax_8)
    
    if (var_8 u>= 0x10)
        eax_8 = j__free(var_1c)
    
    result = sub_410930(eax_8, arg2, &var_1c, 0x6e0074)
    
    if (arg1 + 0x188 != result)
        if (*(arg1 + 0x19c) u>= 0x10)
            j__free(*(arg1 + 0x188))
        
        *(arg1 + 0x19c) = 0xf
        *(arg1 + 0x198) = 0
        *(arg1 + 0x188) = 0
        result = sub_4030b0(arg1 + 0x188, result)
    
    if (var_8 u>= 0x10)
        result = j__free(var_1c)
    
    int32_t* ecx_16 = *(arg1 + 0x1c8)
    
    if (ecx_16 != 0)
        result = (**ecx_16)()
else
    int32_t ecx_2 = arg2[4]
    
    if (ebp u< ecx_2)
        goto label_49a5a0
    
    result.b = ebp != ecx_2
    
    if (result != 0)
        goto label_49a5a0

sub_69a5bc(eax_1 ^ &var_20)
return result
