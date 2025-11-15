// 函数: sub_49f190
// 地址: 0x49f190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = GetSystemMetrics(SM_YVIRTUALSCREEN)
int32_t ecx = *arg1

if (ecx s< result)
    *arg1 = result
    *arg2 += result - ecx

return result
