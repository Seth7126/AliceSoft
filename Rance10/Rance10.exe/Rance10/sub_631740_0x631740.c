// 函数: sub_631740
// 地址: 0x631740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0 && arg1[5] u>= 8)
    char* ebx_1 = *arg1
    
    if (arg3 != 0)
        sub_700660(arg1, ebx_1, arg3 * 2)
    
    sub_403160(ebx_1, arg1[5] + 1, 2)

arg1[5] = 7
bool cond:1 = arg1[5] u< 8
arg1[4] = arg3

if (cond:1)
    *(arg1 + (arg3 << 1)) = 0
    return 0

int32_t result = *arg1
*(result + (arg3 << 1)) = 0
return result
