// 函数: ?_Assign@location@Concurrency@@QAEXABV12@@Z
// 地址: 0x6f304d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 ^= (*arg2 ^ *arg1) & 0xfffffff
*arg1 = ((*arg2 ^ *arg1) & 0xfffffff) ^ *arg2
arg1[2] = arg2[2]
arg1[1] = arg2[1]
int32_t result = arg2[3]
arg1[3] = result
return result
