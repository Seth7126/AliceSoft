// 函数: sub_5c3df0
// 地址: 0x5c3df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0xc)
void* ebp = *(arg1 + 8)
__Smtx_unlock_shared(arg1 + 0xc)
__Smtx_lock_shared(arg1 + 0x5c)
void* edi = *(arg1 + 0x58)
__Smtx_unlock_shared(arg1 + 0x5c)

if (*(edi + 0x5d) == 0)
    if (sub_56ee90(edi, ebp, sub_58c7f0(edi + 0x24), *(edi + 0x5c), arg2) == 0)
        return 0
    
    if (sub_56f050(edi, arg2) == 0)
        return 0
    
    *(edi + 0x5d) = 1

*(arg1 + 4) = 1
return 1
