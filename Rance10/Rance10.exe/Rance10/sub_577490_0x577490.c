// 函数: sub_577490
// 地址: 0x577490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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
        
        if (sub_58d3c0(ecx, *(result + (i_1 << 2))) != 0)
            i = i_1
        else
            result = result + (i_1 << 2) + 4
            i += 0xffffffff - i_1
        
        ecx = var_4
    while (i s> 0)

return result
