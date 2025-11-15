// 函数: ?compute_iso_week_internal@@YAHHHH@Z
// 地址: 0x70e8bc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_10 = edi
int32_t result = divs.dp.d(sx.q(arg3 - mods.dp.d(sx.q(arg2 + 6), 7) + 7), 7)
uint32_t ecx = zx.d(__crt_time_is_leap_year<int32_t>(arg1))
int32_t edi_2 = arg3 - ecx
int32_t temp1_2 = mods.dp.d(sx.q(arg2 - arg3 + 0x173), 7)
int32_t temp1_3 = mods.dp.d(sx.q(ecx + 0x16d + temp1_2), 7)

if ((edi_2 s>= 0x16c && temp1_3 == 2) || (edi_2 s>= 0x16b && temp1_3 == 3))
    return 0xffffffff

if (edi_2 s>= 0x16a && temp1_3 == 4)
    return 0xffffffff

if (temp1_2 != 2 && temp1_2 != 3 && temp1_2 != 4)
    return result

return result + 1
