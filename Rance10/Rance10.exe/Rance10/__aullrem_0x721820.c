// 函数: __aullrem
// 地址: 0x721820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result

if (arg4 != 0)
    uint32_t i = arg4
    int32_t ebx_1 = arg3
    uint32_t edx_4 = arg2
    int32_t eax_4 = arg1
    
    do
        ebx_1 = rrc.d(ebx_1, 1, (i & 1) != 0)
        uint32_t temp4_1 = edx_4
        edx_4 u>>= 1
        eax_4 = rrc.d(eax_4, 1, (temp4_1 & 1) != 0)
        i u>>= 1
    while (i != 0)
    
    uint32_t temp0_1 = divu.dp.d(edx_4:eax_4, ebx_1)
    int32_t eax_6 = temp0_1 * arg4
    int32_t eax_8
    int32_t edx_5
    edx_5:eax_8 = mulu.dp.d(temp0_1, arg3)
    int32_t edx_6 = edx_5 + eax_6
    
    if (edx_5 + eax_6 u< edx_5 || edx_6 u> arg2)
        eax_8 -= arg3
    else if (edx_6 u>= arg2 && eax_8 u> arg1)
        eax_8 -= arg3
    
    result = neg.d(eax_8 - arg1)
else
    result = modu.dp.d((modu.dp.d(0:arg2, arg3)):arg1, arg3)

return result
