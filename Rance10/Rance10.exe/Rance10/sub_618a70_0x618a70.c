// 函数: sub_618a70
// 地址: 0x618a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp = arg2
int32_t* ecx = arg3
int32_t edi_2 = (ecx[1] - *ecx) s>> 2
int32_t result = (ebp[2] - *ebp) s>> 4

if (result u< edi_2)
    if (edi_2 u> 0xfffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    result = sub_61b4b0(ebp, edi_2)
    ecx = arg3

int32_t edi_3 = edi_2 - 1

if (edi_2 - 1 s>= 0)
    int32_t* ebx_1 = arg4
    void* edx_1 = arg1 + 0x1f4
    void* var_4_1 = edx_1
    int32_t temp2_1
    
    do
        int32_t* eax_3 = *(*ecx + (edi_3 << 2))
        arg2 = eax_3
        
        if (eax_3 == 0x4a)
            arg2 = ebx_1
        else if (eax_3 == 0x4b)
            if (ebx_1 - 0xa u> 0x52)
                arg2 = ebx_1
            else
                switch (ebx_1 + &jump_table_618bac[7]:2)
                    case &lookup_table_618bd4
                        arg2 = 0x12
                    case &lookup_table_618bd4[1]
                        arg2 = 0x13
                    case &lookup_table_618bd4[2]
                        arg2 = 0x14
                    case &lookup_table_618bd4[3]
                        arg2 = 0x15
                    case &lookup_table_618bd4[4], &lookup_table_618bd4[5], &lookup_table_618bd4[6], 
                            &lookup_table_618bd4[7], &lookup_table_618bd4[8], 
                            &lookup_table_618bd4[9], &lookup_table_618bd4[0xa], 
                            &lookup_table_618bd4[0xb], &lookup_table_618bd4[0xc], 
                            &lookup_table_618bd4[0xd], &lookup_table_618bd4[0xe], 
                            &lookup_table_618bd4[0xf], &lookup_table_618bd4[0x10], 
                            &lookup_table_618bd4[0x11], &lookup_table_618bd4[0x12], 
                            &lookup_table_618bd4[0x13], &lookup_table_618bd4[0x14], 
                            &lookup_table_618bd4[0x15], &lookup_table_618bd4[0x16], 
                            &lookup_table_618bd4[0x17], &lookup_table_618bd4[0x18], 
                            &lookup_table_618bd4[0x19], &lookup_table_618bd4[0x1a], 
                            &lookup_table_618bd4[0x1b], &lookup_table_618bd4[0x1c], 
                            &lookup_table_618bd4[0x1d], &lookup_table_618bd4[0x1e], 
                            &lookup_table_618bd4[0x1f], &lookup_table_618bd4[0x20], 
                            &lookup_table_618bd4[0x21], &lookup_table_618bd4[0x22], 
                            &lookup_table_618bd4[0x23], &lookup_table_618bd4[0x24], 
                            &lookup_table_618bd4[0x26], &lookup_table_618bd4[0x27], 
                            &lookup_table_618bd4[0x28], &lookup_table_618bd4[0x29], 
                            &lookup_table_618bd4[0x2a], &lookup_table_618bd4[0x2b], 
                            &lookup_table_618bd4[0x2c], &lookup_table_618bd4[0x2d], 
                            &lookup_table_618bd4[0x2e], &lookup_table_618bd4[0x2f], 
                            &lookup_table_618bd4[0x30], &lookup_table_618bd4[0x31], 
                            &lookup_table_618bd4[0x32], &lookup_table_618bd4[0x33], 
                            &lookup_table_618bd4[0x34], &lookup_table_618bd4[0x36], 
                            &lookup_table_618bd4[0x37], &lookup_table_618bd4[0x38], 
                            &lookup_table_618bd4[0x39], &lookup_table_618bd4[0x3a], 
                            &lookup_table_618bd4[0x3b], &lookup_table_618bd4[0x3c], 
                            &lookup_table_618bd4[0x3d], &lookup_table_618bd4[0x3e], 
                            &lookup_table_618bd4[0x3f], &lookup_table_618bd4[0x40], 
                            &lookup_table_618bd4[0x41], &lookup_table_618bd4[0x42], 
                            &lookup_table_618bd4[0x43], &lookup_table_618bd4[0x44], 
                            &lookup_table_618bd4[0x46], &lookup_table_618bd4[0x47], 
                            &lookup_table_618bd4[0x48], &lookup_table_618bd4[0x49], 
                            &lookup_table_618bd4[0x4a], &lookup_table_618bd4[0x4b], 
                            &lookup_table_618bd4[0x4d], &lookup_table_618bd4[0x4e], 
                            &lookup_table_618bd4[0x4f], &lookup_table_618bd4[0x50], 
                            &lookup_table_618bd4[0x51]
                        arg2 = ebx_1
                    case &lookup_table_618bd4[0x25]
                        arg2 = 0x33
                    case &lookup_table_618bd4[0x35]
                        arg2 = 0x43
                    case &lookup_table_618bd4[0x45]
                        arg2 = 0x50
                    case &lookup_table_618bd4[0x4c]
                        arg2 = 0x57
                    case &lookup_table_618bd4[0x52]
                        arg2 = 0x5d
        
        sub_61c410(ebp, &arg2, edx_1)
        result = ebp[1]
        void* esi_1 = *ebp
        
        if (esi_1 != result - 0x10 && result - 0x10 != result)
            arg4.b = 0
            int32_t var_1c_3 = 0
            result = sub_61dc50(result, result - 0x10, esi_1, result)
        
        temp2_1 = edi_3
        edi_3 -= 1
        ecx = arg3
        edx_1 = var_4_1
    while (temp2_1 - 1 s>= 0)

return result
