// 函数: __clearfp
// 地址: 0x71e0cd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool c0
bool c1
bool c2
bool c3
char var_8 = ((c0 ? 1 : 0) << 8).b | ((c1 ? 1 : 0) << 9).b | ((c2 ? 1 : 0) << 0xa).b
    | ((c3 ? 1 : 0) << 0xe).b
__fnclex()
int32_t result

if (data_7fc25c s< 1)
    result = 0
    
    if ((var_8 & 0x3f) != 0)
        if ((var_8 & 1) != 0)
            result = 0x10
        
        if ((var_8 & 4) != 0)
            result |= 8
        
        if ((var_8 & 8) != 0)
            result |= 4
        
        if ((var_8 & 0x10) != 0)
            result |= 2
        
        if ((var_8 & 0x20) != 0)
            result |= 1
        
        if ((var_8 & 2) != 0)
            return result | 0x80000
else
    int32_t ecx_1 = 0
    int32_t edx_1 = 0
    int32_t edi
    int32_t var_14_1 = edi
    
    if ((var_8 & 0x3f) != 0)
        if ((var_8 & 1) != 0)
            edx_1 = 0x10
        
        if ((var_8 & 4) != 0)
            edx_1 |= 8
        
        if ((var_8 & 8) != 0)
            edx_1 |= 4
        
        if ((var_8 & 0x10) != 0)
            edx_1 |= 2
        
        if ((var_8 & 0x20) != 0)
            edx_1 |= 1
        
        if ((var_8 & 2) != 0)
            edx_1 |= 0x80000
    
    int32_t var_10_1 = arg1 & 0xffffffc0
    char eax_3 = arg1.b
    
    if ((eax_3 & 0x3f) != 0)
        if ((eax_3 & 1) != 0)
            ecx_1 = 0x10
        
        if ((eax_3 & 4) != 0)
            ecx_1 |= 8
        
        if ((eax_3 & 8) != 0)
            ecx_1 |= 4
        
        if ((eax_3 & 0x10) != 0)
            ecx_1 |= 2
        
        if ((eax_3 & 0x20) != 0)
            ecx_1 |= 1
        
        if ((eax_3 & 2) != 0)
            ecx_1 |= 0x80000
    
    result = ecx_1 | edx_1

return result
