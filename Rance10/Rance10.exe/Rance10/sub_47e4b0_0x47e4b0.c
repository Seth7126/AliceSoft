// 函数: sub_47e4b0
// 地址: 0x47e4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xa) == 0 || *(arg1 + 0x3d) != 0)
    return 

int32_t* ecx = *(arg1 + 0x40)
int32_t eax_2

if (ecx == 0)
    eax_2 = 0
else
    eax_2 = (**ecx)()

if (eax_2 - *(arg1 + 0x38) u< 0x3e8)
    return 

bool cond:0_1 = *(arg1 + 0x3f) == 0
*(arg1 + 0x3d) = 1

if (not(cond:0_1))
    ShowCursor(0)
    *(arg1 + 0x3f) = 0

int32_t* ecx_1 = *(arg1 + 0x40)

if (ecx_1 != 0)
    *(arg1 + 0x38) = (**ecx_1)()
    return 

*(arg1 + 0x38) = 0
