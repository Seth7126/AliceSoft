// 函数: sub_630db0
// 地址: 0x630db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[5]

if (eax u>= 8)
    sub_403160(*arg1, eax + 1, 2)

arg1[5] = 7
bool cond:0 = arg1[5] u< 8
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return 0

int16_t* result = *arg1
*result = 0
return result
