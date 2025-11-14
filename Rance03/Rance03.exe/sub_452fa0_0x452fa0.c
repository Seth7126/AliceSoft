// 函数: sub_452fa0
// 地址: 0x452fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i_1 = *(arg1 + 0x44)
void* i = i_1
int32_t ecx = *(arg1 + 0x48)
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx

for (; i != ecx; i += 0x18)
    int32_t ebp_1 = *(i + 4)
    int32_t esi_1 = *(i + 8)
    
    if (ebp_1 != esi_1 && arg4 u>= *(i + 0x10) && arg4 u<= *(i + 0x14))
        int32_t edi_1 = 0
        int32_t esi_3 = (esi_1 - ebp_1) s>> 2
        
        if (esi_3 s> 0)
            int32_t ebx_2 = 1
            
            do
                int32_t ecx_3 = *(ebp_1 + (edi_1 << 2))
                
                if (ecx_3 != 0xffffffff)
                    int32_t eax_1 = ebx_2
                    
                    if (ebx_2 s< esi_3)
                        void* ecx_2 = (edi_1 << 2) + 4 + ebp_1
                        
                        while (*ecx_2 == 0xffffffff)
                            eax_1 += 1
                            ecx_2 += 4
                            
                            if (eax_1 s>= esi_3)
                                break
                        
                        ecx_3 = *(ebp_1 + (edi_1 << 2))
                    
                    if (eax_1 s< esi_3 && arg4 u>= ecx_3 && arg4 u< *(ebp_1 + (eax_1 << 2)))
                        *arg2 = (i - i_1) s/ 0x18
                        *arg3 = edi_1
                        return arg3
                
                edi_1 += 1
                ebx_2 += 1
            while (edi_1 s< esi_3)
            
            ecx = var_8

*arg2 = 0xffffffff
*arg3 = 0xffffffff
return arg3
