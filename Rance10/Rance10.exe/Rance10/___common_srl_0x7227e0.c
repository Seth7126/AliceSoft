// 函数: ___common_srl
// 地址: 0x7227e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 u>= 0x40)
    return arg2 s>> 0x1f

if (arg3 u>= 0x20)
    return arg2 s>> (arg3 & 0x1f)

return arg1 u>> (0x1f & arg3) | arg2 << (0x20 - (0x1f & arg3))
