// 函数: sub_5dcb50
// 地址: 0x5dcb50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi != 0)
    __Smtx_lock_shared(&arg1[1])
    int32_t* esi_1 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    
    if ((*(*esi_1 + 0x24))() != 0)
        __Smtx_lock_shared(&arg1[1])
        int32_t* esi_2 = *arg1
        __Smtx_unlock_shared(&arg1[1])
        return (*(*esi_2 + 0x30))() != 0

return 0
