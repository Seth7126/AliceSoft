// 函数: sub_654f20
// 地址: 0x654f20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
void* ebp = ebx[0x6c]

if (ebx[0x3f] != 0)
    if (*(ebp + 0x38) == 0)
        sub_6549d0(ebx)
    
    *(ebp + 0x38) -= 1

void* result

if (*(ebp + 0x14) != 0xffffffff)
    char ecx_2 = (ebx[0x61]).b
    int32_t ebp_1 = ebx[0x63]
    int32_t* edx_1 = *arg2
    int32_t var_c_1 = ebp_1
    arg1 = edx_1
    int32_t eax_2 = 1 << ecx_2
    int32_t eax_3 = 0xffffffff << ecx_2
    int32_t ecx_3 = ebx[0x5f]
    
    while (*(edx_1 + (*(ebp_1 + (ecx_3 << 2)) << 1)) == 0)
        int32_t temp0_1 = ecx_3
        ecx_3 -= 1
        
        if (temp0_1 == 1)
            break
    
    int32_t esi_2 = ebx[0x5e] - 1
    int32_t var_8_1 = ecx_3
    void* eax_7 = ebp + (*(ebx[0x4d] + 0x18) << 2) + 0x7c
    void* var_4_1 = eax_7
    
    while (true)
        char* edi_3 = esi_2 * 3 + *eax_7
        
        if (esi_2 s>= ecx_3)
            if (sub_654840(ebx, edi_3) != 0)
                break
            
            edx_1 = arg1
        
        int32_t eax_8 = *(ebp_1 + (esi_2 << 2) + 4)
        esi_2 += 1
        int16_t* ebp_2 = edx_1 + (eax_8 << 1)
        
        if (*(edx_1 + (eax_8 << 1)) != 0)
        label_655028:
            
            if (sub_654840(ebx, &edi_3[2]) != 0)
                uint32_t eax_12 = zx.d(*ebp_2)
                
                if (eax_12.w s>= 0)
                    result = eax_12 + eax_2
                else
                    result = eax_12 + eax_3
                
                *ebp_2 = result.w
        else
            while (true)
                if (sub_654840(ebx, &edi_3[1]) != 0)
                    int16_t edx_7 = eax_2.w
                    
                    if (sub_654840(ebx, ebp + 0xbc) != 0)
                        edx_7 = eax_3.w
                    
                    *ebp_2 = edx_7
                    break
                
                edi_3 = &edi_3[3]
                
                if (esi_2 s>= ebx[0x5f])
                    *(*ebx + 0x14) = 0x75
                    (*(*ebx + 4))(ebx, 0xffffffff)
                    *(ebp + 0x14) = 0xffffffff
                    goto label_6550b3
                
                esi_2 += 1
                int32_t eax_11 = *(var_c_1 + (esi_2 << 2))
                ebp_2 = arg1 + (eax_11 << 1)
                
                if (*(arg1 + (eax_11 << 1)) != 0)
                    goto label_655028
        
        if (esi_2 s>= ebx[0x5f])
            break
        
        ebp_1 = var_c_1
        edx_1 = arg1
        ecx_3 = var_8_1
        eax_7 = var_4_1

label_6550b3:
result.b = 1
return result
