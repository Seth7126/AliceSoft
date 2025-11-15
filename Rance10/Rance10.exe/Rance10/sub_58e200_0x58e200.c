// 函数: sub_58e200
// 地址: 0x58e200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
label_58e215:
    void* ecx = *(arg1 + 0x6c)
    
    if (ecx != 0)
        int32_t esi_1 = *(arg1 + 0x64)
        int32_t* esi_2
        
        if (esi_1 s< 0 || esi_1 s>= (*(ecx + 0x1c) - *(ecx + 0x18)) s>> 3)
            int32_t** esi_3 = *(ecx + 0x18)
            
            if (((*(ecx + 0x1c) - esi_3) & 0xfffffff8) s> 0)
                esi_2 = *esi_3
            else
                esi_2 = nullptr
        else
            esi_2 = *(*(ecx + 0x18) + (esi_1 << 3))
        
        if (esi_2 != 0)
            __Smtx_lock_shared(&esi_2[1])
            int32_t result = *esi_2
            __Smtx_unlock_shared(&esi_2[1])
            return result
else if (arg2 s> 3 && arg2 s<= 5)
    goto label_58e215

return 0
