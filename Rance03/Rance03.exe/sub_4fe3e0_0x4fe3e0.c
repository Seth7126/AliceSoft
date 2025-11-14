// 函数: sub_4fe3e0
// 地址: 0x4fe3e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_10 = *(arg1 + 0x28)
int32_t esi

if (eax_10 != 0)
    esi = *(eax_10 + 0x1c)
else
    esi = 0

int32_t edx

if (eax_10 != 0)
    edx = *(eax_10 + 0x18)
else
    edx = 0

struct partsengine::CRect::VTable* var_14
sub_4fdcb0(&var_14, edx, esi, arg1 + 0x44)
int32_t eax_8
int32_t var_4

if (arg3 i- 1 u> 8)
    eax_8 = 0
else
    switch (arg3 i+ &jump_table_4fe45c[2]:3)
        case &lookup_table_4fe468, &lookup_table_4fe468[1], &lookup_table_4fe468[2]
            eax_8 = 0
        case &lookup_table_4fe468[3], &lookup_table_4fe468[4], &lookup_table_4fe468[5]
            int32_t eax_5
            int32_t edx_1
            edx_1:eax_5 = sx.q(var_4)
            eax_8 = neg.d((eax_5 - edx_1) s>> 1)
        case &lookup_table_4fe468[6], &lookup_table_4fe468[7], &lookup_table_4fe468[8]
            eax_8 = neg.d(var_4)
return fconvert.t(_mm_cvtepi32_ps(zx.o(eax_8)) + arg2)
