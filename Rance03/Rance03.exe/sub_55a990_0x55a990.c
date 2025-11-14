// 函数: sub_55a990
// 地址: 0x55a990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg3
int32_t i = (arg2 - result) s>> 2

if (i s> 0)
    void* ecx = *arg4
    
    do
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx) s>> 1
        
        if (sub_5594e0(ecx, *(result + (i_1 << 2))) != 0)
            i = i_1
        else
            result = result + (i_1 << 2) + 4
            i += 0xffffffff - i_1
    while (i s> 0)

return result
