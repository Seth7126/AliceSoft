// 函数: sub_5e6c70
// 地址: 0x5e6c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_5665c0(data_7fd4cc, arg3, arg2)

if (eax == 0)
    eax.b = 0
    return eax

__Smtx_lock_shared(eax + 0x200)
int32_t esi = *(eax + 0x1fc)
__Smtx_unlock_shared(eax + 0x200)

if (esi != 0)
    __Smtx_lock_shared(eax + 0x200)
    void* esi_1 = *(eax + 0x1fc)
    __Smtx_unlock_shared(eax + 0x200)
    
    if (arg4 s>= 0 && arg4 s< (*(esi_1 + 0x64) - *(esi_1 + 0x60)) s>> 2)
        void** edx_1 = *(*(esi_1 + 0x60) + (arg4 << 2))
        
        if (edx_1 != 0)
            if (edx_1[5] u>= 0x10)
                edx_1 = *edx_1
            
            (*(*arg5 + 4))(edx_1)
            int32_t eax_5
            eax_5.b = 1
            return eax_5

int32_t eax_1
eax_1.b = 0
return eax_1
