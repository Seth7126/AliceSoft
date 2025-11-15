// 函数: sub_5eabf0
// 地址: 0x5eabf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg1 s>= 0)
    void* edx_1 = data_7fd4cc
    
    if (arg1 s< (*(edx_1 + 0x58) - *(edx_1 + 0x54)) s>> 3)
        void** edi_1 = *(edx_1 + 0x54) + (arg1 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            result.b = *(edi_2 + 0x1f4)
            return result

result.b = 0
return result
