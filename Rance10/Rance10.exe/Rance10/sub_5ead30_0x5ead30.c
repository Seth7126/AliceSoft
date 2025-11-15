// 函数: sub_5ead30
// 地址: 0x5ead30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 s>= 0)
    void* edx_1 = data_7fd4cc
    
    if (arg1 s< (*(edx_1 + 0x58) - *(edx_1 + 0x54)) s>> 3)
        int32_t* edi_1 = *(edx_1 + 0x54) + (arg1 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            return sub_5c4fb0(edi_2 + 0x10) __tailcall

int32_t result
result.b = 0
return result
