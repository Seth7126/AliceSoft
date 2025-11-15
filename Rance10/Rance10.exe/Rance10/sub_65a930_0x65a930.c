// 函数: sub_65a930
// 地址: 0x65a930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x6a]

if (*(edi + 0x11) == 0)
    int32_t result
    
    while (true)
        result = (*(arg1[0x6b] + 4))(arg1)
        
        if (result == 0)
            return 0
        
        if (result != 1)
            break
        
        int32_t eax_3 = *(edi + 0x14)
        
        if (eax_3 == 0)
            if (*(edi + 0x10) == 0)
                *(*arg1 + 0x14) = 0x24
                (**arg1)(arg1)
            
            if (arg1[0x4c] != 0)
                sub_65a8c0(arg1)
                return 1
        else
            if (eax_3 == 1)
                sub_65a140(arg1)
            
            if (arg1[0x4c] != 0)
                *(edi + 0x14) = 0
                return 1
            
            *(edi + 0x14) = 2
    
    if (result != 2)
        return result
    
    *(edi + 0x11) = 1
    
    if (*(edi + 0x14) == result - 2)
        int32_t eax_14 = arg1[0x1f]
        
        if (arg1[0x21] s> eax_14)
            arg1[0x21] = eax_14
    else if (*(arg1[0x6b] + 0xd) != (result - 2).b)
        *(*arg1 + 0x14) = 0x3e
        (**arg1)(arg1)

return 2
