// 函数: sub_4a2a30
// 地址: 0x4a2a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_2 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)

if (eax_2 s> 0)
    int32_t var_8_1 = eax_2
    void* eax_3 = sub_4a56f0(*(arg1 + 0x54))
    
    if (eax_3 != 0)
        int32_t* ecx_1 = *(eax_3 + 0x5c)
        
        if (ecx_1 != 0 && (*(*ecx_1 + 8))(1) s>= 0xa)
            int32_t eax_8 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
            
            if (eax_8 s> 0)
                int32_t var_8_2 = eax_8
                void* eax_9 = sub_4a56f0(*(arg1 + 0x54))
                
                if (eax_9 != 0)
                    jump(*(**(eax_9 + 0x5c) + 0x3c))
            
            return 1
        
        jump(*(**(arg1 + 0x5c) + 0x3c))

jump(*(**(arg1 + 0x5c) + 0x3c))
