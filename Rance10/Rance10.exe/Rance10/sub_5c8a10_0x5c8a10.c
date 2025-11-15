// 函数: sub_5c8a10
// 地址: 0x5c8a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 8)
int32_t* esi = *(arg1 + 4)
__Smtx_unlock_shared(arg1 + 8)
(*(*esi + 0xd0))(0)
__Smtx_lock_shared(arg1 + 8)
int32_t* esi_1 = *(arg1 + 4)
__Smtx_unlock_shared(arg1 + 8)

if (sub_5761e0(arg2, 2, arg1 + 0xc, esi_1) != 0)
    __Smtx_lock_shared(arg1 + 8)
    int32_t* esi_2 = *(arg1 + 4)
    __Smtx_unlock_shared(arg1 + 8)
    (*(*esi_2 + 0xd0))(1)
    __Smtx_lock_shared(arg1 + 8)
    int32_t* esi_3 = *(arg1 + 4)
    __Smtx_unlock_shared(arg1 + 8)
    
    if (sub_5761e0(arg2, 4, arg1 + 0xc, esi_3) != 0)
        __Smtx_lock_shared(arg1 + 8)
        int32_t* esi_4 = *(arg1 + 4)
        __Smtx_unlock_shared(arg1 + 8)
        return sub_5761e0(arg2, 5, arg1 + 0xc, esi_4) != 0

return 0
