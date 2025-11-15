// 函数: sub_5895c0
// 地址: 0x5895c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xc) != 0 && *(arg1 + 0x10) == 0)
    __Smtx_lock_shared(arg2 + 0x200)
    int32_t esi_1 = *(arg2 + 0x1fc)
    __Smtx_unlock_shared(arg2 + 0x200)
    int32_t ebx_2
    int32_t esi_3
    
    if (esi_1 != 0)
        __Smtx_lock_shared(arg2 + 0x200)
        ebx_2 = *(arg2 + 0x1fc)
        __Smtx_unlock_shared(arg2 + 0x200)
        void* esi_2 = *(arg1 + 0xc)
        __Smtx_lock_shared(esi_2 + 0xc)
        esi_3 = *(esi_2 + 8)
        __Smtx_unlock_shared(esi_2 + 0xc)
    
    if (esi_1 == 0 || esi_3 != ebx_2)
        return 0

return 1
