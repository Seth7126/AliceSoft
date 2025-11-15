// 函数: sub_4e8510
// 地址: 0x4e8510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = arg2
arg2 = i

if (i == 0)
    return 

void* eax = *(arg1 + 0x48)
int32_t* edx_1 = *(arg1 + 0x44)

if (edx_1 == eax)
    sub_42ccf0(arg1 + 0x44, &arg2)
    return 

while (*edx_1 != i)
    edx_1 = &edx_1[1]
    
    if (edx_1 == eax)
        break

if (edx_1 == eax)
    sub_42ccf0(arg1 + 0x44, &arg2)
