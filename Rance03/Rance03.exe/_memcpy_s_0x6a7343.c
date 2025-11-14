// 函数: _memcpy_s
// 地址: 0x6a7343
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg4 == 0)
    return 0

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

if (arg3 != 0 && arg2 u>= arg4)
    sub_69d850(arg1, arg3, arg4)
    return 0

_memset(arg1, 0, arg2)
int32_t result
void* eax_3

if (arg3 != 0)
    if (arg2 u>= arg4)
        return 0x16
    
    eax_3 = __errno()
    result = 0x22
else
    eax_3 = __errno()
    result = 0x16

*eax_3 = result
__invalid_parameter_noinfo()
return result
