// 函数: sub_5c80f0
// 地址: 0x5c80f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1
*(esi + 0x234) -= 4
int32_t eax_1 = **(esi + 0x234)
*(esi + 0x234) -= 4
int32_t eax_3 = **(esi + 0x234)
*(esi + 0x234) -= 4
int32_t eax_5 = **(esi + 0x234)
*(esi + 0x234) -= 4
int32_t ebp = **(esi + 0x234)
*(esi + 0x234) -= 4
int32_t edx = **(esi + 0x234)
int32_t eax_10 = (*(esi + 0x178) - *(esi + 0x174)) s>> 2

if (edx u< eax_10)
    eax_10 = *(esi + 0x174)
    arg1 = *(eax_10 + (edx << 2))
    
    if (arg1 != 0)
        eax_10 = *(arg1 + 0xc) u>> 2
        
        if (ebp u< eax_10)
            int32_t edi_1
            
            if (*(arg1 + 0xc) != 0)
                edi_1 = *(arg1 + 8)
            else
                edi_1 = 0
            
            int32_t edi_2 = *(edi_1 + (ebp << 2))
            int32_t var_c
            int32_t eax_12
            int32_t ecx_1
            int32_t edx_1
            eax_12, ecx_1, edx_1 = sub_5d73d0(esi + 0x16c, eax_5, eax_3, &var_c)
            
            if (eax_12.b == 0)
                int32_t var_28_1 = eax_3
                int32_t var_2c_1 = eax_5
                int32_t var_30_1 = 0x6e7c04
                return sub_5c2400(eax_12, edx_1, ecx_1, esi, "OBJSWAP")
            
            uint32_t eax_15 = eax_1 - 0xa
            
            if (eax_15 u<= 0x28)
                eax_15 = zx.d(lookup_table_5c8300[eax_15])
                int32_t result
                
                switch (eax_15)
                    case 0
                        int32_t eax_16
                        int32_t ecx_3
                        int32_t edx_2
                        eax_16, ecx_3, edx_2 = sub_5d7430(esi + 0x16c, edx, ebp, var_c)
                        
                        if (eax_16.b == 0)
                            int32_t var_28_3 = ebp
                            int32_t var_2c_3 = edx
                            int32_t var_30_3 = 0x6e7c3c
                            return sub_5c2400(eax_16, edx_2, ecx_3, esi, "OBJSWAP")
                        
                        int32_t ecx_5
                        int32_t edx_3
                        result, ecx_5, edx_3 = sub_5d7430(esi + 0x16c, eax_5, eax_3, edi_2)
                        
                        if (result.b != 0)
                            return result
                        
                        int32_t var_28_5 = eax_3
                        int32_t var_2c_5 = eax_5
                        int32_t var_30_5 = 0x6e7c74
                        return sub_5c2400(result, edx_3, ecx_5, esi, "OBJSWAP")
                    case 1
                        int32_t ebp_2 = var_c
                        int32_t ecx_7
                        int32_t edx_4
                        result, ecx_7, edx_4 = sub_5d7510(esi + 0x16c, edi_2, ebp_2)
                        
                        if (result.b != 0)
                            return result
                        
                        int32_t var_28_7 = ebp_2
                        int32_t var_2c_7 = edi_2
                        int32_t var_30_6 = 0x6e7cac
                        return sub_5c2400(result, edx_4, ecx_7, esi, "OBJSWAP")
                    case 2
                        int32_t ebp_3 = var_c
                        int32_t ecx_9
                        int32_t edx_5
                        result, ecx_9, edx_5 = sub_5d7670(esi + 0x16c, edi_2, ebp_3)
                        
                        if (result.b != 0)
                            return result
                        
                        int32_t var_28_9 = ebp_3
                        int32_t var_2c_9 = edi_2
                        int32_t var_30_7 = 0x6e7cec
                        return sub_5c2400(result, edx_5, ecx_9, esi, "OBJSWAP")
            
            int32_t var_28_10 = 0x6e7d2c
            return sub_5c2400(eax_15, edx_1, ecx_1, esi, "OBJSWAP")

int32_t var_28_11 = ebp
int32_t var_2c_10 = edx
int32_t var_30_9 = 0x6e7bc8
return sub_5c2400(eax_10, edx, arg1, esi, "OBJSWAP")
