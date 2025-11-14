// 函数: sub_5c7480
// 地址: 0x5c7480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
void* ebx = arg1 + 0x220
int32_t esi = **(arg1 + 0x234)
*(ebx + 0x14) -= 4
int32_t edi = **(ebx + 0x14)
int32_t eax_4 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
void* edx

if (edi u< eax_4)
    eax_4 = *(arg1 + 0x174)
    edx = *(eax_4 + (edi << 2))
    
    if (edx != 0)
        eax_4 = *(edx + 0xc) u>> 2
        
        if (esi u< eax_4)
            int32_t edx_1
            
            if (*(edx + 0xc) != 0)
                edx_1 = *(edx + 8)
            else
                edx_1 = 0
            
            int32_t edx_2 = *(edx_1 + (esi << 2))
            int32_t eax_8 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
            
            if (edx_2 u< eax_8)
                eax_8 = *(*(arg1 + 0x174) + (edx_2 << 2))
                
                if (eax_8 != 0)
                    if (*(eax_8 + 0xc) != 0)
                        char* eax_10 = *(eax_8 + 8)
                        
                        if (eax_10 != 0)
                            do
                                arg1.b = *eax_10
                                eax_10 = &eax_10[1]
                            while (arg1.b != 0)
                            
                            return sub_5ddf10(ebx, eax_10 - &eax_10[1])
                    
                    return sub_5ddf10(ebx, 0)
            
            int32_t var_10_1 = edx_2
            int32_t var_14 = 0x6e7a90
            return sub_5c2400(eax_8, edx_2, arg1, arg1, "S_LENGTHBYTE")

int32_t var_10_2 = esi
int32_t var_14_1 = edi
int32_t var_18 = 0x6e79e8
return sub_5c2400(eax_4, edx, arg1, arg1, "S_LENGTHBYTE")
