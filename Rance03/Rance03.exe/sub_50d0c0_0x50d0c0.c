// 函数: sub_50d0c0
// 地址: 0x50d0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct partsengine::CRect::VTable* var_14
sub_4fbef0(&var_14, *(arg1 + 0x2d4), *(arg1 + 0x2d8), arg1 + 0x2dc)
int32_t eax_8
int32_t var_4

if (arg3 i- 1 u> 8)
    eax_8 = 0
else
    switch (arg3 i+ &jump_table_50d12c[2]:3)
        case &lookup_table_50d138, &lookup_table_50d138[1], &lookup_table_50d138[2]
            eax_8 = 0
        case &lookup_table_50d138[3], &lookup_table_50d138[4], &lookup_table_50d138[5]
            int32_t eax_5
            int32_t edx_1
            edx_1:eax_5 = sx.q(var_4)
            eax_8 = neg.d((eax_5 - edx_1) s>> 1)
        case &lookup_table_50d138[6], &lookup_table_50d138[7], &lookup_table_50d138[8]
            eax_8 = neg.d(var_4)
return fconvert.t(_mm_cvtepi32_ps(zx.o(eax_8)) + arg2)
