// 函数: sub_5c0720
// 地址: 0x5c0720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
sub_5c07a0(arg1)

if (sub_5c0870(arg1, arg2, arg3) != 0 && sub_5c0b30(arg1, arg2, arg3) != 0
        && sub_5c0d60(arg1, arg2, arg3) != 0)
    int32_t* esi_1 = arg1[0x12]
    int32_t edi_1 = arg1[0x13]
    
    if (esi_1 == edi_1)
        return 1
    
    while (true)
        if (*esi_1 != 0 && sub_5c0720(arg2, arg3) == 0)
            return 0
        
        esi_1 = &esi_1[1]
        
        if (esi_1 == edi_1)
            return 1

return 0
