// 函数: ?_Assign_rv@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEX$$QAV12@@Z
// 地址: 0x6d7c16
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg2

if (esi[5] u>= 8)
    if (arg1 != 0)
        *arg1 = *esi
    
    *esi = nullptr
else
    sub_6e3507(arg1, esi, esi[4] + 1)

arg1[4] = esi[4]
arg1[5] = esi[5]
esi[5] = 7
esi[4] = 0

if (esi[5] u>= 8)
    esi = *esi

*esi = nullptr
return 0
