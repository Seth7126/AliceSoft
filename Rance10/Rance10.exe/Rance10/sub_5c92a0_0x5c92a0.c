// 函数: sub_5c92a0
// 地址: 0x5c92a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_3

if (*(*arg1 + 0x158) s> 0)
    __Smtx_lock_shared(&arg1[2])
    int32_t* esi_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    eax_3 = (*(*esi_1 + 0xa4))()

if (*(*arg1 + 0x158) s> 0 && eax_3.b != 0)
    eax_3.b = 1
else
    void* esi_2 = *arg1
    int32_t var_10 = 2
    void** var_c
    sub_42eb70(esi_2 + 0x138, &var_c, &var_10)
    void** eax_4 = var_c
    
    if (eax_4 != *(esi_2 + 0x138) && eax_4[5] s> 0)
        __Smtx_lock_shared(&arg1[2])
        int32_t* esi_3 = arg1[1]
        __Smtx_unlock_shared(&arg1[2])
        eax_3 = (*(*esi_3 + 0xa8))()
    
    if (eax_4 != *(esi_2 + 0x138) && eax_4[5] s> 0 && eax_3.b != 0)
        eax_3.b = 1
    else
        if (*(*arg1 + 0x15c) s> 0)
            __Smtx_lock_shared(&arg1[2])
            int32_t* esi_4 = arg1[1]
            __Smtx_unlock_shared(&arg1[2])
            eax_3 = (*(*esi_4 + 0xac))()
        
        if (*(*arg1 + 0x15c) s<= 0 || eax_3.b == 0)
            eax_3.b = 0
        else
            eax_3.b = 1

char ecx_1

if (arg1[0x87] s< 2 || arg1[0x88].b == 0)
    ecx_1 = 0
else
    ecx_1 = 1

if (eax_3.b != 0 && ecx_1 != 0)
    eax_3 = *arg1
    int32_t edi_4 = *(eax_3 + 0xc8)
    int32_t esi_5 = *(eax_3 + 0xcc)
    
    if (arg1[0x126] == edi_4 && arg1[0x127] == esi_5)
        goto label_5c93d0
    
    if (arg1[0x123].b == 0)
    label_5c93f0:
        char eax_10 = sub_5ca560(&arg1[0x124], edi_4, esi_5, 2, 0, 1, sub_431af0(&arg1[1]))
        
        if (eax_10 == 0)
            return eax_10
        
        arg1[0x123].b = 1
        return 1
    
    sub_5ca6e0(&arg1[0x124])
    arg1[0x123].b = 0
label_5c93d0:
    
    if (arg1[0x123].b == 0)
        goto label_5c93f0
else if (arg1[0x123].b != 0)
    sub_5ca6e0(&arg1[0x124])
    arg1[0x123].b = 0

eax_3.b = 1
return eax_3
