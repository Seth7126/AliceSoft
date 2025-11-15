// 函数: sub_5f0520
// 地址: 0x5f0520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != arg2)
    void* ebx_1 = *arg1
    
    if (ebx_1 != 0)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x2aaaaaab, arg1[2] - ebx_1)
        int32_t edx_2 = edx_1 s>> 1
        sub_403160(ebx_1, (edx_2 u>> 0x1f) + edx_2, 0xc)
        *arg1 = 0
        arg1[1] = 0
        arg1[2] = 0
    
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    *arg2 = 0
    arg2[1] = 0
    arg2[2] = 0

return arg1
