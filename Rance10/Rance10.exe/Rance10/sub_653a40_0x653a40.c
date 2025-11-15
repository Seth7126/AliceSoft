// 函数: sub_653a40
// 地址: 0x653a40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx_1 = &arg3[0xfffffffc]
int32_t esi_1 = *(arg2 + 0x24) * *(arg2 + 0x1c)
int32_t* var_10 = ebx_1
int32_t eax_1 = esi_1 * 2
sub_6535f0(eax_1, *(arg1 + 0x104) + 2, ebx_1, *(arg1 + 0x1c), eax_1)
int32_t ecx_1 = *(arg1 + 0xd8)
int32_t i_1 = 0
int32_t ecx_2 = ecx_1 << 4
int32_t i = ecx_1 * 0x50
int32_t edx_2 = 0x4000 - i

if (*(arg1 + 0x104) s> 0)
    int32_t* ecx_3 = arg4
    
    do
        char* ecx_4 = *ecx_3
        char* eax_4 = ebx_1[2]
        char* esi_2 = *ebx_1
        char* edx_3 = ebx_1[1]
        char* ecx_5 = ebx_1[3]
        uint32_t eax_5 = zx.d(*eax_4)
        uint32_t ebp_1 = zx.d(*edx_3)
        uint32_t edi_1 = zx.d(*esi_2)
        arg3 = &eax_4[2]
        char* eax_6 = &ecx_5[2]
        arg2 = &esi_2[2]
        void* var_20_1 = &edx_3[2]
        uint32_t ebx_4 = zx.d(*ecx_5)
        uint32_t ecx_14 = zx.d(*arg2) + edi_1 + ((zx.d(*arg3) + zx.d(*var_20_1) + ebp_1
            + zx.d(ecx_5[1]) + zx.d(esi_2[1]) + eax_5 + edi_1 + ebx_4) << 1)
        void* esi_10 = var_20_1
        int32_t ecx_22 = (zx.d(*(var_10[2] + 1)) + ebp_1 + zx.d(*(var_10[1] + 1)) + eax_5) * edx_2
            + 0x8000 + (zx.d(*eax_6) + ecx_14 + ebx_4) * ecx_2
        *ecx_4 = (ecx_22 s>> 0x10).b
        void* var_1c_2 = &ecx_4[1]
        char* edx_11 = arg3
        int32_t j_1 = esi_1 - 2
        void* ecx_25 = arg2
        
        if (esi_1 != 2)
            int32_t j
            
            do
                esi_10 += 2
                uint32_t edx_18 = zx.d(eax_6[1]) + zx.d(*(ecx_25 + 1)) + zx.d(arg3[0xffffffff])
                    + zx.d(*(var_20_1 - 1)) + zx.d(*eax_6) + zx.d(*arg2) + zx.d(*esi_10)
                int32_t edx_23 = zx.d(eax_6[0xffffffff]) + ((edx_18 + zx.d(edx_11[2])) << 1)
                    + zx.d(*(arg2 - 1)) + zx.d(*(ecx_25 + 2)) + zx.d(eax_6[2])
                uint32_t ecx_38 = zx.d(arg3[1]) + zx.d(*(var_20_1 + 1)) + zx.d(*arg3)
                void* eax_17 = var_20_1
                var_20_1 = esi_10
                edx_11 = &edx_11[2]
                *var_1c_2 =
                    (((zx.d(*eax_17) + ecx_38) * edx_2 + 0x8000 + edx_23 * ecx_2) s>> 0x10).b
                j = j_1
                j_1 -= 1
                eax_6 = &eax_6[2]
                var_1c_2 += 1
                ecx_25 += 2
                arg3 = edx_11
                arg2 = ecx_25
            while (j != 1)
        
        uint32_t edi_7 = zx.d(*(ecx_25 + 1))
        uint32_t ecx_41 = zx.d(edx_11[1])
        uint32_t ebp_3 = zx.d(*(esi_10 + 1))
        uint32_t ebx_6 = zx.d(eax_6[1])
        int32_t eax_26 = zx.d(eax_6[0xffffffff]) + edi_7 + ((zx.d(*arg2) + zx.d(*eax_6) + ebp_3
            + zx.d(edx_11[0xffffffff]) + zx.d(*(esi_10 - 1)) + ecx_41 + edi_7 + ebx_6) << 1)
        ebx_1 = &var_10[2]
        var_10 = ebx_1
        *var_1c_2 = (((zx.d(*arg3) + ebp_3 + zx.d(*var_20_1) + ecx_41) * edx_2
            + (zx.d(*(arg2 - 1)) + eax_26 + ebx_6) * ecx_2 + 0x8000) s>> 0x10).b
        i = i_1 + 2
        ecx_3 = &arg4[1]
        i_1 = i
        arg4 = ecx_3
    while (i s< *(arg1 + 0x104))

return i
