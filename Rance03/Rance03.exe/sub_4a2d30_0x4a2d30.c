// 函数: sub_4a2d30
// 地址: 0x4a2d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x4a0) == 0)
    int32_t eax_3 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
    
    if (eax_3 s<= 0)
        return nullptr
    
    int32_t var_4_1 = eax_3
    arg1 = sub_4a56f0(*(arg1 + 0x54))
    
    if (arg1 != 0)
        while (true)
            if (*(arg1 + 0x4a0) != 0)
                return arg1
            
            int32_t eax_7 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
            
            if (eax_7 s<= 0)
                return nullptr
            
            int32_t var_4_2 = eax_7
            void* eax_8 = sub_4a56f0(*(arg1 + 0x54))
            arg1 = eax_8
            
            if (arg1 == 0)
                return eax_8

return arg1
