// 函数: sub_1000e5d0
// 地址: 0x1000e5d0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (*(arg1 + 0x70) != 0 && *(arg1 + 0x74) == 0 && *(arg1 + 0xc0) == 0)
    int32_t* eax_1 = *(arg1 + 0x18)
    
    if (eax_1 == 0)
        return sub_1000c930(arg1)
    
    int32_t edi_1 = *(arg1 + 0xb8)
    int32_t edi_2 = edi_1 + *(arg1 + 0x20)
    int32_t ebx_2 = adc.d(*(arg1 + 0xbc), *(arg1 + 0x24), edi_1 + *(arg1 + 0x20) u< edi_1)
    int32_t var_8
    (*(*eax_1 + 0xc))(eax_1, &var_8)
    int32_t var_4
    uint32_t eax_3 = __alldiv(edi_2 - var_8, sbb.d(ebx_2, var_4, edi_2 u< var_8), 0x2710, 0)
    
    if (eax_3 s< 0x32)
        return sub_1000c930(arg1)
    
    uint32_t eax_5 = sub_100112e0(eax_3, 0xa, sub_1000e5c0, arg1, 0)
    *(arg1 + 0xc0) = eax_5
    
    if (eax_5 == 0)
        return sub_1000c930(arg1)

return 0
