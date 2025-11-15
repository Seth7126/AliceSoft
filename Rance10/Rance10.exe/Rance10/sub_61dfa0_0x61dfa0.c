// 函数: sub_61dfa0
// 地址: 0x61dfa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

int32_t* esi = arg4

do
    if (esi != 0)
        *esi = *arg3
        esi[1] = arg3[1]
        esi[2] = arg3[2]
        esi[3] = arg3[3]
        *arg3 = 0xffffffff
    
    arg3 = &arg3[4]
    esi = &esi[4]
while (arg3 != arg2)

return esi
