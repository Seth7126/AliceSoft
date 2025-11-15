// 函数: sub_5b6e20
// 地址: 0x5b6e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg3
int32_t i = (arg2 - result) s/ 0xc

while (i s> 0)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(i)
    int32_t i_1 = (eax_3 - edx_3) s>> 1
    int32_t ecx = i_1 * 3
    
    if (*(result + (ecx << 2) + 4) f< *(arg4 + 4))
        i = i_1
    else
        result = result + (ecx << 2) + 0xc
        i += 0xffffffff - i_1

return result
