// 函数: sub_66f670
// 地址: 0x66f670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg3
void* result = arg3
int32_t i = (arg2 - result) s/ 0x28

if (i s> 0)
    int32_t* eax_1
    eax_1.b = arg4[9].b
    var_4:3.b = eax_1.b
    
    do
        int32_t eax_3
        int32_t edx_3
        edx_3:eax_3 = sx.q(i)
        int32_t i_1 = (eax_3 - edx_3) s>> 1
        int32_t edx_4 = i_1 * 5
        int32_t eax_4
        eax_4.b = *(result + (edx_4 << 3) + 0x24)
        int32_t* edx_5 = result + (edx_4 << 3)
        
        if (var_4:3.b != 0)
            if (eax_4.b == 0 || *arg4 s>= *edx_5)
                result = &edx_5[0xa]
                i += 0xffffffff - i_1
            else
                i = i_1
        else if (eax_4.b != 0)
            i = i_1
        else if (*arg4 s>= *edx_5)
            result = &edx_5[0xa]
            i += 0xffffffff - i_1
        else
            i = i_1
    while (i s> 0)

return result
