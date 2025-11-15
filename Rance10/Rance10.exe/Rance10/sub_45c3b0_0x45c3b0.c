// 函数: sub_45c3b0
// 地址: 0x45c3b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_6a7d20()
*arg3 = eax

if (eax != 0)
    int32_t ecx = *(eax + 0x274)
    int32_t* eax_1
    
    if (ecx == 0)
        eax_1 = sub_705e22()
    else
        eax_1 = ecx(eax, 0x10c)
    
    int32_t* esi_1 = eax_1
    
    if (esi_1 != 0)
        eax_1 = _memset(esi_1, 0, 0x10c)
    
    *arg2 = esi_1
    
    if (esi_1 != 0)
        int32_t* eax_2 = sub_6a43a0(*arg3)
        *arg4 = eax_2
        
        if (eax_2 != 0)
            eax_2.b = 1
            return eax_2
        
        sub_45c450(eax_2, arg2, arg3, arg4)
        int32_t eax_3
        eax_3.b = 0
        return eax_3
    
    sub_45c450(eax_1, arg2, arg3, arg4)

eax.b = 0
return eax
