// 函数: sub_693060
// 地址: 0x693060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg3
int32_t i = (arg2 - result) s/ 0x44

if (i s> 0)
    int32_t ebx
    ebx.b = *(arg4 + 0x34)
    
    do
        int32_t eax_3
        int32_t edx_3
        edx_3:eax_3 = sx.q(i)
        int32_t i_1 = (eax_3 - edx_3) s>> 1
        void* eax_5 = result + i_1 * 0x44
        
        if (ebx.b != 0 || *(eax_5 + 0x34) != 1)
            result = eax_5 + 0x44
            i += 0xffffffff - i_1
        else
            i = i_1
    while (i s> 0)

return result
