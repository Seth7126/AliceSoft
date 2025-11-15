// 函数: ?compute_iso_week@@YAHHHH@Z
// 地址: 0x70e86e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
int32_t result = compute_iso_week_internal(arg1, arg2, arg3)

if (result == 0)
    int32_t ecx_1
    ecx_1.b = __crt_time_is_leap_year<int32_t>(arg1 - 1) != 0
    return compute_iso_week_internal(arg1 - 1, arg2 - arg3 + 7, ecx_1 + 0x16d)

if (result s> 0)
    return result

return 1
