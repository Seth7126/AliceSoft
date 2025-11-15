// 函数: sub_65b1b0
// 地址: 0x65b1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t* esi = arg3
int32_t* var_4 = esi
int32_t* ebp = esi[6]
int32_t edi = ebp[1]
char* ebx = *ebp
*(esi + 0xc9) = arg4
esi[0x32].b = arg2
*(esi + 0xca) = arg5

if (edi != 0)
    goto label_65b200

if (ebp[3](esi) != 0)
    ebx = *ebp
    edi = ebp[1]
label_65b200:
    void* ebx_1 = &ebx[1]
    uint32_t ecx_2 = zx.d(*ebx) << 8
    arg4.d = ecx_2
    int32_t edi_1 = edi - 1
    
    if (edi != 1)
        goto label_65b227
    
    if (ebp[3](esi) != 0)
        ebx_1 = *ebp
        edi_1 = ebp[1]
        ecx_2 = arg4.d
    label_65b227:
        void* ebx_2 = ebx_1 + 1
        arg4.d = ecx_2 + zx.d(*ebx_1)
        int32_t edi_2 = edi_1 - 1
        
        if (edi_1 != 1)
            goto label_65b249
        
        if (ebp[3](esi) != 0)
            ebx_2 = *ebp
            edi_2 = ebp[1]
        label_65b249:
            void* ebx_3 = ebx_2 + 1
            esi[0x30] = zx.d(*ebx_2)
            int32_t edi_3 = edi_2 - 1
            
            if (edi_2 != 1)
                goto label_65b26b
            
            if (ebp[3](esi) != 0)
                ebx_3 = *ebp
                edi_3 = ebp[1]
            label_65b26b:
                void* ebx_4 = ebx_3 + 1
                esi[8] = zx.d(*ebx_3) << 8
                int32_t edi_4 = edi_3 - 1
                
                if (edi_3 != 1)
                    goto label_65b291
                
                if (ebp[3](esi) != 0)
                    ebx_4 = *ebp
                    edi_4 = ebp[1]
                label_65b291:
                    void* ebx_5 = ebx_4 + 1
                    esi[8] += zx.d(*ebx_4)
                    int32_t edi_5 = edi_4 - 1
                    
                    if (edi_4 != 1)
                        goto label_65b2b4
                    
                    if (ebp[3](esi) != 0)
                        ebx_5 = *ebp
                        edi_5 = ebp[1]
                    label_65b2b4:
                        void* ebx_6 = ebx_5 + 1
                        esi[7] = zx.d(*ebx_5) << 8
                        int32_t edi_6 = edi_5 - 1
                        
                        if (edi_5 != 1)
                            goto label_65b2da
                        
                        if (ebp[3](esi) != 0)
                            ebx_6 = *ebp
                            edi_6 = ebp[1]
                        label_65b2da:
                            void* ebx_7 = ebx_6 + 1
                            esi[7] += zx.d(*ebx_6)
                            int32_t edi_7 = edi_6 - 1
                            
                            if (edi_6 != 1)
                                goto label_65b2fd
                            
                            if (ebp[3](esi) != 0)
                                ebx_7 = *ebp
                                edi_7 = ebp[1]
                            label_65b2fd:
                                int32_t edi_8 = edi_7 - 1
                                void* ecx_4 = *esi
                                void* ebx_8 = ebx_7 + 1
                                esi[9] = zx.d(*ebx_7)
                                arg4.d -= 8
                                *(ecx_4 + 0x18) = esi[0x65]
                                *(ecx_4 + 0x1c) = esi[7]
                                *(ecx_4 + 0x20) = esi[8]
                                *(ecx_4 + 0x24) = esi[9]
                                *(*esi + 0x14) = 0x66
                                (*(*esi + 4))(esi, 1)
                                
                                if (*(esi[0x6b] + 0xd) != 0)
                                    *(*esi + 0x14) = 0x3d
                                    (**esi)(esi)
                                
                                if (esi[8] u<= 0 || esi[7] u<= 0 || esi[9] s<= 0)
                                    *(*esi + 0x14) = 0x21
                                    (**esi)(esi)
                                
                                if (arg4.d != esi[9] * 3)
                                    *(*esi + 0x14) = 0xc
                                    (**esi)(esi)
                                
                                if (esi[0x31] == 0)
                                    esi[0x31] = (*esi[1])(esi, 1, esi[9] * 0x58)
                                
                                int32_t i = 0
                                arg4.d = 0
                                
                                if (esi[9] s> 0)
                                    do
                                        if (edi_8 == 0)
                                            if (ebp[3](esi) == 0)
                                                return 0
                                            
                                            ebx_8 = *ebp
                                            edi_8 = ebp[1]
                                            i = arg4.d
                                        
                                        uint32_t ecx_7 = zx.d(*ebx_8)
                                        int32_t edi_9 = edi_8 - 1
                                        void* esi_1 = esi[0x31]
                                        void* ebx_9 = ebx_8 + 1
                                        int32_t eax_41 = 0
                                        arg5.d = esi_1
                                        
                                        if (i s> 0)
                                            do
                                                if (ecx_7 == *esi_1)
                                                    int32_t* esi_2 = arg5.d
                                                    int32_t ecx_6 = *esi_2
                                                    esi_1 = &esi_2[0x16]
                                                    
                                                    if (i s> 1)
                                                        int32_t j_1 = i - 1
                                                        int32_t j
                                                        
                                                        do
                                                            if (*esi_1 s> ecx_6)
                                                                ecx_6 = *esi_1
                                                            
                                                            esi_1 += 0x58
                                                            j = j_1
                                                            j_1 -= 1
                                                        while (j != 1)
                                                        i = arg4.d
                                                    
                                                    ecx_7 = ecx_6 + 1
                                                    break
                                                
                                                eax_41 += 1
                                                esi_1 += 0x58
                                            while (eax_41 s< i)
                                        
                                        *esi_1 = ecx_7
                                        *(esi_1 + 4) = i
                                        
                                        if (edi_9 == 0)
                                            if (ebp[3](var_4) == 0)
                                                return 0
                                            
                                            ebx_9 = *ebp
                                            edi_9 = ebp[1]
                                        
                                        uint32_t ecx_8 = zx.d(*ebx_9)
                                        void* ebx_10 = ebx_9 + 1
                                        *(esi_1 + 8) = ecx_8 u>> 4
                                        *(esi_1 + 0xc) = ecx_8 & 0xf
                                        int32_t edi_10 = edi_9 - 1
                                        
                                        if (edi_9 == 1)
                                            if (ebp[3](var_4) == 0)
                                                return 0
                                            
                                            ebx_10 = *ebp
                                            edi_10 = ebp[1]
                                        
                                        edi_8 = edi_10 - 1
                                        *(esi_1 + 0x10) = zx.d(*ebx_10)
                                        ebx_8 = ebx_10 + 1
                                        void* ecx_10 = *var_4
                                        *(ecx_10 + 0x18) = *esi_1
                                        *(ecx_10 + 0x1c) = *(esi_1 + 8)
                                        *(ecx_10 + 0x20) = *(esi_1 + 0xc)
                                        esi = var_4
                                        *(ecx_10 + 0x24) = *(esi_1 + 0x10)
                                        *(*esi + 0x14) = 0x67
                                        (*(*esi + 4))(esi, 1)
                                        i = arg4.d + 1
                                        arg4.d = i
                                    while (i s< esi[9])
                                
                                *(esi[0x6b] + 0xd) = 1
                                void* result
                                result.b = 1
                                ebp[1] = edi_8
                                *ebp = ebx_8
                                return result

return 0
