// 函数: sub_654030
// 地址: 0x654030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = 0
int32_t edi = *arg1
int32_t esi = arg1[3]
_memset(arg1, 0, 0x1c8)
*arg1 = edi
arg1[3] = esi
arg1[4].b = 1
sub_679a90(arg1)
arg1[2] = 0
arg1[6] = 0
__builtin_memset(&arg1[0x24], 0, 0x30)
arg1[0x45] = 0
sub_65d1f0(arg1)
int32_t (** result)(int32_t* arg1) = (*arg1[1])(arg1, 0, 0x18)
arg1[0x6a] = result
*result = sub_65a930
result[1] = sub_65aa20
result[2] = sub_65a8c0
result[3] = sub_65a900
result[4].w = 0
result[5] = 1
arg1[5] = 0xc8
return result
