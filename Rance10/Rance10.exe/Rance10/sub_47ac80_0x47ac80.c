// 函数: sub_47ac80
// 地址: 0x47ac80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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
void* var_c
sub_431b80(&var_c, arg9 * 0x1fe + 0x100)
char* ecx_7 = nullptr
void* ebp = var_c
int32_t var_8
int32_t result = var_8 - ebp
arg3 = result

if (result s> 0)
    do
        result = divs.dp.d(sx.q(ecx_7), (arg9 << 1) + 1)
        *(ecx_7 + ebp) = result.b
        ecx_7 = &ecx_7[1]
    while (ecx_7 s< arg3)
    
    ebx_2 = arg1

if (arg8 s> 0)
    int32_t* eax_19 = arg7 - arg9
    int32_t ecx_8 = arg7 << 2
    int32_t edi_5 = (arg7 - arg9 * 2) << 2
    arg5 = ecx_8 - 2 + ebx_2
    result = arg9
    void* ecx_10 = ecx_8 - edi_5 - 4
    void* ecx_11 = 1 - edi_5
    int32_t var_10_1 = edi_5
    void* edx_8 = (result << 2) + 4 - edi_5
    int32_t ecx_12 = 2 - edi_5
    int32_t i
    
    do
        void* ecx_13 = edi_5 + ebx_2
        char* edx_10 = zx.d(*ebx_2) * result
        void* ecx_14 = ecx_13 + ecx_12
        char* edi_7 = zx.d(*(ecx_11 + ecx_13)) * result
        char* ebx_6 = zx.d(*ecx_14) * result
        
        if (result s>= 0)
            int32_t j_4 = arg9 + 1
            int32_t j
            
            do
                uint32_t eax_23 = zx.d(*(ecx_14 - 2))
                ecx_14 += 4
                edx_10 = &edx_10[eax_23]
                edi_7 = &edi_7[zx.d(*(ecx_14 - 5))]
                ebx_6 = &ebx_6[zx.d(*(ecx_14 - 4))]
                j = j_4
                j_4 -= 1
            while (j != 1)
            ebp = var_c
        
        void* ecx_16 = edx_8 + ecx_13
        *esi = *(edx_10 + ebp)
        esi[1] = *(edi_7 + ebp)
        esi[2] = *(ebx_6 + ebp)
        void* esi_1 = &esi[4]
        arg3 = ecx_16
        
        if (arg9 s>= 1)
            arg2 = arg9
            void* j_1
            
            do
                edx_10 = &edx_10[zx.d(*ecx_16) - zx.d(*arg1)]
                edi_7 = &edi_7[zx.d(*(arg3 + 1)) - zx.d(*(arg1 + 1))]
                ebx_6 = &ebx_6[zx.d(*(arg3 + 2)) - zx.d(*(arg1 + 2))]
                *esi_1 = *(edx_10 + ebp)
                *(esi_1 + 1) = *(edi_7 + ebp)
                ecx_16 = arg3 + 4
                *(esi_1 + 2) = *(ebx_6 + ebp)
                esi_1 += 4
                j_1 = arg2
                arg2 -= 1
                arg3 = ecx_16
            while (j_1 != 1)
        
        if (arg9 + 1 s< eax_19)
            void* eax_42 = arg1 + 2
            arg3 = eax_42
            void* ecx_26 = &arg1[arg9 * 2] + 6
            arg4 = eax_19 - (arg9 + 1)
            ebp = var_c
            arg2 = ecx_26
            int32_t* j_2
            
            do
                edx_10 = &edx_10[zx.d(*(ecx_26 - 2)) - zx.d(*(eax_42 - 2))]
                edi_7 = &edi_7[zx.d(*(arg2 - 1)) - zx.d(*(arg3 - 1))]
                void* eax_48 = arg3
                arg3 += 4
                ebx_6 = &ebx_6[zx.d(*arg2) - zx.d(*eax_48)]
                *esi_1 = *(edx_10 + ebp)
                *(esi_1 + 1) = *(edi_7 + ebp)
                ecx_26 = arg2 + 4
                *(esi_1 + 2) = *(ebx_6 + ebp)
                esi_1 += 4
                j_2 = arg4
                arg4 -= 1
                eax_42 = arg3
                arg2 = ecx_26
            while (j_2 != 1)
        
        void* eax_53 = ecx_13
        arg3 = eax_53
        
        if (eax_19 s< arg7)
            arg2 = arg7 - eax_19
            void* j_3
            
            do
                ebp = var_c
                edx_10 = &edx_10[zx.d(*(ecx_13 + ecx_10)) - zx.d(*eax_53)]
                uint32_t ecx_41 = zx.d(*(arg5 - 1)) - zx.d(*(arg3 + 1))
                void* eax_57 = arg3
                arg3 += 4
                edi_7 = &edi_7[ecx_41]
                uint32_t ecx_44 = zx.d(*arg5) - zx.d(*(eax_57 + 2))
                *esi_1 = *(edx_10 + ebp)
                ebx_6 = &ebx_6[ecx_44]
                *(esi_1 + 1) = *(edi_7 + ebp)
                *(esi_1 + 2) = *(ebx_6 + ebp)
                esi_1 += 4
                j_3 = arg2
                arg2 -= 1
                eax_53 = arg3
            while (j_3 != 1)
        
        ebx_2 = arg1 + eax_12
        arg5 += eax_12
        esi = esi_1 + eax_10
        i = arg8
        arg8 -= 1
        result = arg9
        edi_5 = var_10_1
        arg1 = ebx_2
    while (i != 1)

if (ebp == 0)
    return result

int32_t var_4
return sub_403160(ebp, var_4 - ebp, 1)
