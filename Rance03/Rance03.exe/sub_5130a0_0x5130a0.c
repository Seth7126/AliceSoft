// 函数: sub_5130a0
// 地址: 0x5130a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (*(*arg1 + 0x54))()
int32_t edx = arg1[0xd]

if (edx s> 0 || arg1[0xe] s> 0)
    int32_t ecx = arg1[0xb]
    
    if (ecx s< 0)
        ecx = 0
    
    if (ecx + edx s> eax_1)
        edx = eax_1 - ecx
else
    edx = eax_1

int32_t edx_3

if (arg3 i- 1 u> 8)
    edx_3 = 0
else
    switch (arg3 i+ &jump_table_513114[2]:3)
        case &lookup_table_513120, &lookup_table_513120[3], &lookup_table_513120[6]
            edx_3 = 0
        case &lookup_table_513120[1], &lookup_table_513120[4], &lookup_table_513120[7]
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(edx)
            edx_3 = neg.d((eax_7 - edx_2) s>> 1)
        case &lookup_table_513120[2], &lookup_table_513120[5], &lookup_table_513120[8]
            edx_3 = neg.d(edx)

return fconvert.t(_mm_cvtepi32_ps(zx.o(edx_3)) + arg2)
