// 函数: sub_5c4210
// 地址: 0x5c4210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u> 5)
    int32_t result
    result.b = 1
    return result

if (sub_58ed00(arg1 + 0x60, arg2) == 0)
    return 1

__Smtx_lock_shared(arg1 + 0x5c)
void* esi_1 = *(arg1 + 0x58)
__Smtx_unlock_shared(arg1 + 0x5c)

if (sub_58f1b0(esi_1 + 0x4c) != 0)
    if (arg2 != 4 && arg2 != 5)
        return sub_58ed40(arg1 + 0x60, arg2, arg3, arg4) != 0
    
    (*(*arg4 + 0xd0))(0)
    
    if (sub_58ed40(arg1 + 0x60, 2, arg3, arg4) != 0)
        (*(*arg4 + 0xd0))(1)
        return sub_58ed40(arg1 + 0x60, arg2, arg3, arg4) != 0

return false
