// 函数: sub_6c1950
// 地址: 0x6c1950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *arg2
int128_t var_14
__builtin_memset(&var_14, 0, 0x14)
void* esi = *(arg1 + 0x1c)
var_14:0xc.d = eax
var_14:8.d = eax
int32_t var_4 = arg2[1]

if (sub_6b2ec0(&var_14, 1) != 0)
    return 0xffffff79

int32_t i = *(esi + 8)
int32_t edx = 0

while (i s> 1)
    i s>>= 1
    edx += 1

void* eax_4 = sub_6b2ec0(&var_14, edx)

if (eax_4 != 0xffffffff)
    return *(esi + (**(esi + (eax_4 << 2) + 0x20) << 2))

return 0xffffff78
