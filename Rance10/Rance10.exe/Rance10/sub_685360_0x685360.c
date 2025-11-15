// 函数: sub_685360
// 地址: 0x685360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg1 + 0xc)

if (edx != 0)
    int32_t ecx = arg2
    
    if (ecx s>= 0 && ecx u< (*(arg1 + 0x28) - *(arg1 + 0x24)) s>> 2)
        int32_t edi = arg3
        int32_t ebx = ecx << 2
        
        if (*(ebx + *(arg1 + 0x24)) != edi)
            int32_t* edi_1
            
            if (edi != 0)
                edi_1 = &arg3
            else
                arg2 = edi
                edi_1 = &arg2
            
            (*(*edx + 0x20))(edx, ecx, 1, edi_1)
            *(ebx + *(arg1 + 0x24)) = arg3
        
        int32_t eax_3
        eax_3.b = 1
        return eax_3

int32_t eax
eax.b = 0
return eax
