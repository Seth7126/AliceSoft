// 函数: ??R<lambda_e378711a6f6581bf7f0efd7cdf97f5d9>@@QBEXXZ
// 地址: 0x7115ed
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__copytlocinfo_nolock(**arg1, *(*arg1[1] + 0x4c))
int16_t* eax_6 = __wsetlocale_nolock(**arg1, *arg1[3], *arg1[4])
*arg1[2] = eax_6
void* eax_17

if (eax_6 == 0)
    ___acrt_release_locale_ref(**arg1)
    eax_17 = ___acrt_free_locale(**arg1)
else
    int16_t* eax_8 = *arg1[4]
    
    if (eax_8 != 0)
        void* edx_1 = &data_7e1800
        int32_t edi
        int32_t var_8_1 = edi
        int32_t eax_10
        
        while (true)
            int32_t edi_1
            edi_1.w = *eax_8
            int16_t temp1_1 = *edx_1
            bool c_1 = edi_1.w u< temp1_1
            
            if (edi_1.w == temp1_1)
                if (edi_1.w == 0)
                    eax_10 = 0
                    break
                
                edi_1.w = eax_8[1]
                int16_t temp2_1 = *(edx_1 + 2)
                c_1 = edi_1.w u< temp2_1
                
                if (edi_1.w == temp2_1)
                    eax_8 = &eax_8[2]
                    edx_1 += 4
                    
                    if (edi_1.w != 0)
                        continue
                    
                    eax_10 = 0
                    break
            
            eax_10 = sbb.d(eax_8, eax_8, c_1) | 1
            break
        
        if (eax_10 != 0)
            data_7fc704
            data_7fc704 = 1
    
    __updatetlocinfoEx_nolock(*arg1[1] + 0x4c, **arg1)
    ___acrt_release_locale_ref(**arg1)
    eax_17 = *arg1[1]
    
    if ((*(eax_17 + 0x350) & 2) == 0 && (data_7e180c.b & 1) == 0)
        __updatetlocinfoEx_nolock(&data_7fcacc, *(eax_17 + 0x4c))
        int32_t* eax_18 = data_7fcacc
        data_7e1548 = eax_18[0x22]
        data_7e1550 = *eax_18
        int32_t eax_19 = eax_18[1]
        data_7e1738 = eax_19
        return eax_19

return eax_17
