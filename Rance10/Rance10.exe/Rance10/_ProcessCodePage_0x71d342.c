// 函数: _ProcessCodePage
// 地址: 0x71d342
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t edi
int32_t var_10 = edi

if (arg4 == 0)
label_71d409:
    
    if (___acrt_GetLocaleInfoEx@16(arg5 + 0x250, 0x20001004, &var_8, 2) != 0)
        int32_t eax_5 = var_8
        
        if (eax_5 == 0)
            return GetACP()
        
        return eax_5
else
    int32_t eax = 0
    
    if (*arg4 == 0)
        goto label_71d409
    
    void* const esi_1 = &data_7576d0
    int16_t* edx = arg4
    int32_t edx_2
    int32_t edi_1
    
    while (true)
        edi_1.w = *edx
        int16_t temp0_1 = *esi_1
        bool c_1 = edi_1.w u< temp0_1
        
        if (edi_1.w == temp0_1)
            if (edi_1.w == 0)
                edx_2 = 0
                break
            
            edi_1.w = edx[1]
            int16_t temp1_1 = *(esi_1 + 2)
            c_1 = edi_1.w u< temp1_1
            
            if (edi_1.w == temp1_1)
                edx = &edx[2]
                esi_1 += 4
                
                if (edi_1.w != 0)
                    continue
                
                edx_2 = 0
                break
        
        edx_2 = sbb.d(edx, edx, c_1) | 1
        break
    
    if (edx_2 == 0)
        goto label_71d409
    
    void* const esi_2 = &data_7576d8
    int16_t* edx_3 = arg4
    
    while (true)
        edi_1.w = *edx_3
        int16_t temp2_1 = *esi_2
        bool c_2 = edi_1.w u< temp2_1
        
        if (edi_1.w == temp2_1)
            if (edi_1.w == 0)
                break
            
            edi_1.w = edx_3[1]
            int16_t temp3_1 = *(esi_2 + 2)
            c_2 = edi_1.w u< temp3_1
            
            if (edi_1.w == temp3_1)
                edx_3 = &edx_3[2]
                esi_2 += 4
                
                if (edi_1.w == 0)
                    break
                
                continue
        
        eax = sbb.d(0, 0, c_2) | 1
        break
    
    if (eax != 0)
        return __wtoi64(eax, edx_3, arg4, arg4)
    
    if (___acrt_GetLocaleInfoEx@16(arg5 + 0x250, 0x2000000b, &var_8, 2) != 0)
        return var_8

return 0
