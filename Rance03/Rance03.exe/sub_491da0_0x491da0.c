// 函数: sub_491da0
// 地址: 0x491da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
void* edi = *(arg1 + 0x70)
*(edi + 0xfc) = arg4
*(edi + 0x100) = arg5
int32_t ecx = *(edi + 0x20)

if (ecx != 0)
    ecx = *(ecx + 0x28)

int32_t ecx_1

if (arg6 - 1 u> 8)
    ecx_1 = 0
else
    switch (arg6 + &jump_table_491e90[2]:3)
        case &lookup_table_491e9c, &lookup_table_491e9c[3], &lookup_table_491e9c[6]
            ecx_1 = 0
        case &lookup_table_491e9c[1], &lookup_table_491e9c[4], &lookup_table_491e9c[7]
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(ecx)
            ecx_1 = neg.d((eax_3 - edx_1) s>> 1)
        case &lookup_table_491e9c[2], &lookup_table_491e9c[5], &lookup_table_491e9c[8]
            ecx_1 = neg.d(ecx)

*(edi + 0x12c) = ecx_1
void* edi_1 = *(arg1 + 0x70)
int32_t ecx_2 = *(edi_1 + 0x20)

if (ecx_2 != 0)
    ecx_2 = *(ecx_2 + 0x2c)

int32_t ecx_3

if (arg6 - 1 u> 8)
    ecx_3 = 0
else
    switch (arg6 + &jump_table_491ea8[2]:3)
        case &lookup_table_491eb4, &lookup_table_491eb4[1], &lookup_table_491eb4[2]
            ecx_3 = 0
        case &lookup_table_491eb4[3], &lookup_table_491eb4[4], &lookup_table_491eb4[5]
            int32_t eax_8
            int32_t edx_2
            edx_2:eax_8 = sx.q(ecx_2)
            ecx_3 = neg.d((eax_8 - edx_2) s>> 1)
        case &lookup_table_491eb4[6], &lookup_table_491eb4[7], &lookup_table_491eb4[8]
            ecx_3 = neg.d(ecx_2)

*(edi_1 + 0x130) = ecx_3
struct _EXCEPTION_REGISTRATION_RECORD** ecx_4 = *(arg1 + 0x70)
ecx_4[0x42] = arg7
ecx_4[0x43] = arg8
ecx_4[0x48] = arg9
ecx_4[0x49] = arg10
ecx_4[0x4a] = arg11
return sub_495bf0(ecx_4, arg2, arg3, arg12)
