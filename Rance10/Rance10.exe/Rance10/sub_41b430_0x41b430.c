// 函数: sub_41b430
// 地址: 0x41b430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x38e38e39, *(arg1 + 0xc) - *(arg1 + 8))
    int32_t edx_4 = edx_3 s>> 4
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        eax = *(arg1 + 8) + arg2 * 0x48
        
        if (eax != 0)
            void** eax_5 = eax + 0x18
            eax_5[4] = 0
            
            if (eax_5[5] u>= 0x10)
                eax_5 = *eax_5
            
            *eax_5 = nullptr
            eax_5.b = 1
            return eax_5

eax.b = 0
return eax
