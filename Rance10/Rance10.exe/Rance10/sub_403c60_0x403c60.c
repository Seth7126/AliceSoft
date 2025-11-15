// 函数: sub_403c60
// 地址: 0x403c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg1 + 4)

if (edx == 0)
    return arg3

void** ecx = arg2

if (ecx[5] u>= 0x10)
    ecx = *ecx

arg2 = ecx
jump(*(*edx + 8))
