// 函数: sub_566320
// 地址: 0x566320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x14)
int32_t esi = *(arg1 + 0x10)
__Smtx_unlock_shared(arg1 + 0x14)

if (esi != 0)
    __Smtx_lock_shared(arg1 + 0x14)
    int32_t* esi_1 = *(arg1 + 0x10)
    __Smtx_unlock_shared(arg1 + 0x14)
    
    if ((*(*esi_1 + 0xc))() != 0)
        __Smtx_lock_shared(arg1 + 0x14)
        int32_t* edi_2 = *(arg1 + 0x10)
        __Smtx_unlock_shared(arg1 + 0x14)
        (*(*edi_2 + 0x38))(arg1)
        int32_t result
        result.b = 1
        return result

return 0
