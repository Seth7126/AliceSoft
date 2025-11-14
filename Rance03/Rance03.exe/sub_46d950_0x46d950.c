// 函数: sub_46d950
// 地址: 0x46d950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 5) == 0 || *(arg1 + 0x38) != 0)
    return 

int32_t* ecx = *(arg1 + 0x3c)
int32_t eax_2

if (ecx == 0)
    eax_2 = 0
else
    eax_2 = (**ecx)()

if (eax_2 - *(arg1 + 0x34) u< 0x3e8)
    return 

bool cond:0_1 = *(arg1 + 0x3b) == 0
*(arg1 + 0x38) = 1

if (not(cond:0_1))
    ShowCursor(0)
    *(arg1 + 0x3b) = 0

int32_t* ecx_1 = *(arg1 + 0x3c)

if (ecx_1 != 0)
    *(arg1 + 0x34) = (**ecx_1)()
    return 

*(arg1 + 0x34) = 0
