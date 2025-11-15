// 函数: sub_6afc40
// 地址: 0x6afc40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg3 + 0x298)

if (eax != 0)
    if (eax == 1)
        return sub_6ace40(arg3, arg4) __tailcall
    
    *(arg3 + 0x298) = eax - 1
    
    if (eax == 2)
        sub_6ace40(arg3, arg4)
        return sub_6a77d0(arg3, "no space in chunk cache") __tailcall

int32_t eax_4 = *(arg3 + 0x74)

if ((eax_4.b & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax_4.b & 4) != 0)
    *(arg3 + 0x74) = eax_4 | 8

char* edi = *(arg3 + 0x2b8)

if (edi == 0)
label_6afceb:
    
    if (arg4 == 0xffffffff)
        edi = nullptr
        sub_6a7780(arg3, "insufficient memory to read chunk")
    else
        int32_t eax_7 = *(arg3 + 0x274)
        char* eax_8
        
        if (eax_7 == 0)
            eax_8 = sub_705e22()
        else
            eax_8 = eax_7(arg3, arg4 + 1)
        
        edi = eax_8
        
        if (edi == 0)
            sub_6a7780(arg3, "insufficient memory to read chunk")
        else
            *(arg3 + 0x2b8) = edi
            *(arg3 + 0x2bc) = arg4 + 1
else if (arg4 + 1 u> *(arg3 + 0x2bc))
    int32_t eax_6 = *(arg3 + 0x278)
    *(arg3 + 0x2b8) = 0
    *(arg3 + 0x2bc) = 0
    
    if (eax_6 == 0)
        _free(edi)
    else
        eax_6(arg3, edi)
    
    goto label_6afceb

if (edi == 0)
    return sub_6a77d0(arg3, "out of memory") __tailcall

int32_t eax_10 = *(arg3 + 0x5c)

if (eax_10 == 0)
    sub_6a7500(arg3, "Call to NULL read function")
    noreturn

sub_6a4030(eax_10(arg3, edi, arg4), edi, arg3, arg4)
int32_t result = sub_6ace40(arg3, nullptr)

if (result == 0)
    void* edx_6 = edi + arg4
    *edx_6 = result.b
    char* eax_12 = edi
    
    if (*edi != 0)
        do
            eax_12 = &eax_12[1]
        while (*eax_12 != 0)
    
    int32_t var_1c = 0xffffffff
    char* ecx_8 = &eax_12[1]
    char* var_18_1 = edi
    
    if (eax_12 == edx_6)
        ecx_8 = eax_12
    
    int32_t var_8_1 = 0
    int32_t var_4_1 = 0
    int32_t var_c_1 = 0
    char* var_14_1 = ecx_8
    
    do
        eax_12.b = *ecx_8
        ecx_8 = &ecx_8[1]
    while (eax_12.b != 0)
    
    void* ecx_9 = ecx_8 - &ecx_8[1]
    void* var_34_4 = ecx_9
    void* var_10_1 = ecx_9
    result = sub_6b1fc0(&var_1c, arg2, arg3, &var_1c)
    
    if (result != 0)
        return sub_6a7530(arg3, "Insufficient memory to process text chunk") __tailcall

return result
