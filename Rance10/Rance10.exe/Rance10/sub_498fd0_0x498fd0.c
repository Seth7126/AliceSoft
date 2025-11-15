// 函数: sub_498fd0
// 地址: 0x498fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = arg2

if (i s< 0)
    return 0x75cec7

if ((*(*arg1 + 0xc))() s<= i)
    return 0x75cecf

arg2 = *arg1[1]
bool cond:0 = i s>= 0

while (i s> 0)
    sub_429080(&arg2)
    i -= 1
    cond:0 = i s>= 0

if (not(cond:0))
    int32_t i_2 = neg.d(i)
    int32_t i_1
    
    do
        sub_429da0(&arg2)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

void** result = arg2 + 0x28

if (result[5] u< 0x10)
    return result

return *result
