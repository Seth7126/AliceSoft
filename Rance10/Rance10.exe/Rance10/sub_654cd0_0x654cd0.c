// 函数: sub_654cd0
// 地址: 0x654cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
void* ebp = ebx[0x6c]
void* var_4 = ebp

if (ebx[0x3f] != 0)
    if (*(ebp + 0x38) == 0)
        sub_6549d0(ebx)
    
    *(ebp + 0x38) -= 1

if (*(ebp + 0x14) != 0xffffffff)
    int32_t eax = ebx[0x63]
    int32_t eax_2 = *arg2
    int32_t* edi_2 = ebx[0x5e] - 1
    int32_t eax_4 = *(ebx[0x4d] + 0x18)
    int32_t eax_6 = (eax_4 << 2) + 0x7c + ebp
    char* esi_2 = edi_2 * 3 + *eax_6
    
    if (sub_654840(ebx, esi_2) == 0)
        while (true)
            void* edi_3 = edi_2 + 1
            arg1 = edi_3
            
            if (sub_654840(ebx, &esi_2[1]) != 0)
            label_654d9a:
                int32_t eax_9 = sub_654840(ebx, ebp + 0xbc)
                void* esi_3 = &esi_2[2]
                int32_t edi_4 = sub_654840(ebx, esi_3)
                
                if (edi_4 == 0)
                label_654e0a:
                    int32_t ebp_1 = edi_4
                    
                    for (int32_t i = edi_4 s>> 1; i != 0; i s>>= 1)
                        if (sub_654840(ebx, esi_3 + 0xe) != 0)
                            ebp_1 |= i
                    
                    int32_t ebp_2 = ebp_1 + 1
                    
                    if (eax_9 != 0)
                        ebp_2 = neg.d(ebp_2)
                    
                    edi_2 = arg1
                    ebp_2.w <<= (ebx[0x61]).b
                    *(eax_2 + (*(eax + (edi_2 << 2)) << 1)) = ebp_2.w
                    
                    if (edi_2 s>= ebx[0x5f])
                        break
                    
                    esi_2 = edi_2 * 3 + *eax_6
                    
                    if (sub_654840(ebx, esi_2) != 0)
                        break
                    
                    ebp = var_4
                    continue
                else
                    if (sub_654840(ebx, esi_3) == 0)
                        goto label_654e0a
                    
                    edi_4 *= 2
                    int32_t esi_4 = 0xd9
                    
                    if (arg1 s<= zx.d(*(eax_4 + ebx + 0xeb)))
                        esi_4 = 0xbd
                    
                    esi_3 = esi_4 + *(ebp + (eax_4 << 2) + 0x7c)
                    
                    if (sub_654840(ebx, esi_3) == 0)
                        goto label_654e0a
                    
                    while (true)
                        edi_4 *= 2
                        
                        if (edi_4 == 0x8000)
                            break
                        
                        esi_3 += 1
                        
                        if (sub_654840(ebx, esi_3) == 0)
                            goto label_654e0a
            else
                while (true)
                    esi_2 = &esi_2[3]
                    
                    if (edi_3 s>= ebx[0x5f])
                        break
                    
                    edi_3 += 1
                    arg1 = edi_3
                    
                    if (sub_654840(ebx, &esi_2[1]) != 0)
                        goto label_654d9a
            
            *(*ebx + 0x14) = 0x75
            (*(*ebx + 4))(ebx, 0xffffffff)
            *(ebp + 0x14) = 0xffffffff
            break

int32_t result
result.b = 1
return result
