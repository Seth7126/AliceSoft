// 函数: sub_5995f0
// 地址: 0x5995f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg3
int32_t result = arg3
int32_t i = (arg2 - result) s>> 2

while (i s> 0)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(i)
    int32_t i_1 = (eax_1 - edx) s>> 1
    
    if (sub_597ff0(*(result + (i_1 << 2)), *arg4) == 0)
        i = i_1
    else
        result = result + (i_1 << 2) + 4
        i += 0xffffffff - i_1

return result
