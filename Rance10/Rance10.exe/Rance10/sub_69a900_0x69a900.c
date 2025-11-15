// 函数: sub_69a900
// 地址: 0x69a900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = arg2
arg1[1].b = 0
int32_t eax = __Mtx_lock(arg2)

if (eax != 0)
    std::_Throw_C_error(eax)

arg1[1].b = 1
return arg1
