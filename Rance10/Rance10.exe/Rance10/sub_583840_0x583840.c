// 函数: sub_583840
// 地址: 0x583840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x200)
int32_t esi = *(arg1 + 0x1fc)
void* result = __Smtx_unlock_shared(arg1 + 0x200)

if (esi != 0)
    __Smtx_lock_shared(arg1 + 0x200)
    void* edi_1 = *(arg1 + 0x1fc)
    __Smtx_unlock_shared(arg1 + 0x200)
    result = sub_5951d0(edi_1 + 0x38, arg3)
    
    if (result != 0)
        int32_t xmm0_1 = *(result + 0x34)
        *(arg2 + 8) = *(result + 0x30)
        *(arg2 + 0xc) = xmm0_1
        int32_t xmm0_2 = *(result + 0x3c)
        result = *(result + 0x38)
        *(arg2 + 0x10) = result
        *(arg2 + 0x14) = xmm0_2

return result
