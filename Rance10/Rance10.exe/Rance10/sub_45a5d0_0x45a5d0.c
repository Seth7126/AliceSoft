// 函数: sub_45a5d0
// 地址: 0x45a5d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
uint32_t ebx = arg2

if (sub_61ed80(ebx, arg1 + 4) != 0 && sub_61ed80(ebx, arg1 + 0x1c) != 0
        && sub_61ec90(ebx, arg1 + 0x34) != 0 && sub_61ec90(ebx, &arg2) != 0)
    sub_456ae0(arg1 + 0x38, arg2)
    void* esi_1 = *(arg1 + 0x38)
    int32_t edi_1 = *(arg1 + 0x3c)
    
    if (esi_1 == edi_1)
        return 1
    
    while (true)
        if (sub_4597d0(esi_1, ebx, arg3) == 0)
            return 0
        
        esi_1 += 0x50
        
        if (esi_1 == edi_1)
            return 1

return 0
