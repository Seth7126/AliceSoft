// 函数: sub_6097a0
// 地址: 0x6097a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *(arg2 + 0x14)
int32_t edx = *(arg2 + 0xc)

if (edx s>= &edi[1])
    int32_t eax_1
    
    if (edx != 0)
        eax_1 = *(arg2 + 8)
    else
        eax_1 = 0
    
    int32_t eax_2 = *(edi + eax_1)
    *(arg2 + 0x14) = &edi[1]
    int32_t edi_1 = eax_2 << 2
    
    if (edi_1 == 0)
    label_6097fd:
        *(arg1 + 0x404) = arg1 + 4 + edi_1
        void* eax_7
        eax_7.b = 1
        return eax_7
    
    if (edx s>= &edi[1 + eax_2])
        void* eax_3
        
        if (edx != 0)
            eax_3 = *(arg2 + 8)
        else
            eax_3 = nullptr
        
        sub_700660(arg1 + 4, eax_3 + &edi[1], edi_1)
        *(arg2 + 0x14) += edi_1
        goto label_6097fd

void* eax
eax.b = 0
return eax
