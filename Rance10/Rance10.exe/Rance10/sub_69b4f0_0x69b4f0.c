// 函数: sub_69b4f0
// 地址: 0x69b4f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == 0)
    return 

int32_t edx_1 = *(arg3 + 4)

if (edx_1 == 0)
    return 

while (true)
    int32_t eax_1 = edx_1
    
    if (eax_1 == *(arg3 + 4))
        *(arg3 + 4) = edx_1 + 1
    else
        eax_1 = *(arg3 + 4)
    
    if (eax_1 == edx_1)
        sub_69b1b0(arg1, arg2, arg3)
        break
    
    edx_1 = *(arg3 + 4)
    
    if (edx_1 == 0)
        return 
