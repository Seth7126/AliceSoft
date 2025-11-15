// 函数: sub_5e5e30
// 地址: 0x5e5e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_5665c0(data_7fd4cc, arg3, arg2)

if (eax == 0)
    eax.b = 0
    return eax

__Smtx_lock_shared(eax + 0x200)
int32_t esi = *(eax + 0x1fc)
__Smtx_unlock_shared(eax + 0x200)

if (esi == 0)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

__Smtx_lock_shared(eax + 0x200)
void* esi_1 = *(eax + 0x1fc)
__Smtx_unlock_shared(eax + 0x200)
return sub_5bb860(esi_1, arg4, arg5)
