// 函数: sub_5cb9b0
// 地址: 0x5cb9b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x2c)
*(arg1 + 0x21c) = 0

if (ecx != 0 && (**ecx)() != 0 && *(arg1 + 0x218) == 0)
    *(arg1 + 0x218) = 1

int32_t* ecx_1 = *(arg1 + 0x1c)

if (ecx_1 == 0)
    return 

jump(**ecx_1)
