// 函数: sub_532f40
// 地址: 0x532f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3bc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg2
float xmm3 = *(arg1 + 0x1c)
int32_t* arg_8
int32_t* ecx = arg_8
float xmm4 = *arg2
float xmm5 = *ecx
int32_t* edx = *(arg1 + 0x2c)
float xmm1 = 1f / (*(arg1 + 0x20) - xmm3)
int32_t* var_70 = edx
float xmm2_1 = _mm_cvtepi32_ps(zx.o(edx))

if (xmm4 > xmm5)
    eax_3 = ecx

int32_t* eax_4 = arg2

if (xmm5 > xmm4)
    eax_4 = ecx

int32_t ebp = int.d((*eax_3 - 0.5f - xmm3) * xmm2_1 * xmm1)
void* result_2 = &arg2[2]
void* result_1 = result_2
float xmm2_2 = *(arg1 + 0x24)
int32_t ebx = int.d((*eax_4 + 0.5f - xmm3) * xmm2_1 * xmm1)

if (*result_2 f> ecx[2])
    result_2 = &ecx[2]

int32_t ecx_2 = *(arg1 + 0x30)
float xmm7 = 1f / (*(arg1 + 0x28) - xmm2_2)
void* result = result_1
float xmm0_16 = *result_2 - 0.5f
float xmm1_2 = _mm_cvtepi32_ps(zx.o(ecx_2))
int32_t esi_1 = int.d((xmm0_16 - xmm2_2) * xmm1_2 * xmm7)
int32_t* edx_2 = var_70

if (ecx[2] f> *result)
    result = &ecx[2]

int32_t edi_2 = int.d((*result + 0.5f - xmm2_2) * xmm1_2 * xmm7)

if (ebp s< edx_2 && ebx s>= 0 && esi_1 s< ecx_2 && edi_2 s>= 0)
    if (ebp s< 0)
        ebp = 0
    
    if (ebx s>= edx_2)
        ebx = edx_2 - 1
    
    if (esi_1 s< 0)
        esi_1 = 0
    
    if (edi_2 s>= ecx_2)
        edi_2 = ecx_2 - 1
    
    var_70 = nullptr
    int32_t var_6c_1 = 0
    var_70 = sub_4a6eb0()
    int32_t var_4 = 0
    sub_5312f0(arg1, &var_70, ebp, ebx, esi_1, edi_2)
    int32_t* eax_6 = arg_8
    int32_t var_60_1 = 0
    int32_t var_54_1 = 0
    int32_t var_64 = *eax_6
    int32_t var_5c_1 = eax_6[2]
    int32_t var_58 = *arg2
    int32_t var_50_1 = *result_1
    struct sealengine::CCapsule::VTable* var_2c
    sub_52d990(&var_2c, &var_58, &var_64)
    int32_t* ecx_5 = var_70
    int32_t* esi_2 = *ecx_5
    int32_t* eax_9 = esi_2
    arg_8 = eax_9
    
    if (eax_9 != ecx_5)
        do
            void* ecx_6 = eax_9[4]
            int32_t i = 0
            void* var_68_1 = ecx_6
            int128_t* ebp_1 = ecx_6 + 4
            ebx = ecx_6 + 0x28
            
            do
                if (*ebx == 0)
                    float xmm1_3[0x4] = *ebp_1
                    struct sealengine::CCapsule::VTable* const var_4c =
                        &sealengine::CCapsule::`vftable'
                    int32_t var_30_1 = 0x3e800000
                    int32_t eax_12 = mods.dp.d(sx.q(i + 1), 3) * 3
                    float xmm2_3[0x4] = *(ecx_6 + (eax_12 << 2) + 4)
                    int32_t var_40_1 = *(ebp_1 + 8)
                    int32_t var_34_1 = *(ecx_6 + (eax_12 << 2) + 0xc)
                    int64_t var_48_1 = _mm_unpacklo_ps(xmm1_3, 0)
                    int64_t var_3c_1 = _mm_unpacklo_ps(xmm2_3, 0)
                    
                    if (sub_52d9d0(&var_2c, &var_4c) != 0)
                        ebx.b = 1
                        goto label_533225
                    
                    ecx_6 = var_68_1
                
                i += 1
                ebx += 4
                ebp_1 += 0xc
            while (i s< 3)
            
            sub_418380(&arg_8)
            eax_9 = arg_8
        while (eax_9 != var_70)
    
    ebx.b = 0
label_533225:
    sub_4200d0(&var_70, &arg_8, esi_2, var_70)
    j__free(var_70)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
