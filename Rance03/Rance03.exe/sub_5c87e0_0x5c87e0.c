// 函数: sub_5c87e0
// 地址: 0x5c87e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg1
edi[0x8d] -= 4
int32_t edx = *edi[0x8d]
edi[0x8d] -= 4
int32_t esi = *edi[0x8d]
int32_t eax_4 = (edi[0x5e] - edi[0x5d]) s>> 2

if (esi u< eax_4)
    eax_4 = edi[0x5d]
    arg1 = *(eax_4 + (esi << 2))
    
    if (arg1 != 0)
        eax_4 = arg1[3] u>> 2
        
        if (edx u< eax_4)
            int32_t ebx_1
            
            if (arg1[3] != 0)
                ebx_1 = arg1[2]
            else
                ebx_1 = 0
            
            int32_t ebx_2 = *(ebx_1 + (edx << 2))
            int32_t eax_8 = (edi[0x5e] - edi[0x5d]) s>> 2
            
            if (ebx_2 u< eax_8)
                eax_8 = edi[0x5d]
                void* esi_1 = *(eax_8 + (ebx_2 << 2))
                
                if (esi_1 != 0)
                    if (*(esi_1 + 0x48) == 0)
                        return eax_8
                    
                    int32_t eax_10
                    
                    if (*(esi_1 + 0x38) == 0)
                        eax_10 = *(esi_1 + 0x3c) - 0x10
                    
                    if (*(esi_1 + 0x38) != 0 || eax_10 u<= 1)
                        int32_t ecx_1
                        int32_t edx_1
                        eax_10, ecx_1, edx_1 = sub_5d4ad0(esi_1)
                        
                        if (eax_10.b == 0)
                            int32_t var_10_1 = ebx_2
                            int32_t var_14_1 = 0x6e7f10
                            return sub_5c2400(eax_10, edx_1, ecx_1, edi, "A_FREE")
                    
                    *(esi_1 + 0xc) = 0
                    *(esi_1 + 0x48) = 0
                    return eax_10
            
            return sub_5c24e0(eax_8, edx, arg1, edi, 0x6e7f34)

int32_t var_10_2 = edx
int32_t var_14_3 = esi
int32_t var_18_1 = 0x6e7ed4
return sub_5c2400(eax_4, edx, arg1, edi, "A_FREE")
