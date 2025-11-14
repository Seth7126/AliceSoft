// 函数: sub_5d6570
// 地址: 0x5d6570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_2

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    eax_2 = *(*(arg1 + 8) + (arg2 << 2))
    
    if (eax_2 != 0)
        int32_t ecx = *(eax_2 + 0x24)
        void* edi = *(*(eax_2 + 0x1c) + 4)
        int32_t eax_7
        
        if (ecx u< (*(edi + 0xf4) - *(edi + 0xf0)) s>> 4)
            int32_t ecx_1 = ecx << 4
            
            if (ecx_1 != neg.d(*(edi + 0xf0)))
                eax_7 = *(ecx_1 + *(edi + 0xf0) + 4)
                
                if (eax_7 != 0)
                    int32_t eax_8 = *(eax_7 + 0x1c)
                    
                    if (eax_8 != 0xffffffff)
                        int32_t var_c = 0
                        return sub_5c4b50(*(arg1 + 4), arg2, eax_8) != 0
                    
                    eax_8.b = 1
                    return eax_8
        
        eax_7.b = 0
        return eax_7

eax_2.b = 0
return eax_2
