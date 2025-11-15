// 函数: sub_5e6b30
// 地址: 0x5e6b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_5665c0(data_7fd4cc, arg1, arg2)

if (result == 0)
    return result

__Smtx_lock_shared(result + 0x200)
int32_t esi = *(result + 0x1fc)
__Smtx_unlock_shared(result + 0x200)

if (esi == 0)
    return 0

__Smtx_lock_shared(result + 0x200)
void* esi_1 = *(result + 0x1fc)
__Smtx_unlock_shared(result + 0x200)
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x38e38e39, *(esi_1 + 0x70) - *(esi_1 + 0x6c))
int32_t edx_1 = edx s>> 3
return (edx_1 u>> 0x1f) + edx_1
