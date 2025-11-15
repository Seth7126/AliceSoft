// 函数: sub_5e6e00
// 地址: 0x5e6e00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_5665c0(data_7fd4cc, arg3, arg2)

if (result == 0)
    return result

__Smtx_lock_shared(result + 0x200)
int32_t esi = *(result + 0x1fc)
__Smtx_unlock_shared(result + 0x200)

if (esi != 0)
    __Smtx_lock_shared(result + 0x200)
    void* esi_1 = *(result + 0x1fc)
    __Smtx_unlock_shared(result + 0x200)
    
    if (arg4 s>= 0 && arg4 s< (*(esi_1 + 0x64) - *(esi_1 + 0x60)) s>> 2)
        void* eax_4 = *(*(esi_1 + 0x60) + (arg4 << 2))
        
        if (eax_4 != 0)
            return (*(eax_4 + 0x28) - *(eax_4 + 0x24)) s/ 0x78

return 0
