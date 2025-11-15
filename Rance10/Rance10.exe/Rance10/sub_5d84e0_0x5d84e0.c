// 函数: sub_5d84e0
// 地址: 0x5d84e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x25c) != 0)
    __Smtx_lock_shared(arg1 + 0xc)
    int32_t esi_1 = *(arg1 + 8)
    __Smtx_unlock_shared(arg1 + 0xc)
    
    if (esi_1 != 0)
        __Smtx_lock_shared(arg1 + 0xc)
        int32_t* esi_2 = *(arg1 + 8)
        __Smtx_unlock_shared(arg1 + 0xc)
        
        if ((*(*esi_2 + 0x38))() != 0)
            *(arg1 + 0x25c) = 0
            return 1

return 0
