// 函数: sub_64a9b0
// 地址: 0x64a9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = 0
int32_t edi = *arg1
int32_t esi = arg1[3]
_memset(arg1, 0, 0x1a8)
*arg1 = edi
arg1[3] = esi
arg1[4].b = 0
char* result = sub_679a90(arg1)
arg1[2] = 0
arg1[6] = 0
__builtin_memset(&arg1[0x15], 0, 0x14)
arg1[0x1a] = 0x64
arg1[0x1b] = 0x64
arg1[0x1c] = 0x64
arg1[0x1d] = 0x64
__builtin_memset(&arg1[0x1e], 0, 0x20)
arg1[0x5b] = 8
arg1[0x5c] = &data_76e8a0
arg1[0x5d] = 0x3f
arg1[0x67] = 0
*(arg1 + 0x30) = 0x3ff0000000000000
arg1[5] = 0x64
return result
