// 函数: sub_5c7880
// 地址: 0x5c7880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 8)
int32_t esi = *(arg1 + 4)
__Smtx_unlock_shared(arg1 + 8)

if (esi == 0)
    int32_t result
    result.b = 0
    return result

__Smtx_lock_shared(arg1 + 8)
int32_t* esi_1 = *(arg1 + 4)
__Smtx_unlock_shared(arg1 + 8)
*(arg1 + 0x223) = (*(*esi_1 + 0x90))()
__Smtx_lock_shared(arg1 + 8)
int32_t* esi_2 = *(arg1 + 4)
__Smtx_unlock_shared(arg1 + 8)
*(arg1 + 0x224) = (*(*esi_2 + 0x94))()
return 1
