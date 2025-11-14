// 函数: sub_6622b0
// 地址: 0x6622b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg3
int32_t i = (arg2 - result) s/ 0xc0

if (i s> 0)
    int32_t ebx_2 = arg4[5] * arg4[4]
    
    do
        int32_t eax_2
        int32_t edx_3
        edx_3:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx_3) s>> 1
        int32_t* edx_6 = i_1 * 0xc0 + result
        int32_t eax_5 = edx_6[5] * edx_6[4]
        
        if (ebx_2 s< eax_5 || (ebx_2 s<= eax_5 && *arg4 s< *edx_6))
            i = i_1
        else
            result = &edx_6[0x30]
            i += 0xffffffff - i_1
    while (i s> 0)

return result
