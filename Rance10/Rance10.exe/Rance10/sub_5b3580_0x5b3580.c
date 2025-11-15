// 函数: sub_5b3580
// 地址: 0x5b3580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t i_1 = arg5
int32_t result

if (*(arg3 + 4) + (i_1 << 3) u> *(arg3 + 8))
    result.b = 0
    return result

if (i_1 s> 0)
    int32_t ebx_1 = arg4 << 3
    uint32_t i
    
    do
        char* ecx = *(arg3 + 4)
        ebx_1 += 8
        uint32_t edx_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
        *(arg3 + 4) = &ecx[4]
        *(ebx_1 + *arg2 - 8) = edx_6
        char* ecx_1 = *(arg3 + 4)
        uint32_t edx_13 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *(arg3 + 4) = &ecx_1[4]
        *(*arg2 + ebx_1 - 4) = edx_13
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
