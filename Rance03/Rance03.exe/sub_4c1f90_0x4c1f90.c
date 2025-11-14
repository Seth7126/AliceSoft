// 函数: sub_4c1f90
// 地址: 0x4c1f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t ecx = arg2[4]
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t ebp = *(arg1 + 0xa8)

if (*(arg1 + 0xac) u< 0x10)
    var_20 = arg1 + 0x98
else
    var_20 = *(arg1 + 0x98)

int32_t eax_3 = ecx

if (ebp u< ecx)
    eax_3 = ebp

int32_t* result = sub_405190(eax_3, edx, var_20, eax_3)

if (result != 0)
label_4c2000:
    
    if (arg1 + 0x98 != arg2)
        result = sub_401ff0(arg1 + 0x98, arg2, 0, 0xffffffff)
    
    int32_t var_1c
    int32_t* eax_4 = sub_410930(result, arg2, &var_1c, 0x6e1374)
    
    if (arg1 + 0xb0 != eax_4)
        if (*(arg1 + 0xc4) u>= 0x10)
            j__free(*(arg1 + 0xb0))
        
        *(arg1 + 0xc4) = 0xf
        *(arg1 + 0xc0) = 0
        *(arg1 + 0xb0) = 0
        eax_4 = sub_4030b0(arg1 + 0xb0, eax_4)
    
    int32_t var_8
    
    if (var_8 u>= 0x10)
        eax_4 = j__free(var_1c)
    
    int32_t* eax_5 = sub_410930(eax_4, arg2, &var_1c, 0x6e1384)
    
    if (arg1 + 0xc8 != eax_5)
        if (*(arg1 + 0xdc) u>= 0x10)
            j__free(*(arg1 + 0xc8))
        
        *(arg1 + 0xdc) = 0xf
        *(arg1 + 0xd8) = 0
        *(arg1 + 0xc8) = 0
        eax_5 = sub_4030b0(arg1 + 0xc8, eax_5)
    
    if (var_8 u>= 0x10)
        eax_5 = j__free(var_1c)
    
    result = sub_410930(eax_5, arg2, &var_1c, 0x6e13bc)
    
    if (arg1 + 0xe0 != result)
        if (*(arg1 + 0xf4) u>= 0x10)
            j__free(*(arg1 + 0xe0))
        
        *(arg1 + 0xf4) = 0xf
        *(arg1 + 0xf0) = 0
        *(arg1 + 0xe0) = 0
        result = sub_4030b0(arg1 + 0xe0, result)
    
    if (var_8 u>= 0x10)
        result = j__free(var_1c)
    
    int32_t* ecx_10 = *(arg1 + 0x100)
    
    if (ecx_10 != 0)
        result = (**ecx_10)()
else
    int32_t ecx_2 = arg2[4]
    
    if (ebp u< ecx_2)
        goto label_4c2000
    
    result.b = ebp != ecx_2
    
    if (result != 0)
        goto label_4c2000

sub_69a5bc(eax_1 ^ &var_20)
return result
