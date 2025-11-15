// 函数: sub_624060
// 地址: 0x624060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax = sub_62ab60(arg1, *(arg2 + 8))

if (eax == 0)
    return eax

int32_t* edi = *(arg2 + 4)
void* ebp = &edi[*(arg2 + 8)]

while (edi != ebp)
    int32_t ecx_1 = *(arg1 + 0xc)
    int32_t ebx_1 = *edi
    
    if (ecx_1 s< *(arg1 + 0x14) + 4 && sub_405df0(arg1 + 4, ecx_1 + 0x40004) == 0)
        return 0
    
    int32_t ecx_3
    
    if (*(arg1 + 0xc) != 0)
        ecx_3 = *(arg1 + 8)
    else
        ecx_3 = 0
    
    edi = &edi[1]
    *(*(arg1 + 0x14) + ecx_3) = ebx_1
    *(arg1 + 0x14) += 4

int32_t* eax_1
eax_1.b = 1
return eax_1
