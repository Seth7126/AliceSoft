// 函数: sub_621720
// 地址: 0x621720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0)
    void* esi_1 = *(arg1 + 0x1c)
    
    if (esi_1 != 0 && *(arg1 + 0x20) != 0 && *(arg1 + 0x24) != 0)
        *(arg1 + 0x14) = 0
        *(arg1 + 8) = 0
        *(arg1 + 0x18) = 0
        *(arg1 + 0x2c) = 2
        *(esi_1 + 0x10) = *(esi_1 + 8)
        int32_t eax_1 = *(esi_1 + 0x18)
        *(esi_1 + 0x14) = 0
        
        if (eax_1 s< 0)
            *(esi_1 + 0x18) = neg.d(eax_1)
        
        int32_t edx = *(esi_1 + 0x18)
        int32_t eax_3 = 0x71
        
        if (edx != 0)
            eax_3 = 0x2a
        
        *(esi_1 + 4) = eax_3
        int32_t eax_4
        eax_4.b = edx != 2
        *(arg1 + 0x30) = eax_4
        *(esi_1 + 0x28) = 0
        sub_625700(esi_1)
        return 0

return 0xfffffffe
