// 函数: sub_586450
// 地址: 0x586450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x200)
int32_t esi = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)

if (esi != 0)
    __Smtx_lock_shared(arg1 + 0x200)
    *(arg1 + 0x1fc)
    __Smtx_unlock_shared(arg1 + 0x200)
    return sub_580d10(arg2, arg3, arg4)

*arg4 = esi
arg4[1] = esi
arg4[2] = esi
int32_t* result
result.b = 0
return result
