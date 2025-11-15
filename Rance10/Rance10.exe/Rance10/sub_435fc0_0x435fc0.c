// 函数: sub_435fc0
// 地址: 0x435fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x43c) != 0)
    return *(arg1 + 0x434)

if (*(arg1 + 0xc8) == *(arg1 + 0xcc))
    int32_t* ecx_2 = *(arg1 + 0x430)
    
    if (ecx_2 != 0)
        return (**ecx_2)() - *(arg1 + 0x438)
else
    void** ecx = *(data_7fcb6c + 0x934)
    char eax_3
    
    if (ecx != 0)
        int32_t var_8_1 = *(arg1 + 0x42c)
        eax_3 = sub_4884f0(ecx)
    
    if (ecx == 0 || eax_3 == 0)
        return *(arg1 + 0xbc)
    
    void** ecx_1 = *(data_7fcb6c + 0x934)
    
    if (ecx_1 != 0)
        int32_t var_8_2 = *(arg1 + 0x42c)
        return sub_488920(ecx_1)

return 0
