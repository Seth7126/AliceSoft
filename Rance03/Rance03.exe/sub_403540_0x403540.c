// 函数: sub_403540
// 地址: 0x403540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = arg1[1]
int32_t result = *arg1
int32_t ecx_1 = edx - result

if (ecx_1 u> arg2)
    result += arg2
    arg1[1] = result
else if (ecx_1 u< arg2)
    sub_403590(arg1, result - edx + arg2)
    char* ecx_3 = arg1[1]
    _memset(ecx_3, 0, *arg1 - ecx_3 + arg2)
    result = *arg1 + arg2
    arg1[1] = result

return result
