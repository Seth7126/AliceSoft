// 函数: sub_639050
// 地址: 0x639050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_639720(arg1) == 0)
    return 0

int16_t* edi = *arg1
arg1[0x11] = zx.d(arg1[0x12].w)

if (edi != arg1[2])
    if (*edi == 0x5c && sub_636a80(arg1) != 0)
        *arg1 = &edi[1]
    
    *arg1 += 2

sub_635790(arg1)
uint32_t result
result.b = 1
return result
