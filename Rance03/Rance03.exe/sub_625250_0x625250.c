// 函数: sub_625250
// 地址: 0x625250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0)
    void* eax_1 = *(arg1 + 0x1c)
    
    if (eax_1 != 0)
        int32_t ecx = *(arg1 + 0x24)
        
        if (ecx != 0)
            int32_t eax_2 = *(eax_1 + 0x34)
            
            if (eax_2 != 0)
                ecx(*(arg1 + 0x28), eax_2)
            
            (*(arg1 + 0x24))(*(arg1 + 0x28), *(arg1 + 0x1c))
            *(arg1 + 0x1c) = 0
            return 0

return 0xfffffffe
