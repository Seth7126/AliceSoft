// 函数: sub_6573c0
// 地址: 0x6573c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
**(arg1 + 0x2c4) = arg1
void** eax
eax.b = *(arg1 + 0x2d0)
*(arg1 + 0x2d1) = eax.b
*(arg1 + 0x2d0) = 1
int32_t eax_2 = sub_671480(arg1 + 0x348, GetScrollPos(*(arg1 + 0x308), *(arg1 + 0x310)), 
    *(arg1 + 0x2d4), *(arg1 + 0x2d8))

if (eax_2 != 0xffffffff)
    int32_t edx_1 = 1 << eax_2.b
    int32_t ecx_2 = *(arg1 + 0x44c)
    
    if (edx_1 == (ecx_2 & 0x7fffffff))
        edx_1 |= (ecx_2 & 0x80000000) + 0x80000000
    
    *(arg1 + 0x44c) = edx_1

*(arg1 + 0x434) = *(arg1 + 0x2d8) - *(arg1 + 0x2c)
return 0
