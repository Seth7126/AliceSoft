// 函数: sub_5d6650
// 地址: 0x5d6650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg1
int32_t* edx = arg5
void* esi = arg3
void* edi = arg4
void* ecx = arg2

while (true)
    if (esi s< 0)
        *edx += esi
        edi -= esi
        esi = nullptr
        
        if (edi s>= 0)
            continue
    else if (edi s>= 0)
        void* eax = *edx
        
        if (eax s> 0)
            void* arg_8
            void* ebp_1 = arg_8
            uint32_t ebx_2 = *(ebp_1 + 0xc) u>> 2
            
            if (eax + esi s> ebx_2)
                *edx = ebx_2 - esi
            
            uint32_t ebx_5 = *(ecx + 0xc) u>> 2
            
            if (*edx + edi s> ebx_5)
                *edx = ebx_5 - edi
            
            void* ebx_7 = *edx
            
            if (ebx_7 s> 0)
                uint32_t eax_5
                
                if (ecx != ebp_1 || edi s<= esi || edi s>= ebx_7 + esi)
                    eax_5 = *(ecx + 0x3c) - 0xe
                    
                    if (eax_5 u> 0x26)
                    label_5d6a88:
                        eax_5.b = 0
                        return eax_5
                    
                    switch (eax_5)
                        case 0, 8, 0x10, 0x12, 0x24, 0x26
                            arg5 = nullptr
                            
                            if (ebx_7 s> 0)
                                void* edx_1 = esi << 2
                                int32_t esi_5 = esi - edi
                                arg_8 = edx_1
                                
                                while (true)
                                    if (edi + esi_5 u>= *(ebp_1 + 0xc) u>> 2)
                                        goto label_5d6a88
                                    
                                    int32_t eax_14
                                    
                                    if (*(ebp_1 + 0xc) != 0)
                                        eax_14 = *(ebp_1 + 8)
                                    else
                                        eax_14 = 0
                                    
                                    if (sub_5d34a0(arg2, edi, *(edx_1 + eax_14)).b == 0)
                                        goto label_5d6a88
                                    
                                    int32_t* edx_2 = arg5
                                    edi += 1
                                    arg_8 += 4
                                    arg5 = edx_2 + 1
                                    
                                    if (edx_2 + 1 s>= ebx_7)
                                        break
                                    
                                    edx_1 = arg_8
                            
                            eax_5.b = 1
                            return eax_5
                        case 1, 9
                            arg_8 = nullptr
                            
                            if (ebx_7 s<= 0)
                                eax_5.b = 1
                                return eax_5
                            
                            int32_t esi_6 = esi - edi
                            
                            while (sub_5d3550(ebp_1, edi + esi_6, &arg5).b != 0)
                                if (sub_5d34e0(arg2, arg5, edi).b == 0)
                                    break
                                
                                edi += 1
                                void* eax_17 = arg_8 + 1
                                arg_8 = eax_17
                                
                                if (eax_17 s>= ebx_7)
                                    eax_17.b = 1
                                    return eax_17
                            
                            goto label_5d6a88
                        case 2, 0xa
                            arg_8 = nullptr
                            
                            if (ebx_7 s<= 0)
                                eax_5.b = 1
                                return eax_5
                            
                            void* edi_5 = edi - esi
                            
                            while (sub_5d3550(ecx, esi + edi_5, &arg5).b != 0)
                                if (sub_5d3550(ebp_1, esi, &arg4).b == 0)
                                    break
                                
                                eax_5 = sub_5d6060(arg1, arg5)
                                arg3 = eax_5
                                
                                if (eax_5 == 0)
                                    break
                                
                                eax_5 = sub_5d6060(arg1, arg4)
                                
                                if (eax_5 == 0)
                                    break
                                
                                if (sub_5d3d90(arg3, eax_5).b == 0)
                                    break
                                
                                esi += 1
                                ecx = arg2
                                void* eax_20 = arg_8 + 1
                                arg_8 = eax_20
                                
                                if (eax_20 s>= ebx_7)
                                    eax_20.b = 1
                                    return eax_20
                            
                            goto label_5d6a88
                        case 3, 0xb
                            arg_8 = nullptr
                            
                            if (ebx_7 s> 0)
                                int32_t edi_6 = edi - esi
                                
                                do
                                    if (sub_5d3550(ecx, esi + edi_6, &arg4).b == 0)
                                        goto label_5d6a88
                                    
                                    if (sub_5d3550(ebp_1, esi, &arg5).b == 0)
                                        goto label_5d6a88
                                    
                                    if (sub_5d7290(arg1, arg4, arg5).b == 0)
                                        goto label_5d6a88
                                    
                                    esi += 1
                                    ecx = arg2
                                    eax_5 = arg_8 + 1
                                    arg_8 = eax_5
                                while (eax_5 s< ebx_7)
                            
                            eax_5.b = 1
                            return eax_5
                        case 4, 5, 6, 7, 0xc, 0xd, 0xe, 0xf, 0x11, 0x13, 0x14, 0x15, 0x16, 0x17, 
                                0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                                0x23, 0x25
                            goto label_5d6a88
                else
                    eax_5 = *(ecx + 0x3c) - 0xe
                    
                    if (eax_5 u> 0x26)
                        goto label_5d6a88
                    
                    switch (eax_5)
                        case 0, 8, 0x10, 0x12, 0x24, 0x26
                            void* ebp_2 = ebx_7 - 1
                            
                            if (ebp_2 s< 0)
                                eax_5.b = 1
                                return eax_5
                            
                            void* ebx_8 = edi + ebp_2
                            void* edi_1 = arg_8
                            
                            while (sub_5d3550(edi_1, ebx_8 + esi - edi, &arg_8).b != 0)
                                if (sub_5d34a0(arg2, ebx_8, arg_8).b == 0)
                                    break
                                
                                ebx_8 -= 1
                                void* temp2_1 = ebp_2
                                ebp_2 -= 1
                                
                                if (temp2_1 - 1 s< 0)
                                    eax_5.b = 1
                                    return eax_5
                            
                            goto label_5d6a88
                        case 1, 9
                            void* ebp_3 = ebx_7 - 1
                            
                            if (ebp_3 s< 0)
                                eax_5.b = 1
                                return eax_5
                            
                            void* ebx_9 = edi + ebp_3
                            void* edi_2 = arg_8
                            
                            while (sub_5d3550(edi_2, ebx_9 + esi - edi, &arg_8).b != 0)
                                if (sub_5d34e0(arg2, arg_8, ebx_9).b == 0)
                                    break
                                
                                ebx_9 -= 1
                                void* temp3_1 = ebp_3
                                ebp_3 -= 1
                                
                                if (temp3_1 - 1 s< 0)
                                    eax_5.b = 1
                                    return eax_5
                            
                            goto label_5d6a88
                        case 2, 0xa
                            arg_8 = ebx_7 - 1
                            
                            if (ebx_7 - 1 s< 0)
                                eax_5.b = 1
                                return eax_5
                            
                            void* ebx_11 = ebx_7 - 1 + esi
                            
                            while (sub_5d3550(ecx, ebx_11 + edi - esi, &arg5).b != 0)
                                if (sub_5d3550(ebp_1, ebx_11, &arg4).b == 0)
                                    break
                                
                                uint32_t esi_3 = sub_5d6060(arg1, arg5)
                                
                                if (esi_3 == 0)
                                    break
                                
                                eax_5 = sub_5d6060(arg1, arg4)
                                
                                if (eax_5 == 0)
                                    break
                                
                                if (sub_5d3d90(esi_3, eax_5).b == 0)
                                    break
                                
                                ebx_11 -= 1
                                ecx = arg2
                                void* eax_10 = arg_8 - 1
                                arg_8 = eax_10
                                
                                if (eax_10 s< 0)
                                    eax_10.b = 1
                                    return eax_10
                            
                            goto label_5d6a88
                        case 3, 0xb
                            void* ebp_4 = ebx_7 - 1
                            
                            if (ebp_4 s< 0)
                                eax_5.b = 1
                                return eax_5
                            
                            void* ebx_12 = esi + ebp_4
                            
                            while (sub_5d3550(ecx, ebx_12 + edi - esi, &arg4).b != 0)
                                if (sub_5d3550(arg_8, ebx_12, &arg5).b == 0)
                                    break
                                
                                if (sub_5d7290(arg1, arg4, arg5).b == 0)
                                    break
                                
                                ecx = arg2
                                ebx_12 -= 1
                                void* temp4_1 = ebp_4
                                ebp_4 -= 1
                                
                                if (temp4_1 - 1 s< 0)
                                    eax_5.b = 1
                                    return eax_5
                            
                            goto label_5d6a88
                        case 4, 5, 6, 7, 0xc, 0xd, 0xe, 0xf, 0x11, 0x13, 0x14, 0x15, 0x16, 0x17, 
                                0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                                0x23, 0x25
                            goto label_5d6a88
        
        *edx = 0
        eax.b = 1
        return eax
    
    *edx += edi
    esi -= edi
    edi = nullptr
