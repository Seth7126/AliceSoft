// 函数: sub_552c60
// 地址: 0x552c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *arg2
int32_t eax = *arg3

if (ebx s< eax)
    int32_t edx = arg2[1]
    int32_t xmm0_1 = arg2[3]
    int32_t ecx = arg2[4]
    *arg2 = eax
    arg2[1] = arg3[1]
    arg2[3] = arg3[3]
    arg2[4] = arg3[4]
    *arg3 = ebx
    arg3[1] = edx
    arg3[3] = xmm0_1
    arg3[4] = ecx

int32_t result = *arg2
int32_t ebx_1 = *arg4

if (ebx_1 s< result)
    int32_t ecx_1 = arg4[1]
    int32_t xmm0_2 = arg4[3]
    *arg4 = result
    arg4[1] = arg2[1]
    arg4[3] = arg2[3]
    int32_t ebp_1 = arg4[4]
    arg4[4] = arg2[4]
    *arg2 = ebx_1
    arg2[1] = ecx_1
    arg2[3] = xmm0_2
    int32_t edx_2 = *arg2
    arg2[4] = ebp_1
    result = *arg3
    
    if (edx_2 s< result)
        *arg2 = result
        arg2[1] = arg3[1]
        arg2[3] = arg3[3]
        result = arg3[4]
        arg2[4] = result
        *arg3 = edx_2
        arg3[1] = ecx_1
        arg3[3] = xmm0_2
        arg3[4] = ebp_1

return result
