// 函数: sub_661600
// 地址: 0x661600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg3
int32_t i = (arg2 - result) s/ 0xc0

while (i s> 0)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(i)
    int32_t i_1 = (eax_3 - edx_3) s>> 1
    int32_t eax_6 = i_1 * 0xc0
    
    if (*(eax_6 + result) s>= *arg4)
        i = i_1
    else
        result = result + 0xc0 + eax_6
        i += 0xffffffff - i_1

return result
