// 函数: ___crtCompareStringW
// 地址: 0x6d6008
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg4
void invalid

if (esi s> 0)
    int32_t eax_1
    eax_1, invalid = _wcsnlen(invalid, arg3, esi)
    esi = eax_1

int32_t eax_2 = arg6

if (eax_2 s> 0)
    eax_2 = _wcsnlen(invalid, arg5, eax_2)

if (esi != 0 && eax_2 != 0)
    return sub_6e7e83(arg1, arg2, arg3, esi, arg5, eax_2)

if (esi != eax_2)
    return ((esi - eax_2) s>> 0x1f & 0xfffffffe) + 3

return CSTR_EQUAL
