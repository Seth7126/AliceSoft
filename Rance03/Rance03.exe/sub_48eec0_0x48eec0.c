// 函数: sub_48eec0
// 地址: 0x48eec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x14)
*(arg1 + 0x34) = 3
*(arg1 + 0x2c) = 1
*(arg1 + 0x30) = 0

for (; i != *(arg1 + 0x18); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

*(arg1 + 0x18) = *(arg1 + 0x14)
int32_t ebx = *(arg1 + 0x24)

for (int32_t* i_1 = *(arg1 + 0x20); i_1 != ebx; i_1 = &i_1[6])
    if (i_1[5] u>= 0x10)
        j__free(*i_1)
    
    i_1[5] = 0xf
    i_1[4] = 0
    *i_1 = 0

int32_t result = *(arg1 + 0x20)
*(arg1 + 0x24) = result
int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    *(arg1 + 0xc) = 0

return result
