// 函数: sub_4d1f90
// 地址: 0x4d1f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x18)

for (int32_t esi = *(arg1 + 0x1c); i != esi; i = &i[1])
    void* eax_1 = *i
    int32_t edi_1 = 0
    int32_t* ecx = *(eax_1 + 0x10)
    int32_t* eax = *(eax_1 + 0x14)
    uint32_t ebp_4 = (eax - ecx + 3) u>> 2
    
    if (ecx u> eax)
        ebp_4 = 0
    
    if (ebp_4 != 0)
        do
            eax = *ecx
            void* ebx_1 = *eax
            
            if (ebx_1 != 0)
                eax[5].b = 0
                *(ebx_1 + 0x18) = 0
            
            edi_1 += 1
            ecx = &ecx[1]
        while (edi_1 != ebp_4)
