// 函数: sub_4db5d0
// 地址: 0x4db5d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
sub_4db510(arg1)
uint32_t arg_8
uint32_t ebp = arg_8
uint32_t arg_4
uint32_t esi = arg_4

if (ebp s>= 5)
    char* edx_1 = *(esi + 4)
    
    if (&edx_1[4] u<= *(esi + 8))
        uint32_t ecx_8 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(esi + 4) = &edx_1[4]
        arg_4 = ecx_8
        *(arg1 + 0x20) = arg_4
        
        if (sub_6c9300(esi, arg1 + 0x24) != 0)
            goto label_4db6a9
else
    char* ecx = *(esi + 4)
    arg_8 = 0
    
    if (&ecx[4] u<= *(esi + 8))
        uint32_t ebx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
        *(esi + 4) = &ecx[4]
        
        if (sub_61ec90(esi, &arg_8) != 0)
            *(arg1 + 0x20) = _mm_cvtepi32_ps(zx.o(ebx_7))
            *(arg1 + 0x24) = _mm_cvtepi32_ps(zx.o(arg_8))
        label_4db6a9:
            
            if (sub_6c9300(esi, arg1 + 0x28) != 0 && sub_6c9300(esi, arg1 + 0x2c) != 0
                    && sub_6c9300(esi, arg1 + 0x40) != 0 && sub_6c9300(esi, arg1 + 0x44) != 0
                    && sub_6c9300(esi, arg1 + 0x48) != 0)
                arg_4 = 0
                arg_8 = 0
                var_4 = 0
                
                if (sub_61ec90(esi, &arg_4) != 0 && sub_61ec90(esi, &arg_8) != 0
                        && sub_61ec90(esi, &var_4) != 0)
                    *(arg1 + 0x68) = arg_4
                    *(arg1 + 0x6c) = arg_8
                    *(arg1 + 0x70) = var_4
                    
                    if (sub_61ec90(esi, &arg_4) != 0 && sub_61ec90(esi, &arg_8) != 0
                            && sub_61ec90(esi, &var_4) != 0)
                        *(arg1 + 0x5c) = arg_4
                        *(arg1 + 0x60) = arg_8
                        *(arg1 + 0x64) = var_4
                        
                        if (sub_61ec90(esi, arg1 + 0x7c) != 0 && sub_61ec90(esi, arg1 + 0x30) != 0
                                && sub_61ec90(esi, arg1 + 0x34) != 0
                                && sub_61ec90(esi, arg1 + 0x38) != 0
                                && sub_61ec90(esi, arg1 + 0x3c) != 0)
                            arg_4 = 0
                            
                            if (sub_61ec90(esi, &arg_4) != 0)
                                *(arg1 + 0x74) = arg_4
                                
                                if (ebp s< 9)
                                    goto label_4db86c
                                
                                arg_4 = 0
                                
                                if (sub_61ec90(esi, &arg_4) != 0)
                                    *(arg1 + 0x78) = arg_4
                                label_4db86c:
                                    
                                    if (sub_61ec90(esi, arg1 + 0x4c) != 0
                                            && sub_61ec90(esi, arg1 + 0x50) != 0)
                                        if (ebp s< 8)
                                            goto label_4db8a4
                                        
                                        if (sub_61ec90(esi, &arg_4) != 0)
                                            *(arg1 + 0x54) = arg_4
                                        label_4db8a4:
                                            arg_4 = 0
                                            
                                            if (sub_61ec90(esi, &arg_4) != 0)
                                                bool cond:0_1 = arg_4 == 1
                                                arg_4 = 0
                                                *(arg1 + 0x58) = cond:0_1
                                                
                                                if (sub_61ec90(esi, &arg_4) != 0)
                                                    *(arg1 + 0x59) = arg_4 == 1
                                                    return true

return false
