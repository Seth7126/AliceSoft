// 函数: __tolower_l
// 地址: 0x6abd2b
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_1c
sub_69beb0(&var_1c, arg2)
void* var_14
char var_10

if (arg1 u>= 0x100)
    char var_8
    int32_t ecx_5
    
    if (*(var_1c + 0x74) s<= 1)
    label_6abde7:
        ecx_5 = 1
        *__errno() = 0x2a
        var_8 = arg1.b
        char var_7_2 = 0
    else
        int32_t eax_7 = arg1 s>> 8
        
        if (sub_6a774d(eax_7.b, &var_1c) == 0)
            goto label_6abde7
        
        var_8 = eax_7.b
        char var_7_1 = arg1.b
        char var_6_1 = 0
        ecx_5 = 2
    
    void* eax_12 = var_1c
    char var_c
    int32_t eax_13 =
        sub_6a799c(&var_1c, *(eax_12 + 0xa8), 0x100, &var_8, ecx_5, &var_c, 3, *(eax_12 + 4), 1)
    
    if (eax_13 != 0)
        if (eax_13 != 1)
            char var_b
            uint32_t edx_3 = zx.d(var_c) << 8 | zx.d(var_b)
            
            if (var_10 != 0)
                *(var_14 + 0x70) &= 0xfffffffd
            
            return edx_3
        
        uint32_t eax_15 = zx.d(var_c)
        
        if (var_10 != 0)
            *(var_14 + 0x70) &= 0xfffffffd
        
        return eax_15
    
    if (var_10 != eax_13.b)
        *(var_14 + 0x70) &= 0xfffffffd
else
    void* ecx_1 = var_1c
    int32_t eax
    
    if (*(ecx_1 + 0x74) s<= 1)
        eax = zx.d(*(*(ecx_1 + 0x90) + (arg1 << 1))) & 1
    else
        eax = __isctype_l(arg1, 1, &var_1c)
        ecx_1 = var_1c
    
    if (eax != 0)
        uint32_t ecx_2 = zx.d(*(*(ecx_1 + 0x94) + arg1))
        
        if (var_10 != 0)
            *(var_14 + 0x70) &= 0xfffffffd
        
        return ecx_2
    
    if (var_10 != 0)
        *(var_14 + 0x70) &= 0xfffffffd
return arg1
