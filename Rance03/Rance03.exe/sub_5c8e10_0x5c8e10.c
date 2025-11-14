// 函数: sub_5c8e10
// 地址: 0x5c8e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = arg1[0x8d]
int32_t ecx = *(eax - 4)
int32_t edx = *(eax - 8)
int32_t* ecx_1 = *(eax - 0xc)
arg1[0x8d] = eax - 0xc
int32_t eax_4 = (arg1[0x5e] - arg1[0x5d]) s>> 2
int32_t* var_c = ecx_1

if (ecx_1 u< eax_4)
    eax_4 = arg1[0x5d]
    ecx_1 = *(eax_4 + (ecx_1 << 2))
    
    if (ecx_1 != 0)
        eax_4 = ecx_1[3] u>> 2
        
        if (edx u< eax_4)
            int32_t ecx_2
            
            if (ecx_1[3] != 0)
                ecx_2 = ecx_1[2]
            else
                ecx_2 = 0
            
            int32_t* ecx_3 = *(ecx_2 + (edx << 2))
            int32_t eax_8 = (arg1[0x5e] - arg1[0x5d]) s>> 2
            
            if (ecx_3 u< eax_8)
                eax_8 = arg1[0x5d]
                void* edi_1 = *(eax_8 + (ecx_3 << 2))
                
                if (edi_1 != 0)
                    uint32_t ebp_1
                    
                    if (*(edi_1 + 0x48) != 0)
                        ebp_1 = *(edi_1 + 0xc) u>> 2
                    else
                        ebp_1 = 0
                    
                    uint32_t eax_9
                    int32_t* ecx_4
                    int32_t edx_1
                    eax_9, ecx_4, edx_1 = sub_5d7310(edi_1, ebp_1 + 1)
                    
                    if (eax_9.b == 0)
                        char const* const var_20_1 = "A_PUSHBACK"
                        return sub_5c24e0(eax_9, edx_1, ecx_4, arg1, 0x6e8374)
                    
                    int32_t eax_11 = *(edi_1 + 0x3c)
                    int32_t var_4
                    
                    if (eax_11 == 0x10)
                        uint32_t eax_23
                        int32_t* ecx_11
                        int32_t edx_5
                        eax_23, ecx_11, edx_5 = sub_5d3550(edi_1, ebp_1, &var_4)
                        
                        if (eax_23.b == 0)
                            int32_t* var_20_8 = var_c
                            return sub_5c24e0(eax_23, edx_5, ecx_11, arg1, 0x6e8340)
                        
                        int32_t eax_25
                        int32_t* ecx_13
                        int32_t edx_6
                        eax_25, ecx_13, edx_6 = sub_5d5e80(&arg1[0x5b], var_4)
                        
                        if (eax_25.b != 0)
                            return sub_5d3520(edi_1, ebp_1, ecx)
                        
                        int32_t* var_20_10 = var_c
                        return sub_5c24e0(eax_25, edx_6, ecx_13, arg1, 0x6e83d4)
                    
                    if (eax_11 != 0x11)
                        return sub_5d3520(edi_1, ebp_1, ecx)
                    
                    uint32_t eax_17
                    int32_t* ecx_6
                    int32_t edx_2
                    eax_17, ecx_6, edx_2 = sub_5d3550(edi_1, ebp_1, &var_4)
                    
                    if (eax_17.b == 0)
                        int32_t* var_20_4 = var_c
                        return sub_5c24e0(eax_17, edx_2, ecx_6, arg1, 0x6e83a0)
                    
                    int32_t eax_19
                    int32_t* ecx_8
                    int32_t edx_3
                    eax_19, ecx_8, edx_3 = sub_5d7290(&arg1[0x5b], var_4, ecx)
                    
                    if (eax_19.b == 0)
                        return sub_5c24e0(eax_19, edx_3, ecx_8, arg1, 0x6e8404)
                    
                    int32_t result
                    int32_t* ecx_10
                    int32_t edx_4
                    result, ecx_10, edx_4 = sub_5d5e80(&arg1[0x5b], ecx)
                    
                    if (result.b != 0)
                        return result
                    
                    return sub_5c24e0(result, edx_4, ecx_10, arg1, 0x6e8440)
            
            char const* const var_20_12 = "A_PUSHBACK"
            int32_t* var_24_9 = ecx_3
            return sub_5c24e0(eax_8, edx, ecx_3, arg1, 0x6e830c)

char const* const var_20_13 = "A_PUSHBACK"
return sub_5c24e0(eax_4, edx, ecx_1, arg1, 0x6e82d0)
