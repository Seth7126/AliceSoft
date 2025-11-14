// 函数: sub_66e810
// 地址: 0x66e810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg3
int32_t i = (arg2 - result) s/ 0x28

while (i s> 0)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(i)
    int32_t i_1 = (eax_3 - edx_3) s>> 1
    int32_t edx_4 = i_1 * 5
    
    if (*(result + (edx_4 << 3)) s>= *arg4)
        i = i_1
    else
        result = result + (edx_4 << 3) + 0x28
        i += 0xffffffff - i_1

return result
