// 函数: sub_5e8340
// 地址: 0x5e8340
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
int32_t result

if (arg1 s>= 0)
    void* esi_1 = data_7fd4cc
    
    if (arg1 s< (*(esi_1 + 0x58) - *(esi_1 + 0x54)) s>> 3)
        int32_t* edi_1 = *(esi_1 + 0x54) + (arg1 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            *(edi_2 + 0x40) = ebx.b
            result.b = 1
            return result

result.b = 0
return result
