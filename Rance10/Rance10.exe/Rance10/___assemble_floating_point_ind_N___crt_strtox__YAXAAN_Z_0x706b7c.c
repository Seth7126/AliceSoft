// 函数: ??$assemble_floating_point_ind@N@__crt_strtox@@YAXAAN@Z
// 地址: 0x706b7c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] |= 0x80000000
int32_t eax = *arg1
arg1[1] |= 0x7ff00000
*arg1 = eax
int32_t result = (arg1[1] & 0xfff80000) | 0x80000
*arg1 = 0
arg1[1] = result
return result
