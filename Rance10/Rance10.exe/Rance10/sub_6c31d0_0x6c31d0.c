// 函数: sub_6c31d0
// 地址: 0x6c31d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0)
    sub_6b3120(&arg1[0x25])
    sub_6b3540(&arg1[0x1e])
    sub_6b7a10(&(*arg1)[0x1e])
    
    if ((*arg1)[0x12] != 0)
        uint32_t eax_1 = (*arg1)[0xd]
        
        if (eax_1 != 0)
            int32_t i = 0
            
            if (eax_1 s> 0)
                int32_t ebx_1 = 0
                int32_t ebp_1 = 0
                
                do
                    sub_6b8320((*arg1)[0x12] + ebp_1)
                    sub_6b82c0((*arg1)[0x13] + ebx_1)
                    i += 1
                    ebp_1 += 0x20
                    ebx_1 += 0x10
                while (i s< (*arg1)[0xd])
            
            _free((*arg1)[0x12])
            _free((*arg1)[0x13])
    
    uint32_t eax_2 = (*arg1)[0xf]
    
    if (eax_2 != 0)
        _free(eax_2)
    
    uint32_t eax_3 = (*arg1)[0x11]
    
    if (eax_3 != 0)
        _free(eax_3)
    
    uint32_t eax_4 = arg1[4][0]
    
    if (eax_4 != 0)
        _free(eax_4)
    
    uint32_t eax_5 = (*arg1)[0xe]
    
    if (eax_5 != 0)
        _free(eax_5)
    
    if (arg1 != 0xffffffe8)
        uint32_t eax_6 = (*arg1)[6]
        
        if (eax_6 != 0)
            _free(eax_6)
        
        __builtin_memset(&(*arg1)[6], 0, 0x1c)
    
    uint32_t eax_7 = *arg1
    
    if (eax_7 != 0)
        uint32_t ecx_7 = (*arg1)[0xb2]
        
        if (ecx_7 != 0)
            ecx_7(eax_7)
    
    _memset(arg1, 0, 0x2d0)

return 0
