// 函数: ??$common_vsprintf_s@D@@YAH_KQADIQBDQAU__crt_locale_pointers@@1@Z
// 地址: 0x70415e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg5 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

if (arg3 == 0 || arg4 u<= 0)
    *__errno() = 0x16
else
    int32_t result = sub_703e66(arg1, arg2, arg3, arg4, arg5, arg6, arg7)
    
    if (result s< 0)
        *arg3 = 0
    
    if (result != 0xfffffffe)
        return result
    
    *__errno() = 0x22

__invalid_parameter_noinfo()
return 0xffffffff
