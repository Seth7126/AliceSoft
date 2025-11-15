// 函数: sub_429da0
// 地址: 0x429da0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *arg1

if (*(eax + 0xd) != 0)
    *arg1 = eax[2]
    return arg1

int32_t* ecx = *eax

if (*(ecx + 0xd) != 0)
    ecx = eax[1]
    
    if (*(ecx + 0xd) == 0)
        while (*arg1 == *ecx)
            *arg1 = ecx
            ecx = ecx[1]
            
            if (*(ecx + 0xd) != 0)
                break
    
    if (*(*arg1 + 0xd) == 0)
        *arg1 = ecx
else
    void* eax_3 = ecx[2]
    
    if (*(eax_3 + 0xd) == 0)
        void* ecx_1
        
        do
            ecx_1 = eax_3
            eax_3 = *(ecx_1 + 8)
        while (*(eax_3 + 0xd) == 0)
        
        *arg1 = ecx_1
        return arg1
    
    *arg1 = ecx

return arg1
