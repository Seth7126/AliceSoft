// 函数: sub_46bc80
// 地址: 0x46bc80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg9 s>= 1)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(arg7)
    int32_t eax_4 = (eax_2 - edx_1) s>> 1
    
    if (arg9 s>= eax_4)
        arg9 = eax_4 - 1
else
    arg9 = 1

char* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t eax_10 = (*(*arg1 + 0x1c))() - (arg7 << 2)
void* ebx_2 = (*(*arg4 + 8))(arg5, arg6)
arg1 = ebx_2
int32_t eax_12 = (*(*arg4 + 0x1c))()
int32_t var_c
sub_448e90(&var_c, arg9 * 0x1fe + 0x100)
char* ecx_7 = nullptr
int32_t ebp = var_c
int32_t var_8
int32_t result = var_8 - ebp
arg3 = result

if (result s> 0)
    do
        result = divs.dp.d(sx.q(ecx_7), (arg9 << 1) + 1)
        ecx_7[ebp] = result.b
        ecx_7 = &ecx_7[1]
    while (ecx_7 s< arg3)
    
    ebx_2 = arg1

if (arg8 s> 0)
    result = arg9
    int32_t ecx_10 = (arg7 - arg9 * 2) << 2
    int32_t* ecx_12 = arg7 - result
    int32_t edx_6 = arg7 << 2
    arg5 = edx_6 - 2 + ebx_2
    int32_t ecx_15 = ecx_10
    void* edi_5 = (result << 2) + 4 - ecx_15
    int32_t edx_8 = edx_6 - ecx_15 - 4
    void* edi_6 = 1 - ecx_15
    void* var_10_1 = edi_6
    int32_t edx_9 = 2 - ecx_15
    int32_t i
    
    do
        void* ecx_16 = ecx_15 + ebx_2
        char* edx_11 = zx.d(*ebx_2) * result
        void* ecx_17 = ecx_16 + edx_9
        char* edi_8 = zx.d(*(edi_6 + ecx_16)) * result
        char* ebx_5 = zx.d(*ecx_17) * result
        
        if (result s>= 0)
            int32_t j_4 = arg9 + 1
            int32_t j
            
            do
                uint32_t eax_19 = zx.d(*(ecx_17 - 2))
                ecx_17 += 4
                edx_11 = &edx_11[eax_19]
                edi_8 = &edi_8[zx.d(*(ecx_17 - 5))]
                ebx_5 = &ebx_5[zx.d(*(ecx_17 - 4))]
                j = j_4
                j_4 -= 1
            while (j != 1)
            ebp = var_c
        
        void* ecx_19 = edi_5 + ecx_16
        *esi = edx_11[ebp]
        esi[1] = edi_8[ebp]
        esi[2] = ebx_5[ebp]
        void* esi_1 = &esi[4]
        arg3 = ecx_19
        
        if (arg9 s>= 1)
            arg2 = arg9
            void* j_1
            
            do
                edx_11 = &edx_11[zx.d(*ecx_19) - zx.d(*arg1)]
                edi_8 = &edi_8[zx.d(*(arg3 + 1)) - zx.d(*(arg1 + 1))]
                ebx_5 = &ebx_5[zx.d(*(arg3 + 2)) - zx.d(*(arg1 + 2))]
                *esi_1 = edx_11[ebp]
                *(esi_1 + 1) = edi_8[ebp]
                ecx_19 = arg3 + 4
                *(esi_1 + 2) = ebx_5[ebp]
                esi_1 += 4
                j_1 = arg2
                arg2 -= 1
                arg3 = ecx_19
            while (j_1 != 1)
        
        if (arg9 + 1 s< ecx_12)
            void* eax_38 = arg1 + 2
            arg3 = eax_38
            void* ecx_29 = &arg1[arg9 * 2] + 6
            arg4 = ecx_12 - (arg9 + 1)
            ebp = var_c
            arg2 = ecx_29
            int32_t* j_2
            
            do
                edx_11 = &edx_11[zx.d(*(ecx_29 - 2)) - zx.d(*(eax_38 - 2))]
                uint32_t ecx_33 = zx.d(*(arg2 - 1)) - zx.d(*(arg3 - 1))
                void* eax_43 = arg3
                arg3 += 4
                edi_8 = &edi_8[ecx_33]
                ebx_5 = &ebx_5[zx.d(*arg2) - zx.d(*eax_43)]
                *esi_1 = edx_11[ebp]
                *(esi_1 + 1) = edi_8[ebp]
                ecx_29 = arg2 + 4
                *(esi_1 + 2) = ebx_5[ebp]
                esi_1 += 4
                j_2 = arg4
                arg4 -= 1
                eax_38 = arg3
                arg2 = ecx_29
            while (j_2 != 1)
        
        void* eax_48 = ecx_16
        arg3 = eax_48
        
        if (ecx_12 s< arg7)
            arg2 = arg7 - ecx_12
            void* j_3
            
            do
                ebp = var_c
                edx_11 = &edx_11[zx.d(*(ecx_16 + edx_8)) - zx.d(*eax_48)]
                uint32_t ecx_46 = zx.d(*(arg5 - 1)) - zx.d(*(arg3 + 1))
                void* eax_52 = arg3
                arg3 += 4
                edi_8 = &edi_8[ecx_46]
                uint32_t ecx_49 = zx.d(*arg5) - zx.d(*(eax_52 + 2))
                *esi_1 = edx_11[ebp]
                ebx_5 = &ebx_5[ecx_49]
                *(esi_1 + 1) = edi_8[ebp]
                *(esi_1 + 2) = ebx_5[ebp]
                esi_1 += 4
                j_3 = arg2
                arg2 -= 1
                eax_48 = arg3
            while (j_3 != 1)
        
        ebx_2 = arg1 + eax_12
        arg5 += eax_12
        esi = esi_1 + eax_10
        i = arg8
        arg8 -= 1
        result = arg9
        ecx_15 = ecx_10
        edi_6 = var_10_1
        arg1 = ebx_2
    while (i != 1)

if (ebp == 0)
    return result

return j__free(ebp)
