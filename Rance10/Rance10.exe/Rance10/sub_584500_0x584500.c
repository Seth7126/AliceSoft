// 函数: sub_584500
// 地址: 0x584500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x200)
int32_t esi = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)

if (esi == 0)
    return 0

__Smtx_lock_shared(arg1 + 0x200)
void* edi_1 = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)
return (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s/ 0x3c
