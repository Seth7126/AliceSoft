// 函数: sub_6196f0
// 地址: 0x6196f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[0x7f]
int32_t esi = *(arg1[0x7e] + (edx << 2) - 4)
int32_t result = edx - 1
arg1[0x7f] = result

if (esi == 0xffffffff)
    return result

int32_t var_8_1 = esi
return sub_619720(arg1)
