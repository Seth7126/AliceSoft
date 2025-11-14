// 函数: sub_6626d0
// 地址: 0x6626d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg3
int32_t i = (arg2 - result) s/ 0xc0

if (i s> 0)
    int32_t ebx_1 = arg4[8]
    
    do
        int32_t eax_2
        int32_t edx_3
        edx_3:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx_3) s>> 1
        int32_t edx_5 = i_1 * 0xc0
        int32_t eax_4 = *(edx_5 + result + 0x20)
        
        if (ebx_1 s< eax_4 || (ebx_1 s<= eax_4 && *arg4 s< *(edx_5 + result)))
            i = i_1
        else
            result = result + 0xc0 + edx_5
            i += 0xffffffff - i_1
    while (i s> 0)

return result
