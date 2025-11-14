// 函数: sub_552af0
// 地址: 0x552af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *arg2
int32_t eax = *arg3

if (ebx s< eax)
    int32_t edx = arg2[1]
    int128_t xmm1_1 = *(arg2 + 0xc)
    int32_t ecx = arg2[7]
    *arg2 = eax
    arg2[1] = arg3[1]
    *(arg2 + 0xc) = *(arg3 + 0xc)
    arg2[7] = arg3[7]
    *arg3 = ebx
    arg3[1] = edx
    *(arg3 + 0xc) = xmm1_1
    arg3[7] = ecx

int32_t result = *arg2
int32_t ebx_1 = *arg4

if (ebx_1 s< result)
    int32_t ecx_1 = arg4[1]
    int128_t xmm1_2 = *(arg4 + 0xc)
    int32_t ebp_1 = arg4[7]
    *arg4 = result
    arg4[1] = arg2[1]
    *(arg4 + 0xc) = *(arg2 + 0xc)
    arg4[7] = arg2[7]
    *arg2 = ebx_1
    arg2[1] = ecx_1
    *(arg2 + 0xc) = xmm1_2
    arg2[7] = ebp_1
    result = *arg3
    
    if (ebx_1 s< result)
        int128_t xmm1_3 = *(arg2 + 0xc)
        *arg2 = result
        arg2[1] = arg3[1]
        *(arg2 + 0xc) = *(arg3 + 0xc)
        result = arg3[7]
        arg2[7] = result
        *arg3 = ebx_1
        arg3[1] = ecx_1
        *(arg3 + 0xc) = xmm1_3
        arg3[7] = ebp_1

return result
