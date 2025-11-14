// 函数: sub_66f0b0
// 地址: 0x66f0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg3
int32_t i = (arg2 - result) s/ 0x28

if (i s> 0)
    int32_t ebx_1 = arg4[5]
    
    do
        int32_t eax_2
        int32_t edx_3
        edx_3:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx_3) s>> 1
        int32_t edx_4 = i_1 * 5
        int32_t eax_4 = *(result + (edx_4 << 3) + 0x14)
        int32_t* edx_5 = result + (edx_4 << 3)
        
        if (eax_4 s< ebx_1 || (eax_4 s<= ebx_1 && *edx_5 s< *arg4))
            result = &edx_5[0xa]
            i += 0xffffffff - i_1
        else
            i = i_1
    while (i s> 0)

return result
