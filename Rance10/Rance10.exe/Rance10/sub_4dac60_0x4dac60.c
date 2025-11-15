// 函数: sub_4dac60
// 地址: 0x4dac60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xc) == 0)
    return 

while (*(arg1 + 0x10) != 0)
    int32_t eax_1
    
    if (*(arg1 + 0x4c) != 0 || *(arg1 + 0x44) != 0)
        eax_1 = 0
    else
        eax_1 = 1
    
    void* i = *(arg1 + 0x48) + eax_1
    void* i_2 = *(arg1 + 0x50)
    void* i_1 = i
    
    if (i_2 != 0xffffffff)
        i = i_2
        *(arg1 + 0x50) = 0xffffffff
        i_1 = i
    
    void* eax = arg3[1]
    int32_t* ecx = *arg3
    
    if (ecx != eax)
        while (*ecx != i)
            ecx = &ecx[1]
            
            if (ecx == eax)
                break
        
        if (ecx != eax)
            break
    
    sub_404370(arg3, &i_1)
    void* eax_2 = *(arg1 + 0x10)
    void* var_c
    void** ecx_2 = &var_c
    *(arg1 + 0x44) = 0
    void* eax_3 = *(eax_2 + 0x14)
    bool cond:0_1 = eax_3 s>= i_1
    var_c = eax_3
    
    if (cond:0_1)
        ecx_2 = &i_1
    
    void*** edi_1 = nullptr
    eax = *ecx_2
    
    if (eax s> 0)
        edi_1 = eax
    
    eax.b = arg4
    *(arg1 + 0x48) = edi_1
    
    if (eax.b == 0)
        sub_4dae30(arg1, edi_1)
        eax.b = arg4
    
    if (*(arg1 + 0x50) == 0xffffffff)
        if (arg2.b != 0 && eax.b == 0)
            sub_4daec0(arg1, edi_1, *(arg5 + 0xa8))
        
        sub_4daf10(arg1, edi_1, arg2, 1, arg5, arg6)
        break
    
    if (*(arg1 + 0xc) == 0)
        return 
