// 函数: sub_6255d0
// 地址: 0x6255d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg2 + 0x14)

if (*(arg2 + 0xc) s>= &edx[1])
    int32_t eax_1
    
    if (*(arg2 + 0xc) != 0)
        eax_1 = *(arg2 + 8)
    else
        eax_1 = 0
    
    *(arg1 + 0x1c) = *(edx + eax_1)
    *(arg2 + 0x14) += 4
    int32_t* edx_1 = *(arg2 + 0x14)
    
    if (*(arg2 + 0xc) s>= &edx_1[1])
        int32_t ebx
        
        if (*(arg2 + 0xc) != 0)
            ebx = *(arg2 + 8)
        else
            ebx = 0
        
        void* ebx_1 = *(edx_1 + ebx)
        *(arg2 + 0x14) = &edx_1[1]
        *(arg1 + 0x14) = 0
        char* eax_3
        
        if (ebx_1 s> 0)
            if (sub_405df0(arg1 + 0xc, ebx_1).b == 0)
                eax_3.b = 0
                return eax_3
            
            char* eax_4
            
            if (*(arg1 + 0x14) != 0)
                eax_4 = *(arg1 + 0x10)
            else
                eax_4 = nullptr
            
            if (sub_622bb0(arg2, eax_4, ebx_1).b == 0)
                eax_3.b = 0
                return eax_3
        
        eax_3.b = 1
        return eax_3

void* eax
eax.b = 0
return eax
