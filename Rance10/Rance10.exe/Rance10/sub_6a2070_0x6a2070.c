// 函数: sub_6a2070
// 地址: 0x6a2070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0 && *(arg1 + 0x20) != 0)
    int32_t ecx = *(arg1 + 0x24)
    
    if (ecx != 0)
        int32_t* eax_1 = *(arg1 + 0x1c)
        
        if (eax_1 != 0 && *eax_1 == arg1)
            int32_t edx_1 = eax_1[1]
            
            if (edx_1 s>= 0x3f34 && edx_1 s<= 0x3f53)
                int32_t eax_2 = eax_1[0xe]
                
                if (eax_2 != 0)
                    ecx(*(arg1 + 0x28), eax_2)
                
                (*(arg1 + 0x24))(*(arg1 + 0x28), *(arg1 + 0x1c))
                *(arg1 + 0x1c) = 0
                return 0

return 0xfffffffe
