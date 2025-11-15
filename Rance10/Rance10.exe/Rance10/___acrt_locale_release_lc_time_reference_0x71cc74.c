// 函数: ___acrt_locale_release_lc_time_reference
// 地址: 0x71cc74
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0 || arg1 == &data_7563b0)
    return 0x7fffffff

int32_t eax = *(arg1 + 0xb0)
*(arg1 + 0xb0) -= 1
return eax - 1
