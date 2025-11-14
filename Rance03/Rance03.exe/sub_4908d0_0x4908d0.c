// 函数: sub_4908d0
// 地址: 0x4908d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x10) == 0)
    return 

while (*(arg1 + 0x14) != 0)
    int32_t eax_1
    
    if (*(arg1 + 0x48) != 0 || *(arg1 + 0x40) != 0)
        eax_1 = 0
    else
        eax_1 = 1
    
    int32_t i = *(arg1 + 0x44) + eax_1
    int32_t i_2 = *(arg1 + 0x4c)
    int32_t i_1 = i
    
    if (i_2 != 0xffffffff)
        i = i_2
        *(arg1 + 0x4c) = 0xffffffff
        i_1 = i
    
    int32_t edx_1 = arg6[1]
    struct _EXCEPTION_REGISTRATION_RECORD** eax = *arg6
    
    if (eax != edx_1)
        while (*eax != i)
            eax = &eax[1]
            
            if (eax == edx_1)
                break
        
        if (eax != edx_1)
            break
    
    sub_4158d0(arg6, &i_1)
    void* eax_2 = *(arg1 + 0x14)
    int32_t var_10
    int32_t* ecx_2 = &var_10
    *(arg1 + 0x40) = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_c = nullptr
    int32_t eax_3 = *(eax_2 + 0x14)
    bool cond:0_1 = eax_3 s>= i_1
    var_10 = eax_3
    eax = &var_c
    
    if (cond:0_1)
        ecx_2 = &i_1
    
    if (*ecx_2 s> 0)
        eax = ecx_2
    
    ecx_2.b = arg7
    struct _EXCEPTION_REGISTRATION_RECORD* edi_1 = *eax
    *(arg1 + 0x44) = edi_1
    
    if (ecx_2.b == 0)
        eax, ecx_2 = sub_490ac0(arg1, edi_1)
        ecx_2.b = arg7
    
    if (*(arg1 + 0x4c) == 0xffffffff)
        int32_t eax_4 = arg4
        
        if (eax_4.b != 0 && ecx_2.b == 0)
            sub_490b30(arg1, edi_1.b, arg2)
            eax_4 = arg4
        
        sub_490b70(arg1, edi_1, arg2, arg3, eax_4, 1, arg5, arg8)
        break
    
    if (*(arg1 + 0x10) == 0)
        return 
