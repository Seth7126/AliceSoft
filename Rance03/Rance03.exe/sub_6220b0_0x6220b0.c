// 函数: sub_6220b0
// 地址: 0x6220b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0)
    void* eax_1 = *(arg1 + 0x1c)
    
    if (eax_1 != 0)
        int32_t edi = *(eax_1 + 4)
        
        if (edi != 0x2a && edi != 0x45 && edi != 0x49 && edi != 0x5b && edi != 0x67 && edi != 0x71
                && edi != 0x29a)
            return 0xfffffffe
        
        int32_t eax_3 = *(eax_1 + 8)
        
        if (eax_3 != 0)
            (*(arg1 + 0x24))(*(arg1 + 0x28), eax_3)
        
        int32_t eax_6 = *(*(arg1 + 0x1c) + 0x44)
        
        if (eax_6 != 0)
            (*(arg1 + 0x24))(*(arg1 + 0x28), eax_6)
        
        int32_t eax_9 = *(*(arg1 + 0x1c) + 0x40)
        
        if (eax_9 != 0)
            (*(arg1 + 0x24))(*(arg1 + 0x28), eax_9)
        
        int32_t eax_12 = *(*(arg1 + 0x1c) + 0x38)
        
        if (eax_12 != 0)
            (*(arg1 + 0x24))(*(arg1 + 0x28), eax_12)
        
        (*(arg1 + 0x24))(*(arg1 + 0x28), *(arg1 + 0x1c))
        *(arg1 + 0x1c) = 0
        
        if (edi == 0x71)
            return 0xfffffffd
        
        return 0

return 0xfffffffe
