// 函数: sub_623940
// 地址: 0x623940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0)
    void* esi_1 = *(arg1 + 0x1c)
    
    if (esi_1 != 0)
        int32_t eax_1 = *(esi_1 + 0x34)
        
        if (eax_1 != 0 && *(esi_1 + 0x24) != 0xf)
            (*(arg1 + 0x24))(*(arg1 + 0x28), eax_1)
            *(esi_1 + 0x34) = 0
        
        *(esi_1 + 8) = 1
        *(esi_1 + 0x24) = 0xf
        void* eax_3 = *(arg1 + 0x1c)
        
        if (eax_3 != 0)
            *(eax_3 + 0x28) = 0
            *(eax_3 + 0x2c) = 0
            *(eax_3 + 0x30) = 0
            return sub_623870(arg1) __tailcall

return 0xfffffffe
