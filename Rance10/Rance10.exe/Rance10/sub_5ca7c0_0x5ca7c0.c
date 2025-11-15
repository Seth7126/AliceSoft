// 函数: sub_5ca7c0
// 地址: 0x5ca7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi != 0)
    __Smtx_lock_shared(&arg1[1])
    int32_t* esi_1 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    char result = (*(*esi_1 + 0x38))()
    
    if (result == 0)
        return result

return 1
