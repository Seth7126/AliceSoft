// 函数: sub_5699d0
// 地址: 0x5699d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    return 0

int32_t edx = *(arg1 + 0x6c)

if (edx s>= 0 && edx s< (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 3)
    int32_t edi_1 = edx << 3
    int32_t eax_5
    eax_5.b = *(edi_1 + *(arg1 + 0x38)) != 0
    
    if (eax_5.b != 0 && edx s< (*(arg1 + 0x48) - *(arg1 + 0x44)) s>> 3)
        int32_t* esi_1 = *(arg1 + 0x44) + edi_1
        __Smtx_lock_shared(&esi_1[1])
        int32_t result = *esi_1
        __Smtx_unlock_shared(&esi_1[1])
        return result

return 0
