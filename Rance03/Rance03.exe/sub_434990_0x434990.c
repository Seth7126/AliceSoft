// 函数: sub_434990
// 地址: 0x434990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (void* i = *(arg1 + 0x1c); i != *(arg1 + 0x20); i += 0x1c)
    int32_t* ecx_1 = *(i + 0x18)
    
    if (ecx_1 != 0)
        (**ecx_1)(1)

int32_t ebx = *(arg1 + 0x20)

for (int32_t* i_1 = *(arg1 + 0x1c); i_1 != ebx; i_1 = &i_1[7])
    if (i_1[5] u>= 0x10)
        j__free(*i_1)
    
    i_1[5] = 0xf
    i_1[4] = 0
    *i_1 = 0

int32_t eax_2 = *(arg1 + 0x1c)
*(arg1 + 0x20) = eax_2
bool cond:0 = *(arg1 + 0x18) u< 0x10
*(arg1 + 0x14) = 0

if (cond:0)
    *(arg1 + 4) = 0
    return eax_2

char* eax_3 = *(arg1 + 4)
*eax_3 = 0
return eax_3
