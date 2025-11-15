// 函数: sub_5863d0
// 地址: 0x5863d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x200)
int32_t esi = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)

if (esi == 0)
    int32_t result
    result.b = 0
    return result

__Smtx_lock_shared(arg1 + 0x200)
void* edi_1 = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)
return sub_580510(edi_1 + 0xb0, arg2, arg3, arg4)
