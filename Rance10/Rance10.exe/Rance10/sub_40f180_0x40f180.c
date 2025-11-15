// 函数: sub_40f180
// 地址: 0x40f180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** eax = arg4

if (eax[4] u>= 2)
    int32_t edx = eax[5]
    void** esi_1
    
    if (edx u< 0x10)
        esi_1 = eax
    else
        esi_1 = *eax
    
    if (*esi_1 == 0x5c)
        if (edx u>= 0x10)
            eax = *eax
        
        switch (sx.d(*(eax + 1)) - 0x22)
            case 0
                *arg3 = 0x22
                return 2
            case 5
                *arg3 = 0x27
                return 2
            case 0x3a
                *arg3 = 0x5c
                return 2
            case 0x4c
                *arg3 = 0xa
                return 2
            case 0x50
                *arg3 = 0xd
                return 2
            case 0x52
                *arg3 = 9
                return 2
        
        *arg3 = 0x5c
        return 1

return 0
