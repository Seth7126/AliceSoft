// 函数: sub_4608a0
// 地址: 0x4608a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x5c)

if (ecx != 0)
    (**ecx)(1)

*(arg1 + 0x5c) = 0
sub_456ed0(arg1 + 0x2c)

for (int32_t* i = *(arg1 + 0x50); i != *(arg1 + 0x54); i = &i[1])
    int32_t* ecx_2 = *i
    
    if (ecx_2 != 0)
        (**ecx_2)(1)

int32_t result = *(arg1 + 0x50)
*(arg1 + 0x54) = result
return result
