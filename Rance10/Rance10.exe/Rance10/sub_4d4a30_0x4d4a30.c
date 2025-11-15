// 函数: sub_4d4a30
// 地址: 0x4d4a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x134) = 0
int32_t* i = *(arg1 + 0x18)

for (int32_t esi = *(arg1 + 0x1c); i != esi; i = &i[1])
    void* eax_1 = *i
    int32_t edi_1 = 0
    *(eax_1 + 0x3c) = 0
    int32_t* ecx = *(eax_1 + 0x10)
    void* eax = *(eax_1 + 0x14)
    uint32_t ebx_4 = (eax - ecx + 3) u>> 2
    
    if (ecx u> eax)
        ebx_4 = 0
    
    if (ebx_4 != 0)
        do
            int32_t* eax_2 = *ecx
            eax_2[0xd].b = 0
            eax = *eax_2
            
            if (eax != 0)
                *(eax + 0x12c) = 0
            
            edi_1 += 1
            ecx = &ecx[1]
        while (edi_1 != ebx_4)
