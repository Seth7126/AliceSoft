// 函数: sub_56edb0
// 地址: 0x56edb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x50)
int32_t esi = *(arg1 + 0x4c)
__Smtx_unlock_shared(arg1 + 0x50)

if (esi != 0)
    __Smtx_lock_shared(arg1 + 0x50)
    int32_t* esi_1 = *(arg1 + 0x4c)
    __Smtx_unlock_shared(arg1 + 0x50)
    
    if ((*(*esi_1 + 0x14))() != 0)
        __Smtx_lock_shared(arg1 + 0x50)
        int32_t* esi_2 = *(arg1 + 0x4c)
        __Smtx_unlock_shared(arg1 + 0x50)
        return (*(*esi_2 + 0x3c))() != 0

return 0
