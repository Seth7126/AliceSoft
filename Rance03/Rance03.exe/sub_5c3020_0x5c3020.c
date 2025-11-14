// 函数: sub_5c3020
// 地址: 0x5c3020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t edi = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t edx = **(arg1 + 0x234)

if (edx u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
    void* esi_1 = *(*(arg1 + 0x174) + (edx << 2))
    
    if (esi_1 != 0 && edi u< *(esi_1 + 0xc) u>> 2)
        if (*(esi_1 + 0xc) != 0)
            return sub_5ddf10(arg1 + 0x220, *(*(esi_1 + 8) + (edi << 2)))
        
        return sub_5ddf10(arg1 + 0x220, *(edi << 2))

uint32_t eax_31

if (edx s< 0)
    eax_31 = 0xffffffff
else
    if (edx s< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
        void* eax_15 = *(*(arg1 + 0x174) + (edx << 2))
        
        if (eax_15 != 0)
            eax_15.b = *(eax_15 + 0x14) == 3
            
            if (eax_15.b != 0)
                if (edx s< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                    void* eax_20 = *(*(arg1 + 0x174) + (edx << 2))
                    
                    if (eax_20 != 0)
                        uint32_t eax_22 = *(eax_20 + 0xc) u>> 2
                        uint32_t var_10_2 = eax_22
                        int32_t var_14 = edi
                        int32_t var_18 = edx
                        int32_t var_1c = 0x6e68d0
                        return sub_5c2400(eax_22, edx, arg1, arg1, 0x6e6950)
                
                int32_t var_10_3 = 0xffffffff
                int32_t var_14_1 = edi
                int32_t var_18_1 = edx
                int32_t var_1c_1 = 0x6e68d0
                return sub_5c2400(0xffffffff, edx, arg1, arg1, 0x6e6950)
    
    if (edx s< 0 || edx s>= (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
        eax_31 = 0xffffffff
    else
        void* eax_29 = *(*(arg1 + 0x174) + (edx << 2))
        
        if (eax_29 == 0)
            eax_31 = 0xffffffff
        else
            eax_31 = *(eax_29 + 0xc) u>> 2

uint32_t var_10_4 = eax_31
int32_t var_14_2 = edi
int32_t var_18_2 = edx
int32_t var_1c_2 = 0x6e6914
return sub_5c2400(eax_31, edx, arg1, arg1, 0x6e697c)
