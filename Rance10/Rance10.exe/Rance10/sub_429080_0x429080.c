// 函数: sub_429080
// 地址: 0x429080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *arg1

if (*(eax + 0xd) == 0)
    int32_t* ecx = *(eax + 8)
    
    if (*(ecx + 0xd) == 0)
        int32_t* eax_1 = *ecx
        
        while (*(eax_1 + 0xd) == 0)
            ecx = eax_1
            eax_1 = *ecx
        
        *arg1 = ecx
        return arg1
    
    void* eax_3 = *(eax + 4)
    
    if (*(eax_3 + 0xd) == 0)
        while (*arg1 == *(eax_3 + 8))
            *arg1 = eax_3
            eax_3 = *(eax_3 + 4)
            
            if (*(eax_3 + 0xd) != 0)
                break
    
    *arg1 = eax_3

return arg1
