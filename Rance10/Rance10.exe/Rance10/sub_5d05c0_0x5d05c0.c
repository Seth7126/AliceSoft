// 函数: sub_5d05c0
// 地址: 0x5d05c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
__Smtx_lock_shared(arg1 + 0x3c)
int32_t esi = *(arg1 + 0x38)
__Smtx_unlock_shared(arg1 + 0x3c)

if (esi == 0)
    return 0

__Smtx_lock_shared(arg1 + 0x3c)
void* esi_1 = *(arg1 + 0x38)
__Smtx_unlock_shared(arg1 + 0x3c)
void** ecx_1 = arg2

if (ecx_1[5] u>= 0x10)
    ecx_1 = *ecx_1

return (*(*(esi_1 + 4) + 0x24))(ecx_1)
