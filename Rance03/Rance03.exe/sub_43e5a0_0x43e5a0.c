// 函数: sub_43e5a0
// 地址: 0x43e5a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)

if (&edx[4] u<= *(arg2 + 8))
    uint32_t esi_5 = (zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])
    uint32_t eax_3 = zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    uint32_t esi_7 = esi_5 << 8 | eax_3
    sub_4107c0(*(arg1 + 4), *(arg1 + 8))
    *(arg1 + 8) = *(arg1 + 4)
    sub_410480(arg1 + 4, esi_7)
    int32_t edi_2 = 0
    
    if (esi_7 s> 0)
        int32_t esi_8 = 0
        
        do
            if (sub_468d00(arg2, *(arg1 + 4) + esi_8) == 0)
                return 0
            
            edi_2 += 1
            esi_8 += 0x18
        while (edi_2 s< esi_7)
    
    char* ecx_2 = *(arg2 + 4)
    
    if (&ecx_2[4] u<= *(arg2 + 8))
        uint32_t esi_13 = (zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])
        uint32_t eax_10 = zx.d(*ecx_2)
        *(arg2 + 4) = &ecx_2[4]
        uint32_t esi_15 = esi_13 << 8 | eax_10
        sub_4107c0(*(arg1 + 0x10), *(arg1 + 0x14))
        *(arg1 + 0x14) = *(arg1 + 0x10)
        sub_410480(arg1 + 0x10, esi_15)
        int32_t edi_4 = 0
        
        if (esi_15 s<= 0)
            return 1
        
        int32_t esi_16 = 0
        
        while (true)
            if (sub_468d00(arg2, *(arg1 + 0x10) + esi_16) == 0)
                return 0
            
            edi_4 += 1
            esi_16 += 0x18
            
            if (edi_4 s>= esi_15)
                return 1

return 0
