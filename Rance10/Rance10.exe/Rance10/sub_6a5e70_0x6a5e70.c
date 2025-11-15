// 函数: sub_6a5e70
// 地址: 0x6a5e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_e8
int32_t eax_1 = __security_cookie ^ &var_e8
uint32_t ebx = 0
int32_t var_e0 = 0
uint32_t edx = 0x10000
int32_t var_e4 = 0
var_e8 = 0x10000
void* const edi = &data_774270
int32_t result

while (true)
    if ((((((zx.d(arg2[0x54]) << 8) + zx.d(arg2[0x55])) << 8) + zx.d(arg2[0x56])) << 8)
            + zx.d(arg2[0x57]) == *(edi - 4)
            && (((((zx.d(arg2[0x58]) << 8) + zx.d(arg2[0x59])) << 8) + zx.d(arg2[0x5a])) << 8)
            + zx.d(arg2[0x5b]) == *edi
            && (((((zx.d(arg2[0x5c]) << 8) + zx.d(arg2[0x5d])) << 8) + zx.d(arg2[0x5e])) << 8)
            + zx.d(arg2[0x5f]) == *(edi + 4)
            && (((((zx.d(arg2[0x60]) << 8) + zx.d(arg2[0x61])) << 8) + zx.d(arg2[0x62])) << 8)
            + zx.d(arg2[0x63]) == *(edi + 8))
        if (ebx == 0)
            ebx =
                (((((zx.d(*arg2) << 8) + zx.d(arg2[1])) << 8) + zx.d(arg2[2])) << 8) + zx.d(arg2[3])
            edx = (((((zx.d(arg2[0x40]) << 8) + zx.d(arg2[0x41])) << 8) + zx.d(arg2[0x42])) << 8)
                + zx.d(arg2[0x43])
            var_e8 = edx
        
        if (ebx == *(edi - 8) && edx == zx.d(*(edi + 0xe)))
            void* eax_21 = arg4
            
            if (eax_21 == 0)
                void* eax_22 = sub_69d9c0(eax_21, nullptr, 0, eax_21)
                eax_21 = sub_69d9c0(eax_22, arg2, eax_22, ebx)
                arg4 = eax_21
            
            if (eax_21 == *(edi - 0x10))
                int32_t eax_23 = var_e0
                
                if (eax_23 == 0)
                    int32_t var_fc_2 = eax_23
                    int32_t eax_24 = sub_69dc20(0, nullptr)
                    eax_23 = sub_69dc30(eax_24, arg2, eax_24, ebx)
                    var_e0 = eax_23
                
                if (eax_23 == *(edi - 0xc))
                    int32_t edi_2 = var_e4 << 5
                    
                    if (*(edi_2 + 0x77427d) != 0)
                        char* edx_9 = "known incorrect sRGB profile"
                        
                        if ((*(arg3 + 0x74) & 0x8000) == 0)
                            if ((*(arg3 + 0x78) & &__dos_header) == 0)
                                sub_6a7500(arg3, edx_9)
                                noreturn
                            
                            sub_6a7530(arg3, edx_9)
                            result = zx.d(*(edi_2 + 0x77427d)) + 1
                        else
                            sub_6a77d0(arg3, "known incorrect sRGB profile")
                            result = zx.d(*(edi_2 + 0x77427d)) + 1
                    else if (*(edi_2 + 0x77427c) != 0)
                        result = zx.d(*(edi_2 + 0x77427d)) + 1
                    else if ((*(arg3 + 0x74) & 0x8000) == 0)
                        if ((*(arg3 + 0x78) & 0x200000) == 0)
                            sub_6a7500(arg3, "out-of-date sRGB profile with no signature")
                            noreturn
                        
                        sub_6a7530(arg3, "out-of-date sRGB profile with no signature")
                        result = zx.d(*(edi_2 + 0x77427d)) + 1
                    else
                        void var_dc
                        sub_6a7650(eax_23, &var_dc, arg3, 
                            "out-of-date sRGB profile with no signature")
                        sub_6a7530(arg3, &var_dc)
                        result = zx.d(*(edi_2 + 0x77427d)) + 1
                    
                    break
        
        if (*(edi + 0xc) != 0)
            sub_6a75b0(arg3, "copyright violation: edited ICC profile ignored")
        
        edx = var_e8
    
    edi += 0x20
    int32_t eax_26 = var_e4 + 1
    var_e4 = eax_26
    
    if (eax_26 u>= 7)
        result = 0
        break

@__security_check_cookie@4(eax_1 ^ &var_e8)
return result
