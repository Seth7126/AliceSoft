// 函数: sub_5ff020
// 地址: 0x5ff020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (*(*(arg1 + 0x20) + 0x10))()
int32_t result = 0

if (eax_1 s> 0)
    int32_t* ecx_1 = nullptr
    
    do
        int32_t eax_2
        
        if (*(arg1 + 0x14) != 0)
            eax_2 = *(arg1 + 0x10)
        else
            eax_2 = 0
        
        if (*(ecx_1 + eax_2) == arg2)
            int32_t eax_3
            
            if (*(arg1 + 0x14) != 0)
                eax_3 = *(arg1 + 0x10)
            else
                eax_3 = 0
            
            if (*(ecx_1 + eax_3 + 4) == arg3)
                return result
        
        result += 1
        ecx_1 = &ecx_1[3]
    while (result s< eax_1)

return 0xffffffff
