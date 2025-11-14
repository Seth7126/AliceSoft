// 函数: sub_513130
// 地址: 0x513130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (*(*arg1 + 0x58))()
int32_t ecx

if (arg1[0xd] s> 0 || arg1[0xe] s> 0)
    int32_t edx_1 = arg1[0xc]
    ecx = arg1[0xe]
    
    if (edx_1 s< 0)
        edx_1 = 0
    
    if (edx_1 + ecx s> eax_1)
        ecx = eax_1 - edx_1
else
    ecx = eax_1

int32_t ecx_2

if (arg3 i- 1 u> 8)
    ecx_2 = 0
else
    switch (arg3 i+ &jump_table_5131a8[2]:3)
        case &lookup_table_5131b4, &lookup_table_5131b4[1], &lookup_table_5131b4[2]
            ecx_2 = 0
        case &lookup_table_5131b4[3], &lookup_table_5131b4[4], &lookup_table_5131b4[5]
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(ecx)
            ecx_2 = neg.d((eax_7 - edx_2) s>> 1)
        case &lookup_table_5131b4[6], &lookup_table_5131b4[7], &lookup_table_5131b4[8]
            ecx_2 = neg.d(ecx)

return fconvert.t(_mm_cvtepi32_ps(zx.o(ecx_2)) + arg2)
