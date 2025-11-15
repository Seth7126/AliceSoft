// 函数: sub_6afe20
// 地址: 0x6afe20
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

void* ebp = *(arg3 + 0x2b8)

if (ebp == 0)
label_6afec7:
    
    if (arg4 == 0)
        sub_6ace40(arg3, arg4)
        return sub_6a77d0(arg3, "out of memory") __tailcall
    
    int32_t eax_7 = *(arg3 + 0x274)
    void* eax_8
    
    if (eax_7 == 0)
        eax_8 = sub_705e22()
    else
        eax_8 = eax_7(arg3, arg4)
    
    ebp = eax_8
    
    if (ebp == 0)
        sub_6ace40(arg3, arg4)
        return sub_6a77d0(arg3, "out of memory") __tailcall
    
    *(arg3 + 0x2b8) = ebp
    *(arg3 + 0x2bc) = arg4
else if (arg4 u> *(arg3 + 0x2bc))
    int32_t eax_6 = *(arg3 + 0x278)
    *(arg3 + 0x2b8) = 0
    *(arg3 + 0x2bc) = 0
    
    if (eax_6 == 0)
        _free(ebp)
    else
        eax_6(arg3, ebp)
    
    goto label_6afec7

int32_t eax_9 = *(arg3 + 0x5c)

if (eax_9 == 0)
    sub_6a7500(arg3, "Call to NULL read function")
    noreturn

sub_6a4030(eax_9(arg3, ebp, arg4), ebp, arg3, arg4)
void* result
int32_t ecx_5
result, ecx_5 = sub_6ace40(arg3, nullptr)

if (result == 0)
    char* edi_1 = nullptr
    
    if (arg4 != 0)
        while (*(edi_1 + ebp) != 0)
            edi_1 = &edi_1[1]
            
            if (edi_1 u>= arg4)
                break
    
    if (arg4 == 0 || edi_1 u> 0x4f || edi_1 u< 1)
        return sub_6a77d0(arg3, "bad keyword") __tailcall
    
    if (&edi_1[3] u> arg4)
        return sub_6a77d0(arg3, "truncated") __tailcall
    
    if (*(edi_1 + ebp + 1) != 0)
        return sub_6a77d0(arg3, "unknown compression type") __tailcall
    
    int32_t var_38_4 = ecx_5
    void* var_24 = 0xffffffff
    result = sub_6ad240(&edi_1[2], arg4, arg3, &edi_1[2], &var_24)
    
    if (result != 1)
        char* edx_11 = *(arg3 + 0x9c)
        
        if (edx_11 != 0)
            return sub_6a77d0(arg3, edx_11) __tailcall
    else
        void* ecx_11 = *(arg3 + 0x2b8)
        void* edx_8 = var_24
        void* var_38_5 = ecx_11
        void* var_18_1 = ecx_11
        void* var_10_1 = edx_8
        int32_t var_1c = 0
        *(edx_8 + edi_1 + ecx_11 + 2) = 0
        int32_t var_c_1 = 0
        void* var_14_1 = ecx_11 + 2 + edi_1
        int32_t var_8_1 = 0
        int32_t var_4_1 = 0
        result = sub_6b1fc0(&var_1c, arg2, arg3, &var_1c)
        
        if (result != 0)
            return sub_6a77d0(arg3, "insufficient memory") __tailcall

return result
