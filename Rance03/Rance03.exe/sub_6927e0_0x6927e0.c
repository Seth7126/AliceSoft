// 函数: sub_6927e0
// 地址: 0x6927e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg3
int32_t i = (arg2 - result) s/ 0x44

while (i s> 0)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(i)
    int32_t i_1 = (eax_3 - edx_3) s>> 1
    int32_t edx_6 = i_1 * 0x11
    
    if (*(arg4 + 8) s< *(result + (edx_6 << 2) + 8))
        i = i_1
    else
        result = result + (edx_6 << 2) + 0x44
        i += 0xffffffff - i_1

return result
