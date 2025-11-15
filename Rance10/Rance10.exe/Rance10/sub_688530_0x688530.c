// 函数: sub_688530
// 地址: 0x688530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 4)

for (int32_t edi = *(arg1 + 8); i != edi; i = &i[1])
    int32_t* ecx = *i
    int32_t* ebx_1 = ecx[5]
    
    if (ebx_1 != 0)
        uint32_t eax_1 = zx.d(*(ecx + 0x22))
        int32_t eax_2 = *(*ecx + 8)
        ecx[5] = 0
        bool cond:0_1 = eax_2(ebx_1, eax_1) == 0
        int32_t eax_4 = *ebx_1
        
        if (cond:0_1)
            (*(eax_4 + 4))()
            int32_t eax_5
            eax_5.b = 0
            return eax_5
        
        (*(eax_4 + 4))()

int32_t eax
eax.b = 1
return eax
