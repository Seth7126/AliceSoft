// 函数: __setmbcp_nolock
// 地址: 0x71b65e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t CodePage = getSystemCP(arg1)
int32_t result

if (CodePage != 0)
    int32_t edi
    int32_t var_30_2 = edi
    void* i = nullptr
    int32_t ecx_2 = 0
    void* eax_2 = nullptr
    int32_t var_20_1 = 0
    
    while (true)
        if (*(eax_2 + 0x7e1818) == CodePage)
            _memset(arg2 + 0x18, 0, 0x101)
            void* eax_11 = var_20_1 * 0x30
            uint32_t j = eax_11 + 0x7e1828
            uint32_t j_1 = j
            
            do
                char* j_2 = j
                
                if (*j != 0)
                    do
                        j.b = j_2[1]
                        
                        if (j.b == 0)
                            break
                        
                        uint32_t edx_2 = zx.d(*j_2)
                        
                        for (j = zx.d(j.b); edx_2 u<= j; j = zx.d(j_2[1]))
                            if (edx_2 u>= 0x100)
                                break
                            
                            j.b = *(i + 0x7e1810)
                            *(arg2 + edx_2 + 0x19) |= j.b
                            edx_2 += 1
                        
                        j_2 = &j_2[2]
                    while (*j_2 != 0)
                    
                    j = j_1
                
                i += 1
                j += 8
                j_1 = j
            while (i u< 4)
            
            *(arg2 + 4) = CodePage
            *(arg2 + 8) = 1
            *(arg2 + 0x21c) = CPtoLocaleName(CodePage)
            void* ecx_3 = arg2 + 0xc
            int16_t* edx_3 = eax_11 + 0x7e181c
            int32_t i_5 = 6
            int32_t i_1
            
            do
                void* eax_13
                eax_13.w = *edx_3
                edx_3 = &edx_3[1]
                *ecx_3 = eax_13.w
                ecx_3 += 2
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        label_71b836:
            setSBUpLow(arg2)
            result = 0
            break
        
        ecx_2 += 1
        eax_2 += 0x30
        var_20_1 = ecx_2
        
        if (eax_2 u< 0xf0)
            continue
        else if (CodePage != 0xfde8 && CodePage != 0xfde9 && IsValidCodePage(zx.d(CodePage.w)) != 0)
            CPINFO cPInfo
            
            if (GetCPInfo(CodePage, &cPInfo) != 0)
                _memset(arg2 + 0x18, 0, 0x101)
                *(arg2 + 4) = CodePage
                *(arg2 + 0x21c) = 0
                
                if (cPInfo.MaxCharSize u<= 1)
                    *(arg2 + 8) = 0
                else
                    var_16
                    void* eax_7 = &var_16
                    
                    if (cPInfo.LeadByte[0] != 0)
                        do
                            uint32_t i_2
                            i_2.b = *(eax_7 + 1)
                            
                            if (i_2.b == 0)
                                break
                            
                            uint32_t edx_1 = zx.d(i_2.b)
                            
                            for (i_2 = zx.d(*eax_7); i_2 u<= edx_1; i_2 += 1)
                                *(arg2 + i_2 + 0x19) |= 4
                            
                            eax_7 += 2
                        while (*eax_7 != 0)
                    
                    void* eax_8 = arg2 + 0x1a
                    int32_t i_4 = 0xfe
                    int32_t i_3
                    
                    do
                        *eax_8 |= 8
                        eax_8 += 1
                        i_3 = i_4
                        i_4 -= 1
                    while (i_3 != 1)
                    *(arg2 + 0x21c) = CPtoLocaleName(*(arg2 + 4))
                    *(arg2 + 8) = 1
                
                *(arg2 + 0xc) = 0
                void* edi_2 = arg2 + 0x10
                *edi_2 = 0
                *(edi_2 + 4) = 0
                goto label_71b836
            
            if (data_7fcb04 != 0)
                setSBCS(arg2)
                result = 0
                break
        
        result = 0xffffffff
        break
else
    setSBCS(arg2)
    result = 0

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
