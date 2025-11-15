// 函数: sub_566160
// 地址: 0x566160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x58) - *(arg1 + 0x54)) s>> 3)
    int32_t* edi_1 = *(arg1 + 0x54) + (arg2 << 3)
    __Smtx_lock_shared(&edi_1[1])
    void* edi_2 = *edi_1
    __Smtx_unlock_shared(&edi_1[1])
    
    if (edi_2 != 0)
        int32_t* ecx_1 = *(arg1 + 0x60)
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 0xc))(*(edi_2 + 8))
            (*(**(arg1 + 0x60) + 8))(arg3, edi_2)
        
        *(edi_2 + 8) = arg3
        result.b = 1
        return result

result.b = 0
return result
