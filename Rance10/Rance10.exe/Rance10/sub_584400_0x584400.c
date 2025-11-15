// 函数: sub_584400
// 地址: 0x584400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x200)
int32_t esi = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)

if (esi == 0)
    return 0

__Smtx_lock_shared(arg1 + 0x200)
void* esi_1 = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)
return *(esi_1 + 0x4c)
