// 函数: sub_643e10
// 地址: 0x643e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
        sub_643850(eax, edx, arg1, arg2, arg3, edx, arg6)

return 0
