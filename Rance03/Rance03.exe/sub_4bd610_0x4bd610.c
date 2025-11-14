// 函数: sub_4bd610
// 地址: 0x4bd610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i_1 = *(arg1 + 4)

if (i_1 == *(arg1 + 8))
    return 0

int32_t* i = i_1
int32_t result = *i

for (; i != *(arg1 + 8); i = &i[0x17])
    int32_t ecx = i[3]
    
    if (arg2 s< i[2])
        break
    
    if (arg2 == ecx)
        return i[1]
    
    if (arg2 s< ecx)
        float xmm0 = sub_4bebf0(i, arg2)
        int32_t ecx_2 = *i
        return int.d(_mm_cvtepi32_ps(zx.o(i[1] - ecx_2)) * xmm0 + _mm_cvtepi32_ps(zx.o(ecx_2)))
    
    result = i[1]

return result
