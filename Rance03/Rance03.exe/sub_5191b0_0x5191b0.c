// 函数: sub_5191b0
// 地址: 0x5191b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(*arg1 + 0x18))(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10)
int32_t ecx = arg1[0x29]
int32_t ecx_1

if (arg4 - 1 u> 8)
    ecx_1 = 0
else
    switch (arg4 + &jump_table_519260[2]:3)
        case &lookup_table_51926c, &lookup_table_51926c[1], &lookup_table_51926c[2]
            ecx_1 = 0
        case &lookup_table_51926c[3], &lookup_table_51926c[4], &lookup_table_51926c[5]
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(ecx)
            ecx_1 = neg.d((eax_3 - edx_1) s>> 1)
        case &lookup_table_51926c[6], &lookup_table_51926c[7], &lookup_table_51926c[8]
            ecx_1 = neg.d(ecx)

return fconvert.t(_mm_cvtepi32_ps(zx.o(ecx_1)) + arg3)
