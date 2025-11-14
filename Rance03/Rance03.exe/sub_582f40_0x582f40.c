// 函数: sub_582f40
// 地址: 0x582f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i = *(arg1 + 0x28)

if (i != *(arg1 + 0x2c))
    void* edx_1 = i + 0x64
    
    do
        i += 0xbc
        float xmm1_2 = *(edx_1 - 0x3c) * arg4 + arg5
        *(edx_1 - 0x40) = *(edx_1 - 0x40) * arg2 + arg3
        *(edx_1 - 0x3c) = xmm1_2
        float xmm1_5 = *edx_1 * arg4 + arg5
        *(edx_1 - 4) = *(edx_1 - 4) * arg2 + arg3
        *edx_1 = xmm1_5
        float xmm1_8 = *(edx_1 + 0x3c) * arg4 + arg5
        *(edx_1 + 0x38) = *(edx_1 + 0x38) * arg2 + arg3
        *(edx_1 + 0x3c) = xmm1_8
        edx_1 += 0xbc
    while (i != *(arg1 + 0x2c))

return i
