// 函数: sub_46c000
// 地址: 0x46c000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = arg9

if (ebp s>= 1)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(arg8)
    int32_t eax_4 = (eax_2 - edx_1) s>> 1
    
    if (ebp s>= eax_4)
        ebp = eax_4 - 1
        arg9 = ebp
else
    ebp = 1
    arg9 = ebp

char* esi = (*(*arg1 + 8))(arg2, arg3)
arg3 = esi
int32_t eax_8 = (*(*arg1 + 0x1c))()
arg1 = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_11 = (*(*arg4 + 0x1c))()
int32_t var_c
sub_448e90(&var_c, ebp * 0x1fe + 0x100)
char* ecx_9 = nullptr
int32_t ebp_1 = var_c
int32_t var_8
void* result = var_8 - ebp_1
arg4 = result

if (result s> 0)
    do
        result = divs.dp.d(sx.q(ecx_9), (arg9 << 1) + 1)
        ecx_9[ebp_1] = result.b
        ecx_9 = &ecx_9[1]
    while (ecx_9 s< arg4)
    
    esi = arg3

if (arg7 s> 0)
    int32_t* ecx_10 = arg9
    void* j_6 = ecx_10 + 1
    int32_t edi_4 = ecx_10 * 2
    int32_t edx_8 = (arg8 - edi_4) * eax_11
    void* eax_17 = arg8 - ecx_10
    int32_t edi_6 = (arg8 - 1) * eax_11
    result = arg1
    arg5 = result + 2 + edi_6
    int32_t ebx_2 = edx_8
    int32_t edi_7 = edi_6 - ebx_2
    void* edi_8 = 1 - ebx_2
    void* var_10_1 = edi_8
    int32_t edx_13 = (ecx_10 + 1) * eax_11 - ebx_2
    void* edx_14 = 2 - ebx_2
    int32_t i
    
    do
        void* eax_18 = result + ebx_2
        char* edx_16 = zx.d(*result) * ecx_10
        char* edi_10 = zx.d(*(edi_8 + eax_18)) * ecx_10
        void* ecx_12 = edx_14 + eax_18
        char* ebx_4 = zx.d(*ecx_12) * arg9
        
        if (arg9 s>= 0)
            void* j_5 = j_6
            void* j
            
            do
                ebx_4 = &ebx_4[zx.d(*(ecx_12 - 2))]
                edi_10 = &edi_10[zx.d(*(ecx_12 - 1))]
                edx_16 = &edx_16[zx.d(*ecx_12)]
                ecx_12 += eax_11
                j = j_5
                j_5 -= 1
            while (j != 1)
            esi = arg3
            ebp_1 = var_c
        
        *esi = ebx_4[ebp_1]
        esi[1] = edi_10[ebp_1]
        esi[2] = edx_16[ebp_1]
        void* esi_2 = &esi[eax_8]
        arg3 = eax_18 + edx_13
        int32_t ecx_21
        
        if (arg9 s< 1)
            ecx_21 = eax_11
        else
            arg4 = arg9
            int32_t* j_1
            
            do
                ebx_4 = &ebx_4[zx.d(*arg3) - zx.d(*arg1)]
                edi_10 = &edi_10[zx.d(arg3[1]) - zx.d(*(arg1 + 1))]
                edx_16 = &edx_16[zx.d(arg3[2]) - zx.d(*(arg1 + 2))]
                *esi_2 = ebx_4[ebp_1]
                ecx_21 = eax_11
                arg3 = &arg3[ecx_21]
                *(esi_2 + 1) = edi_10[ebp_1]
                *(esi_2 + 2) = edx_16[ebp_1]
                esi_2 += eax_8
                j_1 = arg4
                arg4 -= 1
            while (j_1 != 1)
        
        if (j_6 s< eax_17)
            arg3 = arg1 + 2
            void* ecx_24 = arg1 + 2 + (edi_4 + 1) * ecx_21
            arg4 = ecx_24
            void* j_4 = eax_17 - j_6
            void* j_2
            
            do
                ebx_4 = &ebx_4[zx.d(*(ecx_24 - 2)) - zx.d(arg3[0xfffffffe])]
                edi_10 = &edi_10[zx.d(*(arg4 - 1)) - zx.d(arg3[0xffffffff])]
                uint32_t ecx_31 = zx.d(*arg4) - zx.d(*arg3)
                arg3 = &arg3[eax_11]
                edx_16 = &edx_16[ecx_31]
                ecx_24 = arg4 + eax_11
                *esi_2 = ebx_4[ebp_1]
                *(esi_2 + 1) = edi_10[ebp_1]
                *(esi_2 + 2) = edx_16[ebp_1]
                esi_2 += eax_8
                j_2 = j_4
                j_4 -= 1
                arg4 = ecx_24
            while (j_2 != 1)
        
        void* eax_58 = eax_18
        arg3 = eax_58
        
        if (eax_17 s< arg8)
            arg4 = arg8 - eax_17
            int32_t* j_3
            
            do
                ebp_1 = var_c
                ebx_4 = &ebx_4[zx.d(*(eax_18 + edi_7)) - zx.d(*eax_58)]
                edi_10 = &edi_10[zx.d(*(arg5 - 1)) - zx.d(arg3[1])]
                uint32_t ecx_43 = zx.d(*arg5) - zx.d(arg3[2])
                arg3 = &arg3[eax_11]
                edx_16 = &edx_16[ecx_43]
                *esi_2 = ebx_4[ebp_1]
                *(esi_2 + 1) = edi_10[ebp_1]
                *(esi_2 + 2) = edx_16[ebp_1]
                esi_2 += eax_8
                j_3 = arg4
                arg4 -= 1
                eax_58 = arg3
            while (j_3 != 1)
        
        esi = esi_2 + 4 - eax_8 * arg8
        result = &arg1[1]
        arg5 += 4
        i = arg7
        arg7 -= 1
        ecx_10 = arg9
        ebx_2 = edx_8
        edi_8 = var_10_1
        arg3 = esi
        arg1 = result
    while (i != 1)

if (ebp_1 == 0)
    return result

return j__free(ebp_1)
