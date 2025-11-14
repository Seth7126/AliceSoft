// 函数: sub_488820
// 地址: 0x488820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_4 = arg1
sub_488570(arg1)
uint32_t arg_8
uint32_t edi = arg_8
char* edx = *(edi + 4)

if (&edx[4] u<= *(edi + 8))
    uint32_t eax_5 = zx.d(*edx) | ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8
    *(edi + 4) = &edx[4]
    
    if (sub_468c20(edi, arg1 + 8, (eax_5 + 3) & 0xfffffffc) != 0)
        arg_8 = 0
        var_4 = 0
        
        if (arg2 s< 1)
            goto label_4888b5
        
        if (sub_468b20(edi, &arg_8) != 0)
            *(arg1 + 0x20) = arg_8
        label_4888b5:
            
            if (sub_468b20(edi, &arg_8) != 0)
                *(arg1 + 0x24) = arg_8
                
                if (sub_468bc0(edi, arg1 + 0x28) != 0 && sub_468bc0(edi, arg1 + 0x2c) != 0
                        && sub_468b20(edi, arg1 + 0x30) != 0 && sub_468b20(edi, arg1 + 0x34) != 0)
                    *(arg1 + 0x38) = 1f / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                    bool eax_1 = sub_468bc0(edi, arg1 + 0x3c)
                    
                    if (arg2 s< 1)
                        if (eax_1 != 0 && sub_468bc0(edi, arg1 + 0x44) != 0
                                && sub_468bc0(edi, arg1 + 0x4c) != 0
                                && sub_468bc0(edi, arg1 + 0x54) != 0
                                && sub_468bc0(edi, arg1 + 0x5c) != 0
                                && sub_468bc0(edi, arg1 + 0x64) != 0)
                            goto label_488ab6
                    else if (eax_1 != 0 && sub_468bc0(edi, arg1 + 0x40) != 0
                            && sub_468bc0(edi, arg1 + 0x44) != 0
                            && sub_468bc0(edi, arg1 + 0x48) != 0
                            && sub_468bc0(edi, arg1 + 0x4c) != 0
                            && sub_468bc0(edi, arg1 + 0x50) != 0
                            && sub_468bc0(edi, arg1 + 0x54) != 0
                            && sub_468bc0(edi, arg1 + 0x58) != 0
                            && sub_468bc0(edi, arg1 + 0x5c) != 0
                            && sub_468bc0(edi, arg1 + 0x60) != 0
                            && sub_468bc0(edi, arg1 + 0x64) != 0
                            && sub_468bc0(edi, arg1 + 0x68) != 0)
                        if (arg2 s< 6)
                            goto label_488ab6
                        
                        if (sub_468b20(edi, &var_4) != 0)
                            *(arg1 + 0x6c) = var_4 == 1
                        label_488ab6:
                            
                            if (sub_468b20(edi, &arg_8) != 0)
                                *(arg1 + 0x70) = arg_8
                                
                                if (sub_468bc0(edi, arg1 + 0x74) != 0
                                        && sub_468bc0(edi, arg1 + 0x78) != 0
                                        && sub_468bc0(edi, arg1 + 0x7c) != 0
                                        && sub_468bc0(edi, arg1 + 0x80) != 0
                                        && sub_468b20(edi, &arg_8) != 0)
                                    *(arg1 + 0x84) = arg_8
                                    
                                    if (arg2 s< 3)
                                        goto label_488b5a
                                    
                                    if (sub_468b20(edi, &arg_8) != 0)
                                        *(arg1 + 0x88) = arg_8
                                    label_488b5a:
                                        
                                        if (arg2 s< 0xa)
                                            goto label_488b7d
                                        
                                        if (sub_468b20(edi, &arg_8) != 0)
                                            *(arg1 + 0x8c) = arg_8
                                        label_488b7d:
                                            
                                            if (arg2 s< 2)
                                                goto label_488c7f
                                            
                                            if (sub_468b20(edi, &arg_8) != 0)
                                                *(arg1 + 0x90) = arg_8
                                                
                                                if (sub_468b20(edi, &arg_8) != 0)
                                                    *(arg1 + 0x94) = arg_8
                                                    
                                                    if (sub_468b20(edi, &arg_8) != 0)
                                                        *(arg1 + 0x98) = arg_8
                                                        
                                                        if (sub_468b20(edi, &arg_8) != 0)
                                                            *(arg1 + 0x9c) = arg_8
                                                            
                                                            if (sub_468b20(edi, &arg_8) != 0)
                                                                *(arg1 + 0xa0) = arg_8
                                                                
                                                                if (sub_468b20(edi, &arg_8) != 0)
                                                                    *(arg1 + 0xa4) = arg_8
                                                                    
                                                                    if (sub_468b20(edi, &arg_8) != 0)
                                                                        *(arg1 + 0xa8) = arg_8
                                                                        
                                                                        if (sub_468b20(edi, &arg_8) != 0)
                                                                            *(arg1 + 0xac) = arg_8
                                                                        label_488c7f:
                                                                            
                                                                            if (sub_468bc0(edi, arg1 + 0xb0) != 0
                                                                                    && sub_468bc0(edi, arg1 + 0xb4) != 0
                                                                                    && sub_468bc0(edi, arg1 + 0xb8) != 0
                                                                                    && sub_468bc0(edi, arg1 + 0xbc) != 0)
                                                                                if (arg2 s< 2)
                                                                                label_488cf0:
                                                                                    
                                                                                    if (sub_468b20(edi, &var_4) != 0)
                                                                                        *(arg1 + 0xc4) = var_4 == 1
                                                                                        
                                                                                        if (sub_468bc0(edi, arg1 + 0xc8) != 0)
                                                                                            *(arg1 + 0xcc) = 1f f/ *(arg1 + 0xc8)
                                                                                            
                                                                                            if (sub_468bc0(edi, arg1 + 0xd0) != 0)
                                                                                                *(arg1 + 0xd4) = 1f f/ *(arg1 + 0xd0)
                                                                                                
                                                                                                if (arg2 s< 2)
                                                                                                    goto label_488d87
                                                                                                
                                                                                                if (sub_468b20(edi, &var_4) != 0)
                                                                                                    *(arg1 + 0xd8) = var_4 == 1
                                                                                                label_488d87:
                                                                                                    eax_1 = sub_468bc0(edi, arg1 + 0xdc)
                                                                                                    
                                                                                                    if (arg2 s< 1)
                                                                                                        if (eax_1 != 0
                                                                                                                && sub_468bc0(edi, arg1 + 0xe4) != 0
                                                                                                                && sub_468bc0(edi, arg1 + 0xec) != 0
                                                                                                                && sub_468bc0(edi, arg1 + 0xf4) != 0
                                                                                                                && sub_468bc0(edi, arg1 + 0xfc) != 0
                                                                                                                && sub_468bc0(edi, arg1 + 0x104) != 0)
                                                                                                            goto label_488f3b
                                                                                                    else if (eax_1 != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0xe0) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0xe4) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0xe8) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0xec) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0xf0) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0xf4) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0xf8) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0xfc) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0x100) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0x104) != 0
                                                                                                            && sub_468bc0(edi, arg1 + 0x108) != 0)
                                                                                                        if (arg2 s< 6)
                                                                                                            goto label_488f3b
                                                                                                        
                                                                                                        if (sub_468b20(edi, &var_4) != 0)
                                                                                                            *(arg1 + 0x10c) = var_4 == 1
                                                                                                        label_488f3b:
                                                                                                            
                                                                                                            if (sub_468b20(edi, arg1 + 0x110) != 0)
                                                                                                                *(arg1 + 0x114) = 1f /
                                                                                                                    _mm_cvtepi32_ps(zx.o(*(arg1 + 0x110)))
                                                                                                                
                                                                                                                if (sub_468b20(edi, arg1 + 0x118) != 0)
                                                                                                                    *(arg1 + 0x11c) = 1f /
                                                                                                                        _mm_cvtepi32_ps(zx.o(*(arg1 + 0x118)))
                                                                                                                    
                                                                                                                    if (sub_468b20(edi, &arg_8) != 0)
                                                                                                                        *(arg1 + 0x120) = arg_8
                                                                                                                        
                                                                                                                        if (sub_468b20(edi, arg1 + 0x124) != 0
                                                                                                                                && sub_468b20(edi, &arg_8) != 0)
                                                                                                                            *(arg1 + 0x128) = arg_8
                                                                                                                            
                                                                                                                            if (sub_468bc0(edi, arg1 + 0x12c) != 0
                                                                                                                                    && sub_468bc0(edi, arg1 + 0x130) != 0
                                                                                                                                    && sub_468bc0(edi, arg1 + 0x134) != 0)
                                                                                                                                arg_8 = 0
                                                                                                                                
                                                                                                                                if (sub_468b20(edi, &arg_8) != 0)
                                                                                                                                    return sub_468c20(edi, arg1 + 0x138, 
                                                                                                                                        (arg_8 + 3) & 0xfffffffc) != 0
                                                                                else if (sub_468bc0(edi, arg1 + 0xc0)
                                                                                        != 0)
                                                                                    goto label_488cf0

return false
