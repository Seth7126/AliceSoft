// 函数: sub_552dc0
// 地址: 0x552dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t ebp = *arg2
int32_t eax = *arg3

if (ebp s< eax)
    int32_t esi_1 = arg2[1]
    int32_t edx = arg2[3]
    int32_t ecx = arg2[4]
    *arg2 = eax
    arg2[1] = arg3[1]
    arg2[3] = arg3[3]
    arg2[4] = arg3[4]
    *arg3 = ebp
    arg3[1] = esi_1
    arg3[3] = edx
    arg3[4] = ecx

int32_t result = *arg2
int32_t ebp_1 = *arg4

if (ebp_1 s< result)
    int32_t edx_1 = arg4[1]
    int32_t* ebx_1 = arg4[4]
    int32_t ecx_1 = arg4[3]
    *arg4 = result
    arg4[1] = arg2[1]
    arg4[3] = arg2[3]
    arg4[4] = arg2[4]
    *arg2 = ebp_1
    arg4 = ebx_1
    arg2[1] = edx_1
    arg2[3] = ecx_1
    int32_t esi_3 = *arg2
    arg2[4] = ebx_1
    result = *arg3
    
    if (esi_3 s< result)
        *arg2 = result
        int32_t edx_2 = arg2[3]
        arg2[1] = arg3[1]
        arg2[3] = arg3[3]
        result = arg3[4]
        arg2[4] = result
        *arg3 = esi_3
        arg3[1] = edx_1
        arg3[3] = edx_2
        arg3[4] = ebx_1

return result
