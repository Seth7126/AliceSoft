// 函数: sub_4033f0
// 地址: 0x4033f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0 && arg1[5] u>= 0x10)
    char* ebx_1 = *arg1
    
    if (arg3 != 0)
        sub_700660(arg1, ebx_1, arg3)
    
    sub_403160(ebx_1, arg1[5] + 1, 1)

arg1[5] = 0xf
bool cond:1 = arg1[5] u< 0x10
arg1[4] = arg3

if (cond:1)
    *(arg1 + arg3) = 0
    return 

*(*arg1 + arg3) = 0
