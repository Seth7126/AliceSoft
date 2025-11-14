// 函数: sub_5cdaf0
// 地址: 0x5cdaf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t* ecx = *(arg1 + 0x18)

if (ecx != 0)
    (**ecx)()

bool cond:0 = *(arg1 + 0x218) != 0
*(arg1 + 0x214) = 0

if (not(cond:0))
    *(arg1 + 0x218) = 1
