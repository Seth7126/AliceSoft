// 函数: sub_491ec0
// 地址: 0x491ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(*(arg1 + 0x70) + 0x20)

if (ecx != 0)
    ecx = *(ecx + 0x28)

int32_t ecx_1

if (arg3 i- 1 u> 8)
    ecx_1 = 0
else
    switch (arg3 i+ &jump_table_491f10[2]:3)
        case &lookup_table_491f1c, &lookup_table_491f1c[3], &lookup_table_491f1c[6]
            ecx_1 = 0
        case &lookup_table_491f1c[1], &lookup_table_491f1c[4], &lookup_table_491f1c[7]
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(ecx)
            ecx_1 = neg.d((eax_4 - edx_1) s>> 1)
        case &lookup_table_491f1c[2], &lookup_table_491f1c[5], &lookup_table_491f1c[8]
            ecx_1 = neg.d(ecx)

return fconvert.t(_mm_cvtepi32_ps(zx.o(ecx_1)) + arg2)
