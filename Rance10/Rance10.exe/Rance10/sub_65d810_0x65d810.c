// 函数: sub_65d810
// 地址: 0x65d810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x66]
void* result

if (*(edi + 8) == 0)
    if (*(arg1 + 0x4a) != 0 && arg1[0x1d] == 0)
        if (arg1[0x14].b != 0 && *(arg1 + 0x5a) != 0)
            arg1[0x70] = *(edi + 0x18)
            *(edi + 8) = 1
        else if (arg1[0x16].b == 0)
            *(*arg1 + 0x14) = 0x2f
            (**arg1)(arg1)
        else
            arg1[0x70] = *(edi + 0x14)
    
    (*arg1[0x6d])(arg1)
    result = (*(arg1[0x68] + 8))(arg1)
    
    if (*(arg1 + 0x41) == 0)
        if (*(edi + 0x10) == 0)
            (*arg1[0x6f])(arg1)
        
        (*arg1[0x6e])(arg1)
        
        if (*(arg1 + 0x4a) != 0)
            (*arg1[0x70])(arg1, zx.d(*(edi + 8)))
        
        int32_t eax_22 = 0
        
        if (*(edi + 8) != 0)
            eax_22 = 3
        
        (*arg1[0x69])(arg1, eax_22)
        result = (*arg1[0x67])(arg1, 0)
else
    *(edi + 8) = 0
    (*arg1[0x70])(arg1, 0)
    (*arg1[0x69])(arg1, 2)
    result = (*arg1[0x67])(arg1, 2)

void* ecx_3 = arg1[2]

if (ecx_3 != 0)
    *(ecx_3 + 0xc) = *(edi + 0xc)
    result = arg1[2]
    int32_t ecx_4
    ecx_4.b = *(edi + 8) != 0
    *(result + 0x10) = ecx_4 + 1 + *(edi + 0xc)
    
    if (arg1[0x10].b != 0)
        result = arg1[0x6a]
        
        if (*(result + 0x11) == 0)
            void* ecx_7 = arg1[2]
            void* eax_27
            eax_27.b = *(arg1 + 0x5a) != 0
            result = eax_27 + 1
            *(ecx_7 + 0x10) += result

return result
