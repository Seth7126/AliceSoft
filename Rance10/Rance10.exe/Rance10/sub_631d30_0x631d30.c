// 函数: sub_631d30
// 地址: 0x631d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2[5] u>= 8)
    if (arg1 != 0)
        *arg1 = *arg2
    
    *arg2 = 0
else
    void* eax_1 = arg2[4]
    
    if (eax_1 != 0xffffffff)
        sub_6feca0(arg1, arg2, (eax_1 + 1) * 2)

*(arg1 + 0x10) = arg2[4]
*(arg1 + 0x14) = arg2[5]
arg2[5] = 7
bool cond:0 = arg2[5] u< 8
arg2[4] = 0

if (cond:0)
    *arg2 = 0
    return 0

int16_t* result = *arg2
*result = 0
return result
