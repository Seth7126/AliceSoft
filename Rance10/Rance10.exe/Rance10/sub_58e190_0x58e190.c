// 函数: sub_58e190
// 地址: 0x58e190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u> 5)
    return 0

int32_t esi = *(arg1 + 0x64)
void* ecx = *(arg1 + 0x68)
int32_t* esi_1

if (esi s< 0 || esi s>= (*(ecx + 0x1c) - *(ecx + 0x18)) s>> 3)
    int32_t** esi_2 = *(ecx + 0x18)
    
    if (((*(ecx + 0x1c) - esi_2) & 0xfffffff8) s> 0)
        esi_1 = *esi_2
    else
        esi_1 = nullptr
else
    esi_1 = *(*(ecx + 0x18) + (esi << 3))

if (esi_1 == 0)
    return 0

__Smtx_lock_shared(&esi_1[1])
int32_t result = *esi_1
__Smtx_unlock_shared(&esi_1[1])
return result
