// 函数: sub_5c8b80
// 地址: 0x5c8b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t edx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t eax_2 = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t var_8 = eax_2
int32_t eax_4 = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx = *arg1[0x8d]
int32_t eax_9 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx u< eax_9)
    eax_9 = arg1[0x5d]
    ecx = *(eax_9 + (ecx << 2))
    
    if (ecx != 0)
        uint32_t eax_11 = ecx[3] u>> 2
        
        if (ebx u>= eax_11)
            return sub_5c24e0(eax_11, edx, ecx, arg1, 0x6e8684)
        
        int32_t eax_12
        
        if (ecx[3] != 0)
            eax_12 = ecx[2]
        else
            eax_12 = 0
        
        int32_t ebx_1 = *(eax_12 + (ebx << 2))
        int32_t eax_15 = (arg1[0x5e] - arg1[0x5d]) s>> 2
        
        if (ebx_1 u< eax_15)
            eax_15 = arg1[0x5d]
            void* ebx_2 = *(eax_15 + (ebx_1 << 2))
            
            if (ebx_2 != 0)
                var_8 = var_8
                uint32_t eax_17
                int32_t* ecx_2
                int32_t edx_1
                eax_17, ecx_2, edx_1 = sub_5d6b10(&arg1[0x5b], ebx_2, eax_4, &var_8, edx)
                
                if (eax_17.b == 0)
                    return sub_5c24e0(eax_17, edx_1, ecx_2, arg1, 0x6e86e8)
                
                uint32_t eax_20 = *(ebx_2 + 0x3c) - 0xe
                
                if (eax_20 u<= 0x34)
                    eax_20 = zx.d(lookup_table_5c8d44[eax_20])
                    
                    switch (eax_20)
                        case 0
                            return sub_5ddf10(&arg1[0x88], var_8)
                        case 1
                            int32_t eax_21
                            int32_t* ecx_4
                            int32_t edx_2
                            eax_21, ecx_4, edx_2 = sub_5d5e80(&arg1[0x5b], edx)
                            
                            if (eax_21.b == 0)
                                return sub_5c24e0(eax_21, edx_2, ecx_4, arg1, 0x6e874c)
                            
                            return sub_5ddf10(&arg1[0x88], var_8)
                        case 2
                            int32_t eax_23
                            int32_t* ecx_6
                            int32_t edx_3
                            eax_23, ecx_6, edx_3 = sub_5d5e80(&arg1[0x5b], edx)
                            
                            if (eax_23.b == 0)
                                return sub_5c24e0(eax_23, edx_3, ecx_6, arg1, 0x6e8780)
                            
                            return sub_5ddf10(&arg1[0x88], var_8)
                
                int32_t var_20_4 = 0x6e87cc
                return sub_5c24e0(eax_20, edx_1, ecx_2, arg1, "A_FILL")
        
        return sub_5c24e0(eax_15, edx, ecx, arg1, 0x6e8718)

return sub_5c24e0(eax_9, edx, ecx, arg1, 0x6e86b8)
