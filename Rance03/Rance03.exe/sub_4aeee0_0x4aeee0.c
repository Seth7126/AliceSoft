// 函数: sub_4aeee0
// 地址: 0x4aeee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x69) == 0
*(arg1 + 0x68) = 0

if (cond:0)
    return 

int32_t* ecx = *(arg1 + 0x5c)

if (ecx != 0)
    jump(**ecx)
