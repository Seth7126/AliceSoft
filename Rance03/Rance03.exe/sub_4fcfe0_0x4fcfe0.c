// 函数: sub_4fcfe0
// 地址: 0x4fcfe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct partsengine::CRect::VTable* var_14
sub_4fbef0(&var_14, *(arg1 + 0x2c), *(arg1 + 0x30), arg1 + 0x34)
int32_t eax_8
int32_t var_4

if (arg3 i- 1 u> 8)
    eax_8 = 0
else
    switch (arg3 i+ &jump_table_4fd044[2]:3)
        case &lookup_table_4fd050, &lookup_table_4fd050[1], &lookup_table_4fd050[2]
            eax_8 = 0
        case &lookup_table_4fd050[3], &lookup_table_4fd050[4], &lookup_table_4fd050[5]
            int32_t eax_5
            int32_t edx_1
            edx_1:eax_5 = sx.q(var_4)
            eax_8 = neg.d((eax_5 - edx_1) s>> 1)
        case &lookup_table_4fd050[6], &lookup_table_4fd050[7], &lookup_table_4fd050[8]
            eax_8 = neg.d(var_4)
return fconvert.t(_mm_cvtepi32_ps(zx.o(eax_8)) + arg2)
