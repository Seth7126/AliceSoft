// 函数: sub_595eb0
// 地址: 0x595eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0xc)
void* eax = *(arg1 + 8)
__Smtx_unlock_shared(arg1 + 0xc)
__Smtx_lock_shared(arg1 + 0x6c)
void* edi = *(arg1 + 0x68)
__Smtx_unlock_shared(arg1 + 0x6c)

if (*(edi + 0x5d) != 0)
    goto label_595f2c

if (sub_56ee90(edi, eax, sub_58c7f0(edi + 0x24), *(edi + 0x5c), arg2) != 0
        && sub_56f050(edi, arg2) != 0)
    *(edi + 0x5d) = 1
label_595f2c:
    __Smtx_lock_shared(arg1 + 0xc)
    void* edi_1 = *(arg1 + 8)
    __Smtx_unlock_shared(arg1 + 0xc)
    
    if (sub_570550(arg1 + 0x250, (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s/ 0x3c, arg2) != 0)
        *(arg1 + 4) = 1
        return 1

return 0
