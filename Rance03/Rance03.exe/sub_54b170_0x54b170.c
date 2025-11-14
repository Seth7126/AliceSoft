// 函数: sub_54b170
// 地址: 0x54b170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
char* edx = *(edi + 4)

if (&edx[4] u> *(edi + 8))
label_54b458:
    void* eax
    eax.b = 0
    return eax

uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(edi + 4) = &edx[4]
int32_t* esi_1 = arg1 + 0x10
uint32_t var_30_1 = ebx_7
int32_t* var_2c_1 = esi_1
sub_54b5d0(esi_1, ebx_7)
int32_t ebp_1 = 0
int32_t var_3c_1 = 0
int32_t eax_4

if (ebx_7 s> 0)
    eax_4 = 0
    int32_t var_38_1 = 0
    
    while (true)
        int32_t* esi_3 = *esi_1 + eax_4
        
        if (sub_468d00(edi, esi_3).b == 0)
            goto label_54b458
        
        char* edx_1 = *(edi + 4)
        
        if (&edx_1[4] u> *(edi + 8))
            goto label_54b458
        
        esi_3[6] =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(edi + 4) += 4
        char* edx_2 = *(edi + 4)
        
        if (&edx_2[4] u> *(edi + 8))
            goto label_54b458
        
        esi_3[7] =
            ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8 | zx.d(*edx_2)
        *(edi + 4) += 4
        sub_54b4f0(&esi_3[8], *(arg1 + 0xc))
        int32_t ecx_17 = *(arg1 + 0xc)
        
        if (ecx_17 * 0x2c + *(edi + 4) u> *(edi + 8))
            goto label_54b458
        
        arg2 = nullptr
        
        if (ecx_17 s> 0)
            int32_t var_40_1 = 0
            void* i
            
            do
                char* ecx_18 = *(edi + 4)
                uint32_t edx_7 = (zx.d(ecx_18[3]) << 8 | zx.d(ecx_18[2])) << 8 | zx.d(ecx_18[1])
                uint32_t eax_15 = zx.d(*ecx_18)
                *(edi + 4) = &ecx_18[4]
                uint32_t ecx_25 =
                    ((zx.d(ecx_18[7]) << 8 | zx.d(ecx_18[6])) << 8 | zx.d(ecx_18[5])) << 8
                    | zx.d(ecx_18[4])
                *(edi + 4) = &ecx_18[8]
                uint32_t ecx_32 =
                    ((zx.d(ecx_18[0xb]) << 8 | zx.d(ecx_18[0xa])) << 8 | zx.d(ecx_18[9])) << 8
                    | zx.d(ecx_18[8])
                *(edi + 4) = &ecx_18[0xc]
                uint32_t ecx_39 =
                    ((zx.d(ecx_18[0xf]) << 8 | zx.d(ecx_18[0xe])) << 8 | zx.d(ecx_18[0xd])) << 8
                    | zx.d(ecx_18[0xc])
                *(edi + 4) = &ecx_18[0x10]
                uint32_t var_4_1 = ecx_39
                uint32_t ecx_46 =
                    ((zx.d(ecx_18[0x13]) << 8 | zx.d(ecx_18[0x12])) << 8 | zx.d(ecx_18[0x11])) << 8
                    | zx.d(ecx_18[0x10])
                *(edi + 4) = &ecx_18[0x14]
                uint32_t ecx_53 =
                    ((zx.d(ecx_18[0x17]) << 8 | zx.d(ecx_18[0x16])) << 8 | zx.d(ecx_18[0x15])) << 8
                    | zx.d(ecx_18[0x14])
                *(edi + 4) = &ecx_18[0x18]
                uint32_t var_c_1 = ecx_53
                void* ecx_54 = &ecx_18[0x1c]
                uint32_t var_8_1 =
                    ((zx.d(ecx_18[0x1b]) << 8 | zx.d(ecx_18[0x1a])) << 8 | zx.d(ecx_18[0x19])) << 8
                    | zx.d(ecx_18[0x18])
                
                if (ecx_54 + 0x10 u<= *(edi + 8))
                    ecx_54 += 0x10
                
                *(edi + 4) = ecx_54
                float xmm0_1 = *(arg1 + 4)
                int32_t ecx_55 = esi_3[8]
                *(ecx_55 + var_40_1 + 0x14) =
                    _mm_unpacklo_ps(xmm0_1 f* (edx_7 << 8 | eax_15), xmm0_1 f* ecx_25)
                *(ecx_55 + var_40_1 + 0x1c) = xmm0_1 f* ecx_32
                *(ecx_55 + var_40_1 + 4) = ecx_46.o
                i = arg2 + 1
                arg2 = i
                var_40_1 += 0x20
            while (i s< *(arg1 + 0xc))
            ebx_7 = var_30_1
            ebp_1 = var_3c_1
        
        ebp_1 += 1
        eax_4 = var_38_1 + 0x2c
        var_3c_1 = ebp_1
        var_38_1 = eax_4
        
        if (ebp_1 s>= ebx_7)
            break
        
        esi_1 = var_2c_1

eax_4.b = 1
return eax_4
