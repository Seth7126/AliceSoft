// 函数: sub_66f800
// 地址: 0x66f800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg3
int32_t i = (arg2 - result) s/ 0x28

if (i s> 0)
    int32_t ebx
    ebx.b = *(arg4 + 0x25)
    
    do
        int32_t eax_3
        int32_t edx_3
        edx_3:eax_3 = sx.q(i)
        int32_t i_1 = (eax_3 - edx_3) s>> 1
        void* eax_5 = result + i_1 * 0x28
        int32_t edx_4
        edx_4.b = *(eax_5 + 0x25)
        
        if (edx_4.b != 0)
            if (ebx.b == 0 || *eax_5 s>= *arg4)
                i = i_1
            else
                result = eax_5 + 0x28
                i += 0xffffffff - i_1
        else if (ebx.b != 0)
            result = eax_5 + 0x28
            i += 0xffffffff - i_1
        else if (*eax_5 s>= *arg4)
            i = i_1
        else
            result = eax_5 + 0x28
            i += 0xffffffff - i_1
    while (i s> 0)

return result
