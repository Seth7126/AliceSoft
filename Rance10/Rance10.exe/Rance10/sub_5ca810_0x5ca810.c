// 函数: sub_5ca810
// 地址: 0x5ca810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi == 0)
    int32_t result
    result.b = 0
    return result

__Smtx_lock_shared(&arg1[1])
int32_t* esi_1 = *arg1
__Smtx_unlock_shared(&arg1[1])
return (*(*esi_1 + 0x2c))(0, 1, 0, 1)
