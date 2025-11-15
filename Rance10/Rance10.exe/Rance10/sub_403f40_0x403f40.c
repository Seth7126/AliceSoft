// 函数: sub_403f40
// 地址: 0x403f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg1 + 4)

if (edx == 0)
    return 0

void** ecx = arg2

if (ecx[5] u>= 0x10)
    ecx = *ecx

arg2 = ecx
jump(*(*edx + 0x24))
