// 函数: sub_654ae0
// 地址: 0x654ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[0x6c]
int32_t var_10 = edi

if (arg1[0x3f] != 0)
    if (*(edi + 0x38) == 0)
        sub_6549d0(arg1)
    
    *(edi + 0x38) -= 1

int32_t i

if (*(edi + 0x14) != 0xffffffff)
    i = 0
    int32_t i_1 = 0
    
    if (arg1[0x53] s> 0)
        void* ecx_2 = &arg1[0x54]
        void* var_8_1 = ecx_2
        
        do
            int32_t* ebx_5 = *ecx_2
            int16_t* eax = *(arg2 + (i << 2))
            int32_t eax_2 = *(arg1[ebx_5 + 0x4d] + 0x14)
            char* esi_2 = *(edi + (eax_2 << 2) + 0x3c) + *(edi + (ebx_5 << 2) + 0x28)
            int32_t eax_3 = sub_654840(arg1, esi_2)
            
            if (eax_3 != 0)
                int32_t eax_4 = sub_654840(arg1, &esi_2[1])
                char* ebx_2 = eax_4 + 2 + esi_2
                int32_t esi_3 = sub_654840(arg1, ebx_2)
                
                if (esi_3 != 0)
                    ebx_2 = *(edi + (eax_2 << 2) + 0x3c) + 0x14
                    
                    if (sub_654840(arg1, ebx_2) != 0)
                        int32_t j
                        
                        do
                            esi_3 *= 2
                            
                            if (esi_3 == 0x8000)
                                *(*arg1 + 0x14) = 0x75
                                (*(*arg1 + 4))(arg1, 0xffffffff)
                                *(edi + 0x14) = 0xffffffff
                                goto label_654cbd
                            
                            ebx_2 = &ebx_2[1]
                            j = sub_654840(arg1, ebx_2)
                        while (j != 0)
                
                if (esi_3 s>= 1 << *(eax_2 + arg1 + 0xcb) s>> 1)
                    void* eax_12
                    
                    if (esi_3 s<= 1 << *(eax_2 + arg1 + 0xdb) s>> 1)
                        eax_12 = (eax_4 << 2) + 4
                    else
                        eax_12 = (eax_4 << 2) + 0xc
                    
                    *(edi + (ebx_5 << 2) + 0x28) = eax_12
                else
                    *(edi + (ebx_5 << 2) + 0x28) = 0
                
                int32_t edi_1 = esi_3
                
                for (int32_t j_1 = esi_3 s>> 1; j_1 != 0; j_1 s>>= 1)
                    if (sub_654840(arg1, &ebx_2[0xe]) != 0)
                        edi_1 |= j_1
                
                int32_t edi_2 = edi_1 + 1
                
                if (eax_4 != 0)
                    edi_2 = neg.d(edi_2)
                
                *(var_10 + (ebx_5 << 2) + 0x18) += edi_2
                edi = var_10
            else
                *(edi + (ebx_5 << 2) + 0x28) = eax_3
            
            eax_3.w = *(edi + (ebx_5 << 2) + 0x18)
            eax_3.w <<= (arg1[0x61]).b
            *eax = eax_3.w
            i = i_1 + 1
            ecx_2 = var_8_1 + 4
            i_1 = i
            var_8_1 = ecx_2
        while (i s< arg1[0x53])
        
        i.b = 1
        return i

label_654cbd:
i.b = 1
return i
