// 函数: ?setSBUpLow@@YAXPAU__crt_multibyte_data@@@Z
// 地址: 0x71b309
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_730 = edi
CPINFO cPInfo
uint32_t result

if (GetCPInfo(*(arg1 + 4), &cPInfo) == 0)
    void* edx_2 = arg1 + 0x119
    int32_t i = 0
    result = 0xffffff9f - edx_2
    uint32_t result_1 = result
    
    do
        void* edx_3 = edx_2 + i
        void* eax_3 = result + edx_3
        
        if (eax_3 + 0x20 u<= 0x19)
            *(arg1 + i + 0x19) |= 0x10
            *edx_3 = i.b + 0x20
        else if (eax_3 u> 0x19)
            *edx_3 = 0
        else
            void* eax_6 = arg1 + i
            *(eax_6 + 0x19) |= 0x20
            *edx_3 = i.b - 0x20
        
        result = result_1
        edx_2 = arg1 + 0x119
        i += 1
    while (i u< 0x100)
else
    uint8_t var_108[0x100]
    uint32_t i_1
    
    for (i_1 = 0; i_1 u< 0x100; i_1 += 1)
        var_108[i_1] = i_1.b
    
    i_1.b = cPInfo.LeadByte[0]
    var_716
    void* ecx = &var_716
    var_108[0] = 0x20
    
    while (i_1.b != 0)
        uint32_t edx_1 = zx.d(*(ecx + 1))
        
        for (i_1 = zx.d(i_1.b); i_1 u<= edx_1; i_1 += 1)
            if (i_1 u>= 0x100)
                break
            
            var_108[i_1] = 0x20
        
        ecx += 2
        i_1.b = *ecx
    
    uint16_t var_708[0x200]
    ___acrt_GetStringTypeA(nullptr, 1, &var_108, 0x100, &var_708, *(arg1 + 4), 0)
    char var_208[0x100]
    ___acrt_LCMapStringA(nullptr, *(arg1 + 0x21c), 0x100, &var_108, 0x100, &var_208, 0x100, 
        *(arg1 + 4), 0)
    char var_308[0x100]
    ___acrt_LCMapStringA(nullptr, *(arg1 + 0x21c), 0x200, &var_108, 0x100, &var_308, 0x100, 
        *(arg1 + 4), 0)
    
    for (int32_t i_2 = 0; i_2 u< 0x100; i_2 += 1)
        result = zx.d(var_708[i_2])
        
        if ((result.b & 1) != 0)
            *(arg1 + i_2 + 0x19) |= 0x10
            result.b = var_208[i_2]
            *(arg1 + i_2 + 0x119) = result.b
        else if ((result.b & 2) == 0)
            *(arg1 + i_2 + 0x119) = 0
        else
            *(arg1 + i_2 + 0x19) |= 0x20
            result.b = var_308[i_2]
            *(arg1 + i_2 + 0x119) = result.b

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
