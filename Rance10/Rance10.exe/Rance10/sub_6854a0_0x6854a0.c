// 函数: sub_6854a0
// 地址: 0x6854a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg3

if (esi == 0)
    return 

while (true)
    int32_t* eax_1 = *(arg1 + 8)
    
    if ((*(*eax_1 + 0x78))(eax_1, arg2, esi, &arg3) s>= 0)
        int32_t ecx_1 = arg3
        
        if (ecx_1 != 0)
            *arg4 = esi
            *arg5 = ecx_1 - 1
            break
    
    int32_t temp1_1 = esi
    esi -= 1
    
    if (temp1_1 == 1)
        return 
