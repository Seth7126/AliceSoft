// 函数: sub_431b80
// 地址: 0x431b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 != 0)
    void* eax_1 = sub_4039d0(arg2)
    *arg1 = eax_1
    arg1[1] = eax_1
    arg1[2] = *arg1 + arg2
    _memset(*arg1, 0, arg2)
    arg1[1] += arg2

return arg1
