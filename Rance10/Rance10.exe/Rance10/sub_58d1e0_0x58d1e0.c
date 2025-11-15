// 函数: sub_58d1e0
// 地址: 0x58d1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi

if (arg2 != 0)
    int32_t esi_1 = *(arg1 + 0x64)
    void* ecx = *(arg1 + 0x68)
    
    if (esi_1 s< 0 || esi_1 s>= (*(ecx + 0x1c) - *(ecx + 0x18)) s>> 3)
        int32_t** esi_2 = *(ecx + 0x18)
        
        if (((*(ecx + 0x1c) - esi_2) & 0xfffffff8) s> 0)
            esi = *esi_2
        else
            esi = nullptr
    else
        esi = *(*(ecx + 0x18) + (esi_1 << 3))
else
    esi = *(*(arg1 + 0x68) + 0x24)

if (esi == 0)
    return 0

__Smtx_lock_shared(&esi[1])
int32_t result = *esi
__Smtx_unlock_shared(&esi[1])
return result
