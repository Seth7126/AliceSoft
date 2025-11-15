// 函数: sub_65c190
// 地址: 0x65c190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
int32_t* ebp = arg1
int32_t* ebx = ebp[6]
char* edi = *ebx
int32_t esi = ebx[1]

if (*(ebp[0x6b] + 0xd) == 0)
    *(*ebp + 0x14) = 0x3c
    _strncpy(*ebp + 0x18, "LSE", 0x50)
    (**ebp)(ebp)

if (ebp[9] s< 3)
label_65c5e2:
    *(*ebp + 0x14) = 0x1c
    (**ebp)(ebp)
label_65c5f3:
    ebp[0x43] = 1
    uint32_t eax_49
    eax_49.b = 1
    *ebx = edi
    ebx[1] = esi
    return eax_49

if (esi != 0)
    goto label_65c1fe

uint32_t eax_7

if (ebx[3](ebp).b != 0)
    edi = *ebx
    esi = ebx[1]
label_65c1fe:
    void* edi_1 = &edi[1]
    var_4 = zx.d(*edi) << 8
    int32_t esi_1 = esi - 1
    
    if (esi != 1)
        goto label_65c220
    
    if (ebx[3](ebp).b != 0)
        edi_1 = *ebx
        esi_1 = ebx[1]
    label_65c220:
        int32_t esi_2 = esi_1 - 1
        void* edi_2 = edi_1 + 1
        
        if (zx.d(*edi_1) + var_4 != 0x18)
            *(*ebp + 0x14) = 0xc
            (**ebp)(ebp)
        
        if (esi_2 != 0)
            goto label_65c256
        
        if (ebx[3](ebp).b != 0)
            edi_2 = *ebx
            esi_2 = ebx[1]
        label_65c256:
            eax_7.b = *edi_2
            int32_t esi_3 = esi_2 - 1
            void* edi_3 = edi_2 + 1
            
            if (eax_7.b != 0xd)
                *(*ebp + 0x14) = 0x46
                *(*ebp + 0x18) = ebp[0x65]
                (**ebp)(ebp)
            
            if (esi_3 != 0)
                goto label_65c29c
            
            if (ebx[3](ebp).b != 0)
                edi_3 = *ebx
                esi_3 = ebx[1]
            label_65c29c:
                void* edi_4 = edi_3 + 1
                uint32_t ecx_3 = zx.d(*edi_3) << 8
                int32_t esi_4 = esi_3 - 1
                
                if (esi_3 != 1)
                    goto label_65c2c6
                
                if (ebx[3](ebp).b != 0)
                    edi_4 = *ebx
                    esi_4 = ebx[1]
                label_65c2c6:
                    esi = esi_4 - 1
                    edi = edi_4 + 1
                    
                    if (ecx_3 + zx.d(*edi_4) != 0xff)
                        goto label_65c5e2
                    
                    if (esi != 0)
                        goto label_65c2f0
                    
                    if (ebx[3](ebp).b != 0)
                        edi = *ebx
                        esi = ebx[1]
                    label_65c2f0:
                        eax_7.b = *edi
                        esi -= 1
                        edi = &edi[1]
                        
                        if (eax_7.b != 3)
                            goto label_65c5e2
                        
                        if (esi != 0)
                            goto label_65c31c
                        
                        if (ebx[3](ebp).b != 0)
                            edi = *ebx
                            esi = ebx[1]
                        label_65c31c:
                            esi -= 1
                            uint32_t ecx_5 = zx.d(*edi)
                            edi = &edi[1]
                            
                            if (ecx_5 != *(ebp[0x31] + 0x58))
                                goto label_65c5e2
                            
                            if (esi != 0)
                                goto label_65c34a
                            
                            if (ebx[3](ebp).b != 0)
                                edi = *ebx
                                esi = ebx[1]
                            label_65c34a:
                                esi -= 1
                                uint32_t ecx_6 = zx.d(*edi)
                                edi = &edi[1]
                                
                                if (ecx_6 != *ebp[0x31])
                                    goto label_65c5e2
                                
                                if (esi != 0)
                                    goto label_65c377
                                
                                if (ebx[3](ebp).b != 0)
                                    edi = *ebx
                                    esi = ebx[1]
                                label_65c377:
                                    esi -= 1
                                    uint32_t ecx_7 = zx.d(*edi)
                                    edi = &edi[1]
                                    
                                    if (ecx_7 != *(ebp[0x31] + 0xb0))
                                        goto label_65c5e2
                                    
                                    if (esi != 0)
                                        goto label_65c3a2
                                    
                                    if (ebx[3](ebp).b != 0)
                                        edi = *ebx
                                        esi = ebx[1]
                                    label_65c3a2:
                                        eax_7.b = *edi
                                        esi -= 1
                                        edi = &edi[1]
                                        
                                        if (eax_7.b != 0x80)
                                            goto label_65c5e2
                                        
                                        if (esi != 0)
                                            goto label_65c3cb
                                        
                                        if (ebx[3](ebp).b != 0)
                                            edi = *ebx
                                            esi = ebx[1]
                                        label_65c3cb:
                                            void* edi_5 = &edi[1]
                                            uint32_t ecx_9 = zx.d(*edi) << 8
                                            int32_t esi_5 = esi - 1
                                            
                                            if (esi != 1)
                                                goto label_65c3f5
                                            
                                            if (ebx[3](ebp).b != 0)
                                                edi_5 = *ebx
                                                esi_5 = ebx[1]
                                            label_65c3f5:
                                                esi = esi_5 - 1
                                                edi = edi_5 + 1
                                                
                                                if (ecx_9 != neg.d(zx.d(*edi_5)))
                                                    goto label_65c5e2
                                                
                                                if (esi != 0)
                                                    goto label_65c41c
                                                
                                                if (ebx[3](ebp).b != 0)
                                                    edi = *ebx
                                                    esi = ebx[1]
                                                label_65c41c:
                                                    void* edi_6 = &edi[1]
                                                    uint32_t ecx_12 = zx.d(*edi) << 8
                                                    int32_t esi_6 = esi - 1
                                                    
                                                    if (esi != 1)
                                                        goto label_65c446
                                                    
                                                    if (ebx[3](ebp).b != 0)
                                                        edi_6 = *ebx
                                                        esi_6 = ebx[1]
                                                    label_65c446:
                                                        esi = esi_6 - 1
                                                        edi = edi_6 + 1
                                                        
                                                        if (ecx_12 != neg.d(zx.d(*edi_6)))
                                                            goto label_65c5e2
                                                        
                                                        if (esi != 0)
                                                            goto label_65c46a
                                                        
                                                        if (ebx[3](ebp).b != 0)
                                                            edi = *ebx
                                                            esi = ebx[1]
                                                        label_65c46a:
                                                            eax_7.b = *edi
                                                            esi -= 1
                                                            edi = &edi[1]
                                                            
                                                            if (eax_7.b != 0)
                                                                goto label_65c5e2
                                                            
                                                            if (esi != 0)
                                                                goto label_65c493
                                                            
                                                            if (ebx[3](ebp).b != 0)
                                                                edi = *ebx
                                                                esi = ebx[1]
                                                            label_65c493:
                                                                void* edi_7 = &edi[1]
                                                                uint32_t ecx_15 = zx.d(*edi) << 8
                                                                int32_t esi_7 = esi - 1
                                                                
                                                                if (esi != 1)
                                                                    goto label_65c4bd
                                                                
                                                                if (ebx[3](ebp).b != 0)
                                                                    edi_7 = *ebx
                                                                    esi_7 = ebx[1]
                                                                label_65c4bd:
                                                                    esi = esi_7 - 1
                                                                    edi = edi_7 + 1
                                                                    
                                                                    if (ecx_15 + zx.d(*edi_7) != 1)
                                                                        goto label_65c5e2
                                                                    
                                                                    if (esi != 0)
                                                                        goto label_65c4e7
                                                                    
                                                                    if (ebx[3](ebp).b != 0)
                                                                        edi = *ebx
                                                                        esi = ebx[1]
                                                                    label_65c4e7:
                                                                        char* edi_8 = &edi[1]
                                                                        uint32_t ecx_18 = zx.d(*edi) << 8
                                                                        int32_t esi_8 = esi - 1
                                                                        
                                                                        if (esi != 1)
                                                                            goto label_65c511
                                                                        
                                                                        if (ebx[3](ebp).b != 0)
                                                                            edi_8 = *ebx
                                                                            esi_8 = ebx[1]
                                                                        label_65c511:
                                                                            esi = esi_8 - 1
                                                                            edi = &edi_8[1]
                                                                            
                                                                            if (ecx_18 != neg.d(zx.d(*edi_8)))
                                                                                goto label_65c5e2
                                                                            
                                                                            if (esi != 0)
                                                                                goto label_65c535
                                                                            
                                                                            if (ebx[3](ebp).b != 0)
                                                                                edi = *ebx
                                                                                esi = ebx[1]
                                                                            label_65c535:
                                                                                eax_7.b = *edi
                                                                                esi -= 1
                                                                                edi = &edi[1]
                                                                                
                                                                                if (eax_7.b != 0)
                                                                                    goto label_65c5e2
                                                                                
                                                                                if (esi != 0)
                                                                                    goto label_65c55e
                                                                                
                                                                                if (ebx[3](ebp).b != 0)
                                                                                    edi = *ebx
                                                                                    esi = ebx[1]
                                                                                label_65c55e:
                                                                                    void* edi_9 = &edi[1]
                                                                                    uint32_t ecx_21 = zx.d(*edi) << 8
                                                                                    int32_t esi_9 = esi - 1
                                                                                    
                                                                                    if (esi != 1)
                                                                                        goto label_65c588
                                                                                    
                                                                                    if (ebx[3](ebp).b != 0)
                                                                                        edi_9 = *ebx
                                                                                        esi_9 = ebx[1]
                                                                                    label_65c588:
                                                                                        esi = esi_9 - 1
                                                                                        edi = edi_9 + 1
                                                                                        
                                                                                        if (ecx_21 + zx.d(*edi_9) != 1)
                                                                                            goto label_65c5e2
                                                                                        
                                                                                        if (esi != 0)
                                                                                            goto label_65c5ae
                                                                                        
                                                                                        if (ebx[3](ebp).b != 0)
                                                                                            edi = *ebx
                                                                                            esi = ebx[1]
                                                                                        label_65c5ae:
                                                                                            void* edi_10 = &edi[1]
                                                                                            uint32_t ecx_24 = zx.d(*edi) << 8
                                                                                            int32_t esi_10 = esi - 1
                                                                                            
                                                                                            if (esi != 1)
                                                                                                goto label_65c5d8
                                                                                            
                                                                                            if (ebx[3](ebp).b != 0)
                                                                                                edi_10 = *ebx
                                                                                                esi_10 = ebx[1]
                                                                                            label_65c5d8:
                                                                                                esi = esi_10 - 1
                                                                                                edi = edi_10 + 1
                                                                                                
                                                                                                if (ecx_24 == neg.d(zx.d(*edi_10)))
                                                                                                    goto label_65c5f3
                                                                                                
                                                                                                goto label_65c5e2

eax_7.b = 0
return eax_7
