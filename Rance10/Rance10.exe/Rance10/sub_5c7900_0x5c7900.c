// 函数: sub_5c7900
// 地址: 0x5c7900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
__Smtx_lock_shared(arg1 + 8)
int32_t esi = *(arg1 + 4)
char result = __Smtx_unlock_shared(arg1 + 8)

if (esi != 0)
    __Smtx_lock_shared(arg1 + 8)
    int32_t* esi_1 = *(arg1 + 4)
    __Smtx_unlock_shared(arg1 + 8)
    *(arg1 + 0x220) = (*(*esi_1 + 0x84))(2)
    __Smtx_lock_shared(arg1 + 8)
    int32_t* esi_2 = *(arg1 + 4)
    __Smtx_unlock_shared(arg1 + 8)
    *(arg1 + 0x221) = (*(*esi_2 + 0x84))(3)
    __Smtx_lock_shared(arg1 + 8)
    int32_t* edi_2 = *(arg1 + 4)
    __Smtx_unlock_shared(arg1 + 8)
    result = (*(*edi_2 + 0x84))(4)
    *(arg1 + 0x222) = result

return result
