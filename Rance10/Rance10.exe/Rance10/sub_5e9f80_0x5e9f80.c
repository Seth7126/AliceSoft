// 函数: sub_5e9f80
// 地址: 0x5e9f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg1
int32_t result

if (arg1 s>= 0)
    void* edi_1 = data_7fd4cc
    
    if (arg1 s< (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
        int32_t edi_2 = *(edi_1 + 0x54)
        void* esi_2 = (arg1 << 3) + 4 + edi_2
        __Smtx_lock_shared(esi_2)
        void* edi_3 = *(edi_2 + (arg1 << 3))
        __Smtx_unlock_shared(esi_2)
        
        if (edi_3 != 0)
            if (arg2 s>= 0 && arg2 u< (*(edi_3 + 0x1a4) - *(edi_3 + 0x1a0)) s>> 2)
                *(*(edi_3 + 0x1a0) + (arg2 << 2)) = arg3
            
            result.b = 1
            return result

result.b = 0
return result
