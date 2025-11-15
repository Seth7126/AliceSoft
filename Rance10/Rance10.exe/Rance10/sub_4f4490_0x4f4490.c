// 函数: sub_4f4490
// 地址: 0x4f4490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg2[1] = *arg2
int32_t result = (*(arg1 + 0x60) - *(arg1 + 0x5c)) & 0xfffffffc

if (result s> 4)
    int32_t edx_1 = arg3
    
    if (edx_1 s< 0)
        edx_1 = sub_4f4320(arg1)
        arg3 = edx_1
    
    if ((*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2 s<= edx_1)
        edx_1 = ((*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2) - 1
        arg3 = edx_1
    
    int32_t eax_4 = *(arg1 + 0x5c)
    int32_t* ebx_1 = *(eax_4 + (edx_1 << 2))
    char* esi_1 = eax_4 + (edx_1 << 2)
    int32_t edi_1 = *(arg1 + 0x68)
    arg2[1] = *arg2
    sub_4f0490(ebx_1[1], arg2)
    sub_6feca0(esi_1, &esi_1[4], *(arg1 + 0x60) - &esi_1[4])
    *(arg1 + 0x60) -= 4
    result = (**ebx_1)(1)
    
    if (ebx_1 == edi_1)
        int32_t ecx_9 = 0
        *(arg1 + 0x68) = 0
        
        if (arg3 - 1 s> 0)
            ecx_9 = arg3 - 1
        
        result = (*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2
        
        if (ecx_9 s< result)
            result = *(*(arg1 + 0x5c) + (ecx_9 << 2))
            *(arg1 + 0x68) = result

return result
