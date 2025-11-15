// 函数: sub_4056a0
// 地址: 0x4056a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2[5] u>= 0x10)
    if (arg1 != 0)
        *arg1 = *arg2
    
    *arg2 = 0
else
    void* eax_1 = arg2[4]
    
    if (eax_1 != 0xffffffff)
        sub_6feca0(arg1, arg2, eax_1 + 1)

*(arg1 + 0x10) = arg2[4]
int32_t eax_5 = arg2[5]
*(arg1 + 0x14) = eax_5
arg2[5] = 0xf
bool cond:0 = arg2[5] u< 0x10
arg2[4] = 0

if (cond:0)
    *arg2 = 0
    return eax_5

char* eax_6 = *arg2
*eax_6 = 0
return eax_6
