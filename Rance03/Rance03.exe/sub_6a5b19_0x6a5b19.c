// 函数: sub_6a5b19
// 地址: 0x6a5b19
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
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
    char var_108[0x100]
    uint32_t i_1
    
    for (i_1 = 0; i_1 u< 0x100; i_1 += 1)
        var_108[i_1] = i_1.b
    
    i_1.b = cPInfo.LeadByte[0]
    var_516
    void* ecx = &var_516
    var_108[0] = 0x20
    
    while (i_1.b != 0)
        uint32_t edx_1 = zx.d(*(ecx + 1))
        
        for (i_1 = zx.d(i_1.b); i_1 u<= edx_1; i_1 += 1)
            if (i_1 u>= 0x100)
                break
            
            var_108[i_1] = 0x20
        
        ecx += 2
        i_1.b = *ecx
    
    uint16_t var_508[0x100]
    ___crtGetStringTypeA(nullptr, 1, &var_108, 0x100, &var_508, *(arg1 + 4), 0)
    char var_208[0x100]
    sub_6a799c(nullptr, *(arg1 + 0x21c), 0x100, &var_108, 0x100, &var_208, 0x100, *(arg1 + 4), 0)
    char var_308[0x100]
    sub_6a799c(nullptr, *(arg1 + 0x21c), 0x200, &var_108, 0x100, &var_308, 0x100, *(arg1 + 4), 0)
    
    for (int32_t i_2 = 0; i_2 u< 0x100; i_2 += 1)
        result = zx.d(var_508[i_2])
        
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

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
