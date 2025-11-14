// 函数: sub_4fcf60
// 地址: 0x4fcf60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct partsengine::CRect::VTable* var_14
sub_4fbef0(&var_14, *(arg1 + 0x2c), *(arg1 + 0x30), arg1 + 0x34)
int32_t eax_8
int32_t var_8

if (arg3 i- 1 u> 8)
    eax_8 = 0
else
    switch (arg3 i+ &jump_table_4fcfc4[2]:3)
        case &lookup_table_4fcfd0, &lookup_table_4fcfd0[3], &lookup_table_4fcfd0[6]
            eax_8 = 0
        case &lookup_table_4fcfd0[1], &lookup_table_4fcfd0[4], &lookup_table_4fcfd0[7]
            int32_t eax_5
            int32_t edx_1
            edx_1:eax_5 = sx.q(var_8)
            eax_8 = neg.d((eax_5 - edx_1) s>> 1)
        case &lookup_table_4fcfd0[2], &lookup_table_4fcfd0[5], &lookup_table_4fcfd0[8]
            eax_8 = neg.d(var_8)
return fconvert.t(_mm_cvtepi32_ps(zx.o(eax_8)) + arg2)
