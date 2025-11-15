// 函数: sub_5ca8f0
// 地址: 0x5ca8f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi != 0)
    __Smtx_lock_shared(&arg1[1])
    int32_t* esi_1 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    jump(*(*esi_1 + 0x18))

int32_t result = arg1[2]

if (result != arg1[3])
    return result

return 0
