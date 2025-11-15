// 函数: sub_405950
// 地址: 0x405950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t result = *arg1
int32_t ecx_1 = edx - result

if (ecx_1 u> arg2)
    result += arg2
    arg1[1] = result
else if (ecx_1 u< arg2)
    sub_405a20(arg1, result - edx + arg2)
    uint32_t (* ecx_3)[0x4] = arg1[1]
    _memset(ecx_3, 0, *arg1 - ecx_3 + arg2)
    result = *arg1 + arg2
    arg1[1] = result

return result
