// 函数: sub_5b97e0
// 地址: 0x5b97e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = (arg2[9] - arg2[8]) s>> 6
sub_5bc9f0(arg1 + 0x54, i_1)

if (i_1 s> 0)
    int32_t edi_1 = 0
    int32_t ebx_1 = 0
    int32_t i
    
    do
        int32_t* edx_2 = arg2[8] + edi_1
        char* ecx_2 = *(arg1 + 0x54) + ebx_1
        *(ecx_2 + 0x20) = *(edx_2 + 0x24)
        *(ecx_2 + 0x30) = *(edx_2 + 0x34)
        *(ecx_2 + 0x38) = edx_2[0xf]
        *(ecx_2 + 0x18) = *edx_2
        
        if (ecx_2 != &edx_2[1])
            sub_403590(ecx_2, &edx_2[1], 0, 0xffffffff)
        
        ebx_1 += 0x3c
        edi_1 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
