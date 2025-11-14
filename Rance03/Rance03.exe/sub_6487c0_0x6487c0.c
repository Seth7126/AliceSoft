// 函数: sub_6487c0
// 地址: 0x6487c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0)
    sub_638370(&arg1[0x250])
    sub_638740(&arg1[0x1e0])
    sub_63cf00(&arg1[0x78])
    
    if (*(arg1 + 0x48) != 0)
        int32_t eax_1 = *(arg1 + 0x34)
        
        if (eax_1 != 0)
            int32_t i = 0
            
            if (eax_1 s> 0)
                int32_t ebx_1 = 0
                int32_t ebp_1 = 0
                
                do
                    sub_63d910(*(arg1 + 0x48) + ebp_1)
                    sub_63d8b0(*(arg1 + 0x4c) + ebx_1)
                    i += 1
                    ebp_1 += 0x20
                    ebx_1 += 0x10
                while (i s< *(arg1 + 0x34))
            
            _free(*(arg1 + 0x48))
            _free(*(arg1 + 0x4c))
    
    int32_t eax_2 = *(arg1 + 0x3c)
    
    if (eax_2 != 0)
        _free(eax_2)
    
    int32_t eax_3 = *(arg1 + 0x44)
    
    if (eax_3 != 0)
        _free(eax_3)
    
    int32_t eax_4 = *(arg1 + 0x40)
    
    if (eax_4 != 0)
        _free(eax_4)
    
    int32_t eax_5 = *(arg1 + 0x38)
    
    if (eax_5 != 0)
        _free(eax_5)
    
    if (arg1 != 0xffffffe8)
        int32_t eax_6 = *(arg1 + 0x18)
        
        if (eax_6 != 0)
            _free(eax_6)
        
        __builtin_memset(&arg1[0x18], 0, 0x1c)
    
    int32_t eax_7 = *arg1
    
    if (eax_7 != 0)
        int32_t ecx_7 = *(arg1 + 0x2c8)
        
        if (ecx_7 != 0)
            ecx_7(eax_7)
    
    _memset(arg1, 0, 0x2d0)

return 0
