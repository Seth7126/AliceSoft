// 函数: sub_592e10
// 地址: 0x592e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t* result = (*(**(arg1 + 0x294) + 0x18))()

if (result == 0)
    result.b = 0
    return result

int32_t ebx = *(arg1 + 0x298)
int32_t i = 0

if (ebx - 1 s> 0)
    do
        int16_t ecx_2 = i.w
        i += 1
        *result = ecx_2
        result[1] = ecx_2 + 1
        result[2] = ebx.w
        result = &result[3]
    while (i s< *(arg1 + 0x298) - 1)

int32_t ecx_1
ecx_1.w = *(arg1 + 0x298)
ecx_1.w -= 1
*result = ecx_1.w
result[1] = 0
result[2] = ebx.w
return (*(**(arg1 + 0x294) + 0x1c))() != 0
