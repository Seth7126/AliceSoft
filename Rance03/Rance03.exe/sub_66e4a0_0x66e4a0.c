// 函数: sub_66e4a0
// 地址: 0x66e4a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* result = arg5
int32_t ebx = arg6
int32_t edx = result * 2
int128_t* result_1 = arg4

if (edx s<= ebx)
    void* ebp_1 = result * 5
    
    do
        int32_t var_1c_1 = arg7
        void* edx_1 = &arg3[ebp_1 * 2]
        int32_t* esi_1 = edx_1 + (ebp_1 << 3)
        result = sub_66e560(result, edx_1, arg3, edx_1, esi_1, result_1)
        ebx -= edx
        result_1 = result
        arg3 = esi_1
    while (ebx s>= edx)
    
    result = arg5

if (ebx s> result)
    int32_t __saved_esi_1 = arg7
    void* eax = result * 5
    int128_t* edx_2 = &arg3[eax * 2]
    return sub_66e560(eax, edx_2, arg3, edx_2, arg2, result_1)

if (arg3 == arg2)
    return result

int128_t* edi = result_1 - arg3

do
    *(edi + arg3) = *arg3
    *(edi + arg3 + 0x10) = *(arg3 + 0x10)
    *(edi + arg3 + 0x20) = *(arg3 + 0x20)
    arg3 = &arg3[0xa]
while (arg3 != arg2)

return result
