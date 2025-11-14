// 函数: sub_55a930
// 地址: 0x55a930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg3
void* result = arg3
int32_t i = (arg2 - result) s>> 2

if (i s> 0)
    void* ecx = *arg4
    var_4 = ecx
    
    do
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx) s>> 1
        int32_t* ebp_1 = result + (i_1 << 2)
        
        if (sub_5594e0(*ebp_1, ecx) == 0)
            i = i_1
        else
            result = &ebp_1[1]
            i += 0xffffffff - i_1
        
        ecx = var_4
    while (i s> 0)

return result
