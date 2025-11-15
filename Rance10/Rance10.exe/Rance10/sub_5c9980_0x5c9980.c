// 函数: sub_5c9980
// 地址: 0x5c9980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
__Smtx_lock_shared(arg1 + 8)
int32_t* esi = *(arg1 + 4)
__Smtx_unlock_shared(arg1 + 8)
int32_t result = (*(*esi + 0x88))()
__Smtx_lock_shared(arg1 + 8)
int32_t* esi_1 = *(arg1 + 4)
__Smtx_unlock_shared(arg1 + 8)

if ((*(*esi_1 + 0x8c))(result) == 0)
    return 0

return result
