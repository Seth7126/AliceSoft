// 函数: sub_646f70
// 地址: 0x646f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*__errno() = 0

if (arg1[0xb0] != 0)
    if (*arg1 == 0)
        return 0
    
    int32_t result = arg1[0xb0](sub_63d0e0(&arg1[6], 0x800), 1, 0x800, *arg1)
    bool cond:0_1 = result != 0
    
    if (result s> 0)
        int32_t ecx_1 = arg1[7]
        
        if (ecx_1 s>= 0)
            int32_t eax_5 = arg1[8] + result
            
            if (eax_5 s<= ecx_1)
                arg1[8] = eax_5
        
        cond:0_1 = result != 0
    
    void* eax_6
    
    if (not(cond:0_1))
        eax_6 = __errno()
    
    if (cond:0_1 || *eax_6 == 0)
        return result

return 0xffffffff
