// 函数: sub_491b60
// 地址: 0x491b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *(arg1 + 0x70)
*(edi + 0xfc) = arg2
*(edi + 0x100) = arg3
int32_t ecx = *(edi + 0x20)

if (ecx != 0)
    ecx = *(ecx + 0x28)

int32_t ecx_1

if (arg4 - 1 u> 8)
    ecx_1 = 0
else
    switch (arg4 + &jump_table_491c40[2]:3)
        case &lookup_table_491c4c, &lookup_table_491c4c[3], &lookup_table_491c4c[6]
            ecx_1 = 0
        case &lookup_table_491c4c[1], &lookup_table_491c4c[4], &lookup_table_491c4c[7]
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(ecx)
            ecx_1 = neg.d((eax_3 - edx_1) s>> 1)
        case &lookup_table_491c4c[2], &lookup_table_491c4c[5], &lookup_table_491c4c[8]
            ecx_1 = neg.d(ecx)

*(edi + 0x12c) = ecx_1
void* edi_1 = *(arg1 + 0x70)
int32_t ecx_2 = *(edi_1 + 0x20)

if (ecx_2 != 0)
    ecx_2 = *(ecx_2 + 0x2c)

int32_t ecx_3

if (arg4 - 1 u> 8)
    ecx_3 = 0
else
    switch (arg4 + &jump_table_491c58[2]:3)
        case &lookup_table_491c64, &lookup_table_491c64[1], &lookup_table_491c64[2]
            ecx_3 = 0
        case &lookup_table_491c64[3], &lookup_table_491c64[4], &lookup_table_491c64[5]
            int32_t eax_8
            int32_t edx_2
            edx_2:eax_8 = sx.q(ecx_2)
            ecx_3 = neg.d((eax_8 - edx_2) s>> 1)
        case &lookup_table_491c64[6], &lookup_table_491c64[7], &lookup_table_491c64[8]
            ecx_3 = neg.d(ecx_2)

*(edi_1 + 0x130) = ecx_3
void* result = *(arg1 + 0x70)
*(result + 0x108) = arg5
*(result + 0x10c) = arg6
*(result + 0x120) = arg7
*(result + 0x124) = arg8
*(result + 0x128) = arg9
return result
