// 函数: sub_6a0710
// 地址: 0x6a0710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg4 != 0)
    char* eax
    eax.b = *arg4
    
    if (eax.b == (*"1.2.11")[0])
        if (arg3 == 0)
            return arg3 - 2
        
        bool cond:0 = *(arg3 + 0x20) != 0
        *(arg3 + 0x18) = 0
        
        if (not(cond:0))
            *(arg3 + 0x20) = sub_6a3e70
            *(arg3 + 0x28) = 0
        
        if (*(arg3 + 0x24) == 0)
            *(arg3 + 0x24) = sub_6a3e90
        
        void** eax_3 = (*(arg3 + 0x20))(*(arg3 + 0x28), 1, 0x1bd0)
        
        if (eax_3 == 0)
            return &eax_3[-1]
        
        *(arg3 + 0x1c) = eax_3
        *eax_3 = arg3
        eax_3[0xe] = 0
        eax_3[1] = 0x3f34
        int32_t result = sub_6a06a0(arg3)
        
        if (result != 0)
            (*(arg3 + 0x24))(*(arg3 + 0x28), eax_3)
            *(arg3 + 0x1c) = 0
        
        return result

return 0xfffffffa
