// 函数: sub_404790
// 地址: 0x404790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg3
int32_t i = (arg2 - result) s>> 2

while (i s> 0)
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(i)
    int32_t i_1 = (eax_2 - edx) s>> 1
    
    if (*(result + (i_1 << 2)) s>= *arg4)
        i = i_1
    else
        result = result + (i_1 << 2) + 4
        i += 0xffffffff - i_1

return result
