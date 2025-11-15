// 函数: sub_5655b0
// 地址: 0x5655b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

int32_t* esi = arg4

do
    if (esi != 0)
        *esi = *arg3
        esi[1] = arg3[1]
        *arg3 = 0
        arg3[1] = 0
    
    arg3 = &arg3[2]
    esi = &esi[2]
while (arg3 != arg2)

return esi
