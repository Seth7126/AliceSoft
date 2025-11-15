// 函数: ?__acrt_fp_is_negative@@YA_NABN@Z
// 地址: 0x716759
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char edx = 0

if ((*(arg1 + 4) & 0x80000000) != 0)
    edx = 1

int32_t result
result.b = edx
return result
