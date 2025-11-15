// 函数: __strnicmp
// 地址: 0x7206b5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = data_7fc704

if (eax != 0)
    return __strnicmp_l(arg1, arg2, arg3, nullptr)

if (arg1 == eax || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x7fffffff

if (arg3 u<= 0x7fffffff)
    return ___ascii_strnicmp(arg1, arg2, arg3) __tailcall

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x7fffffff
