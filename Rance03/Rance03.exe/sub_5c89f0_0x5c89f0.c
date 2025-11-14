// 函数: sub_5c89f0
// 地址: 0x5c89f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t eax_1 = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t var_c = eax_1
void* eax_3 = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t edi = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* eax_6 = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
arg1[0x8d] -= 4
void* edx = *arg1[0x8d]
int32_t eax_11 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (edx u< eax_11)
    eax_11 = arg1[0x5d]
    edx = *(eax_11 + (edx << 2))
    
    if (edx != 0)
        uint32_t eax_13 = *(edx + 0xc) u>> 2
        
        if (ebx u>= eax_13)
            return sub_5c24e0(eax_13, edx, &arg1[0x5b], arg1, 0x6e85a0)
        
        int32_t eax_14
        
        if (*(edx + 0xc) != 0)
            eax_14 = *(edx + 8)
        else
            eax_14 = 0
        
        int32_t ebx_1 = *(eax_14 + (ebx << 2))
        int32_t eax_17 = (arg1[0x5e] - arg1[0x5d]) s>> 2
        
        if (ebx_1 u< eax_17)
            eax_17 = arg1[0x5d]
            void* ebx_2 = *(eax_17 + (ebx_1 << 2))
            
            if (ebx_2 != 0)
                int32_t eax_20 = (arg1[0x5e] - arg1[0x5d]) s>> 2
                
                if (edi u< eax_20)
                    eax_20 = arg1[0x5d]
                    uint32_t edi_1 = *(eax_20 + (edi << 2))
                    
                    if (edi_1 != 0)
                        var_c = var_c
                        int32_t* var_20 = &var_c
                        char eax_22
                        int32_t edx_1
                        eax_22, edx_1 = sub_5d6650(&arg1[0x5b], ebx_2, edi_1, eax_3, eax_6)
                        
                        if (eax_22 != 0)
                            return sub_5ddf10(&arg1[0x88], var_c)
                        
                        uint32_t var_20_1 = *(edi_1 + 0xc) u>> 2
                        uint32_t eax_26 = *(ebx_2 + 0xc) u>> 2
                        uint32_t var_24_1 = eax_26
                        int32_t var_28_1 = var_c
                        int32_t* var_2c_1 = eax_6
                        void* var_30_1 = eax_3
                        return sub_5c24e0(eax_26, edx_1, &arg1[0x5b], arg1, 0x6e85d8)
                
                return sub_5c24e0(eax_20, edx, &arg1[0x5b], arg1, 0x6e8650)
        
        return sub_5c24e0(eax_17, edx, &arg1[0x5b], arg1, 0x6e856c)

return sub_5c24e0(eax_11, edx, &arg1[0x5b], arg1, 0x6e8534)
