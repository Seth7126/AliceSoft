// 函数: sub_6beb90
// 地址: 0x6beb90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = arg5
int32_t edx = 0

if (i_1 s> 0)
    int32_t* ecx_1 = arg3
    int32_t eax
    int32_t i
    
    do
        if (*(arg4 - arg3 + ecx_1) != 0)
            eax = *ecx_1
            arg3[edx] = eax
            edx += 1
        
        ecx_1 = &ecx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (edx != 0)
        sub_6be900(eax, arg2, arg1, arg3, edx, sub_6b44c0)

return 0
