// 函数: sub_5de860
// 地址: 0x5de860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(arg1 + 0x10)

if (ecx s< *(arg1 + 0x18) + 4)
    char eax_3 = sub_64aeb0(arg1 + 8, ecx + 0x40004)
    
    if (eax_3 == 0)
        return eax_3

if (*(arg1 + 0x10) != 0)
    *(*(arg1 + 0x18) + *(arg1 + 0xc)) = arg2
    int32_t eax_6
    eax_6.b = 1
    *(arg1 + 0x18) += 4
    return eax_6

**(arg1 + 0x18) = arg2
int32_t eax_4
eax_4.b = 1
*(arg1 + 0x18) += 4
return eax_4
