// 函数: sub_5ead80
// 地址: 0x5ead80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg1 s>= 0)
    void* edx = data_7fd4cc
    
    if (arg1 s< (*(edx + 0x58) - *(edx + 0x54)) s>> 3)
        int32_t* edi_1 = *(edx + 0x54) + (arg1 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0 && (*(*arg2 + 0x40))(0x100).b != 0)
            result = (*(*arg2 + 0xc))(0)
            int32_t* ecx_2 = *(edi_2 + 0x1d0)
            
            if (ecx_2 != 0)
                return sub_5c99e0(ecx_2, result)

result.b = 0
return result
