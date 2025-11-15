// 函数: sub_62ab60
// 地址: 0x62ab60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg1 + 0xc)

if (ecx s< *(arg1 + 0x14) + 4)
    char eax_3 = sub_405df0(arg1 + 4, ecx + 0x40004)
    
    if (eax_3 == 0)
        return eax_3

if (*(arg1 + 0xc) != 0)
    *(*(arg1 + 0x14) + *(arg1 + 8)) = arg2
    int32_t eax_6
    eax_6.b = 1
    *(arg1 + 0x14) += 4
    return eax_6

**(arg1 + 0x14) = arg2
int32_t eax_4
eax_4.b = 1
*(arg1 + 0x14) += 4
return eax_4
