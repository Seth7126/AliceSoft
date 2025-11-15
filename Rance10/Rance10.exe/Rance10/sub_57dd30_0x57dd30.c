// 函数: sub_57dd30
// 地址: 0x57dd30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi == 0)
    return 0

__Smtx_lock_shared(&arg1[1])
int32_t* esi_1 = *arg1
__Smtx_unlock_shared(&arg1[1])
jump(*(*esi_1 + 0x14))
