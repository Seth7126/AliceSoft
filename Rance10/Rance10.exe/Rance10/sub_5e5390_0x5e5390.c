// 函数: sub_5e5390
// 地址: 0x5e5390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 s>= 0)
    void* edx_1 = data_7fd4cc
    
    if (arg1 s< (*(edx_1 + 0x58) - *(edx_1 + 0x54)) s>> 3)
        int32_t* esi = *(edx_1 + 0x54) + (arg1 << 3)
        __Smtx_lock_shared(&esi[1])
        int32_t esi_1 = *esi
        __Smtx_unlock_shared(&esi[1])
        int32_t eax_4
        eax_4.b = esi_1 != 0
        return eax_4

int32_t eax
eax.b = 0
return eax
