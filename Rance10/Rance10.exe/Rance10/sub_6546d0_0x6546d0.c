// 函数: sub_6546d0
// 地址: 0x6546d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x14) != 0xcc)
    (**(arg1 + 0x198))(arg1)
    *(arg1 + 0x78) = 0
    *(arg1 + 0x14) = 0xcc

while (*(*(arg1 + 0x198) + 8) != 0)
    int32_t i = *(arg1 + 0x78)
    
    while (i u< *(arg1 + 0x60))
        void* ecx = *(arg1 + 8)
        
        if (ecx != 0)
            *(ecx + 4) = i
            *(*(arg1 + 8) + 8) = *(arg1 + 0x60)
            (**(arg1 + 8))(arg1)
        
        int32_t edi_1 = *(arg1 + 0x78)
        (*(*(arg1 + 0x19c) + 4))(arg1, 0, arg1 + 0x78, 0)
        i = *(arg1 + 0x78)
        
        if (i == edi_1)
            i.b = 0
            return i
    
    (*(*(arg1 + 0x198) + 4))(arg1)
    (**(arg1 + 0x198))(arg1)
    *(arg1 + 0x78) = 0

int32_t eax_14
eax_14.b = *(arg1 + 0x41) != 0
*(arg1 + 0x14) = eax_14 + 0xcd
int32_t eax_15
eax_15.b = 1
return eax_15
