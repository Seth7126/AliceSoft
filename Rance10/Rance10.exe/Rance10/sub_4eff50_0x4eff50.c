// 函数: sub_4eff50
// 地址: 0x4eff50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0)
    int32_t var_8_1 = arg2
    void* eax_1 = sub_4f15e0(*(arg1 + 0x78))
    
    if (eax_1 != 0)
        int32_t edx_1 = *(eax_1 + 8)
        
        if (arg2 s>= edx_1 && *(eax_1 + 4) + edx_1 s> arg2)
            void* esi_2 = *(*(eax_1 + 0xc) + ((arg2 - edx_1) << 2))
            
            if (esi_2 != 0)
                int32_t* ecx_3 = *(esi_2 + 0x74)
                int32_t eax_4
                
                if (ecx_3 != 0)
                    eax_4 = (*(*ecx_3 + 8))(1)
                
                if (ecx_3 == 0 || eax_4 != 2)
                    int32_t* ecx_5 = *(esi_2 + 0x74)
                    
                    if (ecx_5 != 0 && (*(*ecx_5 + 8))(1) == 3)
                        int32_t* ecx_6 = *(esi_2 + 0x74)
                        
                        if (ecx_6 != 0 && (*(*ecx_6 + 8))(1) == 3)
                            return *(*(esi_2 + 0x74) + 0x118)
                else
                    int32_t* ecx_4 = *(esi_2 + 0x74)
                    
                    if (ecx_4 != 0 && (*(*ecx_4 + 8))(1) == 2)
                        return *(*(esi_2 + 0x74) + 0x118)

return 0
