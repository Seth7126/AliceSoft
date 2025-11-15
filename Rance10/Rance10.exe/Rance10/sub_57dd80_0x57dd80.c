// 函数: sub_57dd80
// 地址: 0x57dd80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(&arg1[1])
int32_t esi = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi != 0)
    __Smtx_lock_shared(&arg1[1])
    int32_t* esi_1 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    
    if (sub_57de00((*(*esi_1 + 0x10))()) == 1)
        __Smtx_lock_shared(&arg1[1])
        int32_t* esi_2 = *arg1
        __Smtx_unlock_shared(&arg1[1])
        int32_t eax_5
        eax_5.b = sub_57de00((*(*esi_2 + 0x14))()) == 1
        return eax_5

int32_t eax
eax.b = 0
return eax
