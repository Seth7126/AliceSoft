// 函数: sub_65aa20
// 地址: 0x65aa20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** eax)(int32_t* arg1) = arg1[0x6a]
*eax = sub_65a930
eax[4].w = 0
eax[5] = 1
(*(*arg1 + 0x10))(arg1)
int32_t result = (*arg1[0x6b])(arg1)
arg1[0x23] = 0
return result
