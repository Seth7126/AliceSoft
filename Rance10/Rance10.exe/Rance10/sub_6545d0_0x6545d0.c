// 函数: sub_6545d0
// 地址: 0x6545d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[5] == 0xca)
    void* (** eax_3)(int32_t* arg1) = (*arg1[1])(arg1, 1, 0x1c)
    arg1[0x66] = eax_3
    *eax_3 = sub_65d810
    eax_3[1] = sub_65d970
    eax_3[2].b = 0
    sub_65d5f0(arg1)
    
    if (arg1[0x10].b != 0)
        arg1[5] = 0xcf
        void* eax_4
        eax_4.b = 1
        return eax_4
    
    arg1[5] = 0xcb

int32_t eax_5 = arg1[5]

if (eax_5 != 0xcb)
    if (eax_5 != 0xcc)
        *(*arg1 + 0x14) = 0x15
        *(*arg1 + 0x18) = arg1[5]
        (**arg1)(arg1)
    
    return sub_6546d0(arg1) __tailcall

if (*(arg1[0x6a] + 0x10) != 0)
    while (true)
        int32_t* eax_7 = arg1[2]
        
        if (eax_7 != 0)
            (*eax_7)(arg1)
        
        int32_t eax_11 = (*arg1[0x6a])(arg1)
        
        if (eax_11 == 0)
            eax_11.b = 0
            return eax_11
        
        if (eax_11 == 2)
            break
        
        void* ecx_1 = arg1[2]
        
        if (ecx_1 != 0)
            if (eax_11 != 3 && eax_11 != 1)
                continue
            
            *(ecx_1 + 4) += 1
            void* edx_1 = arg1[2]
            int32_t edi_1 = *(edx_1 + 8)
            
            if (*(ecx_1 + 4) s>= edi_1)
                *(edx_1 + 8) = arg1[0x4a] + edi_1

arg1[0x21] = arg1[0x1f]
return sub_6546d0(arg1) __tailcall
