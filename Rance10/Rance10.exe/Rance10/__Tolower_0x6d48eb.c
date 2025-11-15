// 函数: __Tolower
// 地址: 0x6d48eb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax_1
int32_t* ecx
int32_t edi

if (arg2 != 0)
    edi = arg2[3]
    eax_1 = *arg2
else
    void* eax
    void* ecx_1
    eax, ecx_1 = ____lc_locale_name_func(ecx)
    edi = *(eax + 8)
    eax_1, ecx = ____lc_codepage_func(ecx_1)

uint32_t eax_2

if (edi != 0)
    int32_t eax_9
    char edx_1
    
    if (arg1 u>= 0x100)
    label_6d4952:
        
        if (arg2 != 0)
            edx_1 = (arg1 s>> 8).b
            eax_9 = sx.d(*(arg2[1] + (zx.d(edx_1) << 1))) u>> 0xf & 1
        else
            edx_1 = (arg1 s>> 8).b
            eax_9 = zx.d(*(___pctype_func(ecx) + (zx.d(edx_1) << 1))) & 0x8000
    else
        if (arg2 != 0)
            if ((*(arg2[1] + (arg1 << 1)) & 1) == 0)
                return arg1
            
            goto label_6d4952
        
        int32_t* var_28_1 = arg1
        
        if (_isupper(var_28_1) == 0)
            return arg1
        
        edx_1 = (arg1 s>> 8).b
        eax_9 = zx.d(*(___pctype_func(var_28_1) + (zx.d(edx_1) << 1))) & 0x8000
    
    uint8_t var_18
    char* eax_13
    
    if (eax_9 == 0)
        var_18 = arg1.b
        char var_17_2 = 0
        eax_13 = 1
    else
        var_18 = edx_1
        char var_17_1 = arg1.b
        char var_16_1 = 0
        eax_13 = 2
    
    char var_8
    int32_t eax_14 = ___crtLCMapStringA(edi, 0x100, &var_18, eax_13, &var_8, 3, eax_1, 1)
    
    if (eax_14 == 0)
        return arg1
    
    eax_2 = zx.d(var_8)
    char var_7
    
    if (eax_14 != 1)
        return eax_2 << 8 | zx.d(var_7)
else
    eax_2 = arg1
    
    if (eax_2 - 0x41 u<= 0x19)
        return eax_2 + 0x20

return eax_2
