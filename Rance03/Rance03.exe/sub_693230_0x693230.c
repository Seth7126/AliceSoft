// 函数: sub_693230
// 地址: 0x693230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg3
int32_t i = (arg2 - result) s/ 0x44

while (i s> 0)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(i)
    int32_t i_1 = (eax_3 - edx_3) s>> 1
    int32_t ecx_2 = i_1 * 0x11
    
    if (*(arg4 + 0x38) f<= *(result + (ecx_2 << 2) + 0x38))
        i = i_1
    else
        result = result + (ecx_2 << 2) + 0x44
        i += 0xffffffff - i_1

return result
