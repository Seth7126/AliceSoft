// 函数: sub_10007ad5
// 地址: 0x10007ad5
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_30 = edi
uint32_t CodePage = sub_10007a59(arg1)
arg1 = CodePage
int32_t result

if (CodePage != 0)
    int32_t var_20_1 = 0
    void* eax_4 = nullptr
    
    while (true)
        if (*(eax_4 + 0x10020978) == CodePage)
            sub_10003d40(arg2 + 0x1c, 0, 0x101)
            void* ecx_3 = var_20_1 * 0x30
            void* var_24_1 = nullptr
            void* esi_2 = ecx_3 + 0x10020988
            void* var_20_2 = esi_2
            
            while (true)
                if (*esi_2 != 0)
                    char* eax_10
                    eax_10.b = *(esi_2 + 1)
                    
                    if (eax_10.b != 0)
                        uint32_t i = zx.d(*esi_2)
                        
                        for (eax_10 = zx.d(eax_10.b); i u<= eax_10; i += 1)
                            void* eax_11
                            eax_11.b = *(var_24_1 + 0x10020974)
                            *(arg2 + i + 0x1d) |= eax_11.b
                            eax_10 = zx.d(*(esi_2 + 1))
                        
                        CodePage = arg1
                        esi_2 += 2
                        continue
                
                var_24_1 += 1
                esi_2 = var_20_2 + 8
                var_20_2 = esi_2
                
                if (var_24_1 u>= 4)
                    break
            
            *(arg2 + 4) = CodePage
            *(arg2 + 8) = 1
            *(arg2 + 0xc) = sub_1000778f(CodePage)
            void* eax_14 = arg2 + 0x10
            int16_t* ecx_4 = ecx_3 + 0x1002097c
            int32_t i_5 = 6
            int32_t i_1
            
            do
                esi_2.w = *ecx_4
                *eax_14 = esi_2.w
                ecx_4 = &ecx_4[1]
                eax_14 += 2
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            goto label_10007c46
        
        var_20_1 += 1
        eax_4 += 0x30
        
        if (eax_4 u>= 0xf0)
            break
    
    if (CodePage == 0xfde8 || CodePage == 0xfde9)
        result = 0xffffffff
    else
        CPINFO cPInfo
        
        if (IsValidCodePage(zx.d(CodePage.w)) == 0)
            result = 0xffffffff
        else if (GetCPInfo(CodePage, &cPInfo) != 0)
            sub_10003d40(arg2 + 0x1c, 0, 0x101)
            *(arg2 + 4) = CodePage
            *(arg2 + 0xc) = 0
            
            if (cPInfo.MaxCharSize u<= 1)
                *(arg2 + 8) = 0
            else
                if (cPInfo.LeadByte[0] != 0)
                    var_15
                    void* esi_1 = &var_15
                    
                    do
                        uint32_t ecx_1
                        ecx_1.b = *esi_1
                        
                        if (ecx_1.b == 0)
                            break
                        
                        for (uint32_t i_2 = zx.d(*(esi_1 - 1)); i_2 u<= zx.d(ecx_1.b); i_2 += 1)
                            *(arg2 + i_2 + 0x1d) |= 4
                        
                        esi_1 += 2
                    while (*(esi_1 - 1) != 0)
                
                void* eax_16 = arg2 + 0x1e
                int32_t i_4 = 0xfe
                int32_t i_3
                
                do
                    *eax_16 |= 8
                    eax_16 += 1
                    i_3 = i_4
                    i_4 -= 1
                while (i_3 != 1)
                *(arg2 + 0xc) = sub_1000778f(*(arg2 + 4))
                *(arg2 + 8) = 1
            
            *(arg2 + 0x10) = 0
            void* edi_2 = arg2 + 0x14
            *edi_2 = 0
            *(edi_2 + 4) = 0
        label_10007c46:
            sub_10007822(arg2)
            result = 0
        else if (data_1002237c != 0)
            sub_100077be(arg2)
            result = 0
        else
            result = 0xffffffff
else
    sub_100077be(arg2)
    result = 0

sub_10001d19(eax_1 ^ &__saved_ebp)
return result
