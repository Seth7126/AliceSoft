// 函数: sub_468180
// 地址: 0x468180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x20); i != *(arg1 + 0x24); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

int32_t result = *(arg1 + 0x20)
*(arg1 + 0x24) = result
int32_t* ecx_1 = *(arg1 + 0x1c)
*(arg1 + 0x2c) = 0

if (ecx_1 != 0)
    result = (**ecx_1)(1)

*(arg1 + 0x1c) = 0
return result
