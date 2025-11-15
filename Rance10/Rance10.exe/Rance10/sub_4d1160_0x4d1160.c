// 函数: sub_4d1160
// 地址: 0x4d1160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4d0eb0(arg1)
char* edx = *(arg3 + 4)

if (&edx[4] u<= *(arg3 + 8))
    uint32_t eax_5 = zx.d(*edx) | ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8
    *(arg3 + 4) = &edx[4]
    
    if (sub_6c9360(arg3, arg1 + 8, (eax_5 + 3) & 0xfffffffc) != 0)
        uint32_t var_10 = 0
        uint32_t var_c = 0
        
        if (arg2 s< 1)
            goto label_4d11fa
        
        if (sub_61ec90(arg3, &var_10) != 0)
            *(arg1 + 0x20) = var_10
        label_4d11fa:
            
            if (sub_61ec90(arg3, &var_10) != 0)
                *(arg1 + 0x24) = var_10
                
                if (sub_6c9300(arg3, arg1 + 0x28) != 0 && sub_6c9300(arg3, arg1 + 0x2c) != 0
                        && sub_61ec90(arg3, arg1 + 0x30) != 0
                        && sub_61ec90(arg3, arg1 + 0x34) != 0)
                    *(arg1 + 0x38) = 1f / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                    bool eax_1 = sub_6c9300(arg3, arg1 + 0x3c)
                    
                    if (arg2 s< 1)
                        if (eax_1 != 0 && sub_6c9300(arg3, arg1 + 0x44) != 0
                                && sub_6c9300(arg3, arg1 + 0x4c) != 0
                                && sub_6c9300(arg3, arg1 + 0x54) != 0
                                && sub_6c9300(arg3, arg1 + 0x5c) != 0
                                && sub_6c9300(arg3, arg1 + 0x64) != 0)
                            goto label_4d13fb
                    else if (eax_1 != 0 && sub_6c9300(arg3, arg1 + 0x40) != 0
                            && sub_6c9300(arg3, arg1 + 0x44) != 0
                            && sub_6c9300(arg3, arg1 + 0x48) != 0
                            && sub_6c9300(arg3, arg1 + 0x4c) != 0
                            && sub_6c9300(arg3, arg1 + 0x50) != 0
                            && sub_6c9300(arg3, arg1 + 0x54) != 0
                            && sub_6c9300(arg3, arg1 + 0x58) != 0
                            && sub_6c9300(arg3, arg1 + 0x5c) != 0
                            && sub_6c9300(arg3, arg1 + 0x60) != 0
                            && sub_6c9300(arg3, arg1 + 0x64) != 0
                            && sub_6c9300(arg3, arg1 + 0x68) != 0)
                        if (arg2 s< 6)
                            goto label_4d13fb
                        
                        if (sub_61ec90(arg3, &var_c) != 0)
                            *(arg1 + 0x6c) = var_c == 1
                        label_4d13fb:
                            
                            if (sub_61ec90(arg3, &var_10) != 0)
                                *(arg1 + 0x70) = var_10
                                
                                if (sub_6c9300(arg3, arg1 + 0x74) != 0
                                        && sub_6c9300(arg3, arg1 + 0x78) != 0
                                        && sub_6c9300(arg3, arg1 + 0x7c) != 0
                                        && sub_6c9300(arg3, arg1 + 0x80) != 0
                                        && sub_61ec90(arg3, &var_10) != 0)
                                    *(arg1 + 0x84) = var_10
                                    
                                    if (arg2 s< 3)
                                        goto label_4d149f
                                    
                                    if (sub_61ec90(arg3, &var_10) != 0)
                                        *(arg1 + 0x88) = var_10
                                    label_4d149f:
                                        
                                        if (arg2 s< 0xa)
                                            goto label_4d14c2
                                        
                                        if (sub_61ec90(arg3, &var_10) != 0)
                                            *(arg1 + 0x8c) = var_10
                                        label_4d14c2:
                                            
                                            if (arg2 s< 2)
                                                goto label_4d15c4
                                            
                                            if (sub_61ec90(arg3, &var_10) != 0)
                                                *(arg1 + 0x90) = var_10
                                                
                                                if (sub_61ec90(arg3, &var_10) != 0)
                                                    *(arg1 + 0x94) = var_10
                                                    
                                                    if (sub_61ec90(arg3, &var_10) != 0)
                                                        *(arg1 + 0x98) = var_10
                                                        
                                                        if (sub_61ec90(arg3, &var_10) != 0)
                                                            *(arg1 + 0x9c) = var_10
                                                            
                                                            if (sub_61ec90(arg3, &var_10) != 0)
                                                                *(arg1 + 0xa0) = var_10
                                                                
                                                                if (sub_61ec90(arg3, &var_10) != 0)
                                                                    *(arg1 + 0xa4) = var_10
                                                                    
                                                                    if (sub_61ec90(arg3, &var_10) != 0)
                                                                        *(arg1 + 0xa8) = var_10
                                                                        
                                                                        if (sub_61ec90(arg3, &var_10) != 0)
                                                                            *(arg1 + 0xac) = var_10
                                                                        label_4d15c4:
                                                                            
                                                                            if (sub_6c9300(arg3, arg1 + 0xb0) != 0
                                                                                    && sub_6c9300(arg3, arg1 + 0xb4) != 0
                                                                                    && sub_6c9300(arg3, arg1 + 0xb8) != 0
                                                                                    && sub_6c9300(arg3, arg1 + 0xbc) != 0)
                                                                                if (arg2 s< 2)
                                                                                label_4d1635:
                                                                                    
                                                                                    if (sub_61ec90(arg3, &var_c) != 0)
                                                                                        *(arg1 + 0xc4) = var_c == 1
                                                                                        
                                                                                        if (sub_6c9300(arg3, arg1 + 0xc8) != 0)
                                                                                            *(arg1 + 0xcc) = 1f f/ *(arg1 + 0xc8)
                                                                                            
                                                                                            if (sub_6c9300(arg3, arg1 + 0xd0) != 0)
                                                                                                *(arg1 + 0xd4) = 1f f/ *(arg1 + 0xd0)
                                                                                                
                                                                                                if (arg2 s< 2)
                                                                                                    goto label_4d16d2
                                                                                                
                                                                                                if (sub_61ec90(arg3, &var_c) != 0)
                                                                                                    *(arg1 + 0xd8) = var_c == 1
                                                                                                label_4d16d2:
                                                                                                    eax_1 = sub_6c9300(arg3, arg1 + 0xdc)
                                                                                                    
                                                                                                    if (arg2 s< 1)
                                                                                                        if (eax_1 != 0
                                                                                                                && sub_6c9300(arg3, arg1 + 0xe4) != 0
                                                                                                                && sub_6c9300(arg3, arg1 + 0xec) != 0
                                                                                                                && sub_6c9300(arg3, arg1 + 0xf4) != 0
                                                                                                                && sub_6c9300(arg3, arg1 + 0xfc) != 0
                                                                                                                && sub_6c9300(arg3, arg1 + 0x104) != 0)
                                                                                                            goto label_4d1886
                                                                                                    else if (eax_1 != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0xe0) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0xe4) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0xe8) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0xec) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0xf0) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0xf4) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0xf8) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0xfc) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0x100) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0x104) != 0
                                                                                                            && sub_6c9300(arg3, arg1 + 0x108) != 0)
                                                                                                        if (arg2 s< 6)
                                                                                                            goto label_4d1886
                                                                                                        
                                                                                                        if (sub_61ec90(arg3, &var_c) != 0)
                                                                                                            *(arg1 + 0x10c) = var_c == 1
                                                                                                        label_4d1886:
                                                                                                            
                                                                                                            if (sub_61ec90(arg3, arg1 + 0x110) != 0)
                                                                                                                *(arg1 + 0x114) = 1f /
                                                                                                                    _mm_cvtepi32_ps(zx.o(*(arg1 + 0x110)))
                                                                                                                
                                                                                                                if (sub_61ec90(arg3, arg1 + 0x118) != 0)
                                                                                                                    *(arg1 + 0x11c) = 1f /
                                                                                                                        _mm_cvtepi32_ps(zx.o(*(arg1 + 0x118)))
                                                                                                                    
                                                                                                                    if (sub_61ec90(arg3, &var_10) != 0)
                                                                                                                        *(arg1 + 0x120) = var_10
                                                                                                                        
                                                                                                                        if (sub_61ec90(arg3, arg1 + 0x124) != 0
                                                                                                                                && sub_61ec90(arg3, &var_10) != 0)
                                                                                                                            *(arg1 + 0x128) = var_10
                                                                                                                            
                                                                                                                            if (sub_6c9300(arg3, arg1 + 0x12c) != 0
                                                                                                                                    && sub_6c9300(arg3, arg1 + 0x130) != 0
                                                                                                                                    && sub_6c9300(arg3, arg1 + 0x134) != 0)
                                                                                                                                var_c = 0
                                                                                                                                
                                                                                                                                if (sub_61ec90(arg3, &var_c) != 0)
                                                                                                                                    return sub_6c9360(arg3, arg1 + 0x138, 
                                                                                                                                        (var_c + 3) & 0xfffffffc) != 0
                                                                                else if (sub_6c9300(arg3, arg1 + 0xc0)
                                                                                        != 0)
                                                                                    goto label_4d1635

return false
