// 函数: sub_64e690
// 地址: 0x64e690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = sub_64e520(arg1)

if (*(arg1 + 0x6c) == 0)
    sub_64e3c0(eax, 0x7f, arg1, 7)
    char* eax_1 = *(arg1 + 0x70)
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    *eax_1 = 0xff
    *(arg1 + 0x70) += 1
    int32_t temp0_1 = *(arg1 + 0x74)
    *(arg1 + 0x74) -= 1
    
    if (temp0_1 == 1)
        sub_64e290(arg1)
    
    **(arg1 + 0x70) = arg2 - 0x30
    *(arg1 + 0x70) += 1
    int32_t temp1_1 = *(arg1 + 0x74)
    *(arg1 + 0x74) -= 1
    
    if (temp1_1 == 1)
        sub_64e290(arg1)

void* eax_3 = *(arg1 + 0x78)

if (*(eax_3 + 0x15c) != 0)
    *(arg1 + 0x80) = 0
    *(arg1 + 0x84) = 0
else
    int32_t i = 0
    
    if (*(eax_3 + 0x114) s> 0)
        void* edx = arg1 + 0x14
        void* eax_4
        
        do
            *edx = 0
            edx += 4
            eax_4 = *(arg1 + 0x78)
            i += 1
        while (i s< *(eax_4 + 0x114))
        
        return eax_4

return eax_3
