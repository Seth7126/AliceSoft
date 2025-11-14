// 函数: sub_5d9b70
// 地址: 0x5d9b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg2 + 0x16c

if (esi == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t i = 0

if (((*(esi + 0xc) - *(esi + 8)) & 0xfffffffc) s> 0)
    do
        void* esi_2 = *(*(esi + 8) + (i << 2))
        
        if (esi_2 != 0)
            int32_t eax_3 = *(esi_2 + 0x14)
            
            if (eax_3 == 0)
                int32_t ecx = *(arg2 + 0x150)
                
                if (ecx u< (*(arg2 + 0xf4) - *(arg2 + 0xf0)) s>> 4)
                    int32_t ecx_1 = ecx << 4
                    
                    if (ecx_1 != neg.d(*(arg2 + 0xf0)))
                        int32_t* eax_7 = *(ecx_1 + *(arg2 + 0xf0) + 0xc)
                        
                        if (eax_7 != 0)
                            sub_5d9cc0(arg1, arg2, esi_2, eax_7)
            else if (eax_3 == 1)
                int32_t ecx_4 = *(esi_2 + 0x24)
                
                if (ecx_4 s>= 0 && ecx_4 u< (*(arg2 + 0xf4) - *(arg2 + 0xf0)) s>> 4)
                    int32_t ecx_5 = ecx_4 << 4
                    
                    if (ecx_5 != neg.d(*(arg2 + 0xf0)))
                        void* eax_11 = *(ecx_5 + *(arg2 + 0xf0) + 8)
                        
                        if (eax_11 != 0)
                            sub_5d9cc0(arg1, arg2, esi_2, eax_11 + 0x3c)
            else if (eax_3 == 4)
                int32_t eax_13 = *(esi_2 + 0x24)
                
                if (eax_13 s>= 0)
                    void* eax_14 = sub_5bda60(arg2 + 0x48, eax_13)
                    
                    if (eax_14 != 0)
                        void* eax_15 = *(eax_14 + 4)
                        
                        if (eax_15 != 0)
                            sub_5d9cc0(arg1, arg2, esi_2, eax_15 + 0x20)
            else if (eax_3 != 3)
                if (eax_3 == 5)
                    sub_5d9e40(arg1, arg2, esi_2)
            else if (*(esi_2 + 0x3c) == 0x1e)
                sub_5d9fb0(arg1, arg2, esi_2)
        
        esi = arg2 + 0x16c
        i += 1
    while (i s< (*(arg2 + 0x178) - *(esi + 8)) s>> 2)

int32_t eax_2
eax_2.b = 1
return eax_2
