// 函数: ?compute_iso_year@@YAHHHH@Z
// 地址: 0x70e951
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = compute_iso_week_internal(arg1, arg2, arg3)

if (eax == 0)
    return arg1 - 1

if (eax s> 0)
    return arg1

return arg1 + 1
