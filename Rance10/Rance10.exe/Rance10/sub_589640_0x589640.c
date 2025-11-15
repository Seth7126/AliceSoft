// 函数: sub_589640
// 地址: 0x589640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x1c) != 0 && *(arg1 + 0x20) == 0)
    __Smtx_lock_shared(arg2 + 0x200)
    int32_t esi_1 = *(arg2 + 0x1fc)
    __Smtx_unlock_shared(arg2 + 0x200)
    int32_t ebx_2
    void* ebp_2
    int32_t esi_2
    
    if (esi_1 != 0)
        __Smtx_lock_shared(arg2 + 0x200)
        ebx_2 = *(arg2 + 0x1fc)
        __Smtx_unlock_shared(arg2 + 0x200)
        ebp_2 = *(arg1 + 0x1c)
        __Smtx_lock_shared(ebp_2 + 0xc)
        esi_2 = *(ebp_2 + 8)
        __Smtx_unlock_shared(ebp_2 + 0xc)
    
    if (esi_1 == 0 || esi_2 != ebx_2 || *(ebp_2 + 0x24c) != arg3)
        return 0

return 1
