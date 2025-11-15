// 函数: sub_5e6d00
// 地址: 0x5e6d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_5665c0(data_7fd4cc, arg3, arg2)

if (eax == 0)
    return 0xffffffff

__Smtx_lock_shared(eax + 0x200)
int32_t esi = *(eax + 0x1fc)
__Smtx_unlock_shared(eax + 0x200)

if (esi != 0)
    __Smtx_lock_shared(eax + 0x200)
    void* esi_1 = *(eax + 0x1fc)
    __Smtx_unlock_shared(eax + 0x200)
    
    if (arg4 s>= 0 && arg4 s< (*(esi_1 + 0x64) - *(esi_1 + 0x60)) s>> 2)
        void* eax_6 = *(*(esi_1 + 0x60) + (arg4 << 2))
        
        if (eax_6 != 0)
            return *(eax_6 + 0x18)

return 0xffffffff
