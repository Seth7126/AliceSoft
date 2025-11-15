// 函数: sub_6fc3da
// 地址: 0x6fc3da
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = *(arg1 + 0x18)

while (true)
    int32_t result = edx & 0xfffffffc
    
    if (result != 0 && result != 0xc)
        return result
    
    int32_t eax_2 = edx
    
    if (eax_2 == *(arg1 + 0x18))
        *(arg1 + 0x18) = (edx & 3) | 8
    else
        eax_2 = *(arg1 + 0x18)
    
    if (eax_2 == edx)
        int32_t* eax_3 = sub_6e810c(8)
        int32_t* edi_1
        
        if (eax_3 == 0)
            edi_1 = nullptr
        else
            edi_1 = sub_696b00(eax_3)
        
        int32_t result_2 = *(arg1 + 0x18)
        int32_t result_1 = result_2
        result = result_2
        
        while (true)
            if (result == *(arg1 + 0x18))
                *(arg1 + 0x18) = (result_1 & 3) | edi_1
            else
                result = *(arg1 + 0x18)
            
            if (result == result_2)
                break
            
            result_2 = result
            result_1 = result
        
        return result
    
    edx = eax_2
