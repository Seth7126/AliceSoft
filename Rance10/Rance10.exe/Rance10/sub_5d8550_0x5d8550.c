// 函数: sub_5d8550
// 地址: 0x5d8550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0xc)
int32_t esi = *(arg1 + 8)
__Smtx_unlock_shared(arg1 + 0xc)

if (esi != 0)
    (*(*arg2 + 0xc8))(0)
    (*(*arg2 + 0xcc))(0)
    __Smtx_lock_shared(arg1 + 0xc)
    int32_t* edi_1 = *(arg1 + 8)
    __Smtx_unlock_shared(arg1 + 0xc)
    
    if ((*(*edi_1 + 0x2c))(0, 0, 0, 1) != 0 && (*(*arg2 + 0xbc))(1, 0, 0, 0, 0, 0xffffffff) != 0
            && sub_5dcb50(arg1 + 0x268) != 0)
        __Smtx_lock_shared(arg1 + 0xc)
        int32_t* edi_2 = *(arg1 + 8)
        __Smtx_unlock_shared(arg1 + 0xc)
        return (*(*edi_2 + 0x3c))(0) != 0

return false
