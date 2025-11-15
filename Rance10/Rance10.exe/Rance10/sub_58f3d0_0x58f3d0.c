// 函数: sub_58f3d0
// 地址: 0x58f3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
char* edx = *(edi + 4)

if (&edx[4] u> *(edi + 8))
label_58f6b4:
    struct _EXCEPTION_REGISTRATION_RECORD** eax
    eax.b = 0
    return eax

uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(edi + 4) = &edx[4]
void** esi_1 = &arg1[3]
uint32_t var_30_1 = ebx_7
void** var_2c_1 = esi_1
sub_58f6c0(esi_1, ebx_7)
int32_t ebp_1 = 0
int32_t var_3c_1 = 0
char* eax_4

if (ebx_7 s> 0)
    eax_4 = nullptr
    char* var_38_1 = nullptr
    
    while (true)
        void* esi_3 = *esi_1 + eax_4
        
        if (sub_61ed80(edi, esi_3).b == 0)
            goto label_58f6b4
        
        if (*(edi + 4) + 4 u> *(edi + 8))
            goto label_58f6b4
        
        char* ecx_2 = *(edi + 4)
        *(esi_3 + 0x18) =
            ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
        *(edi + 4) += 4
        char* edx_8 = *(edi + 4)
        
        if (&edx_8[4] u> *(edi + 8))
            goto label_58f6b4
        
        *(esi_3 + 0x1c) =
            ((zx.d(edx_8[3]) << 8 | zx.d(edx_8[2])) << 8 | zx.d(edx_8[1])) << 8 | zx.d(*edx_8)
        *(edi + 4) += 4
        sub_58f770(esi_3 + 0x20, arg1[2])
        int32_t ecx_11 = arg1[2]
        
        if (ecx_11 * 0x2c + *(edi + 4) u> *(edi + 8))
            goto label_58f6b4
        
        arg2 = nullptr
        
        if (ecx_11 s> 0)
            int32_t var_40_1 = 0
            void* i
            
            do
                char* ecx_12 = *(edi + 4)
                uint32_t edx_13 = (zx.d(ecx_12[3]) << 8 | zx.d(ecx_12[2])) << 8 | zx.d(ecx_12[1])
                uint32_t eax_16 = zx.d(*ecx_12)
                *(edi + 4) = &ecx_12[4]
                uint32_t ecx_19 =
                    ((zx.d(ecx_12[7]) << 8 | zx.d(ecx_12[6])) << 8 | zx.d(ecx_12[5])) << 8
                    | zx.d(ecx_12[4])
                *(edi + 4) = &ecx_12[8]
                uint32_t ecx_26 =
                    ((zx.d(ecx_12[0xb]) << 8 | zx.d(ecx_12[0xa])) << 8 | zx.d(ecx_12[9])) << 8
                    | zx.d(ecx_12[8])
                *(edi + 4) = &ecx_12[0xc]
                uint32_t ecx_33 =
                    ((zx.d(ecx_12[0xf]) << 8 | zx.d(ecx_12[0xe])) << 8 | zx.d(ecx_12[0xd])) << 8
                    | zx.d(ecx_12[0xc])
                *(edi + 4) = &ecx_12[0x10]
                uint32_t var_4_1 = ecx_33
                uint32_t ecx_40 =
                    ((zx.d(ecx_12[0x13]) << 8 | zx.d(ecx_12[0x12])) << 8 | zx.d(ecx_12[0x11])) << 8
                    | zx.d(ecx_12[0x10])
                *(edi + 4) = &ecx_12[0x14]
                uint32_t ecx_47 =
                    ((zx.d(ecx_12[0x17]) << 8 | zx.d(ecx_12[0x16])) << 8 | zx.d(ecx_12[0x15])) << 8
                    | zx.d(ecx_12[0x14])
                *(edi + 4) = &ecx_12[0x18]
                uint32_t var_c_1 = ecx_47
                void* ecx_48 = &ecx_12[0x1c]
                uint32_t var_8_1 =
                    ((zx.d(ecx_12[0x1b]) << 8 | zx.d(ecx_12[0x1a])) << 8 | zx.d(ecx_12[0x19])) << 8
                    | zx.d(ecx_12[0x18])
                
                if (ecx_48 + 0x10 u<= *(edi + 8))
                    ecx_48 += 0x10
                
                *(edi + 4) = ecx_48
                float xmm0_1 = *arg1
                int128_t* ecx_49 = *(esi_3 + 0x20)
                *(ecx_49 + var_40_1 + 0x10) =
                    _mm_unpacklo_ps(xmm0_1 f* (edx_13 << 8 | eax_16), xmm0_1 f* ecx_19)
                *(ecx_49 + var_40_1 + 0x18) = xmm0_1 f* ecx_26
                *(ecx_49 + var_40_1) = ecx_40.o
                i = arg2 + 1
                arg2 = i
                var_40_1 += 0x1c
            while (i s< arg1[2])
            ebx_7 = var_30_1
            ebp_1 = var_3c_1
        
        ebp_1 += 1
        eax_4 = &var_38_1[0x2c]
        var_3c_1 = ebp_1
        var_38_1 = eax_4
        
        if (ebp_1 s>= ebx_7)
            break
        
        esi_1 = var_2c_1

eax_4.b = 1
return eax_4
