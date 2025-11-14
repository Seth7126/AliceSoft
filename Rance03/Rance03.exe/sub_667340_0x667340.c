// 函数: sub_667340
// 地址: 0x667340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
**(arg1 + 0x130) = arg1
void** eax
eax.b = *(arg1 + 0x150)
*(arg1 + 0x151) = eax.b
*(arg1 + 0x150) = 1
int32_t eax_2 = sub_671480(arg1 + 0x1b8, GetScrollPos(*(arg1 + 0x188), *(arg1 + 0x190)), 
    *(arg1 + 0x154), *(arg1 + 0x158))

if (eax_2 != 0xffffffff)
    int32_t edx_1 = 1 << eax_2.b
    int32_t ecx_2 = *(arg1 + 0x2bc)
    
    if (edx_1 == (ecx_2 & 0x7fffffff))
        edx_1 |= (ecx_2 & 0x80000000) + 0x80000000
    
    *(arg1 + 0x2bc) = edx_1

*(arg1 + 0x2a4) = *(arg1 + 0x158) - *(arg1 + 0x2c)
return 0
