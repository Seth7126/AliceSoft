// 函数: sub_585840
// 地址: 0x585840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
__Smtx_lock_shared(arg1 + 0x200)
int32_t esi = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)

if (esi == 0)
    return 0

__Smtx_lock_shared(arg1 + 0x200)
void* esi_1 = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)
return sub_5c22d0(esi_1 + 0x48)
