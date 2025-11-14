// 函数: sub_57b0c0
// 地址: 0x57b0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6bc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_7 = arg1
void* result_13 = result_7
struct sealengine::CPRPData::VTable* const var_4c = &sealengine::CPRPData::`vftable'
int32_t* var_48 = nullptr
int32_t var_44 = 0
int32_t var_40 = 0
int32_t var_4 = 0
enum MESSAGEBOX_RESULT result
int32_t ecx_1
int32_t edx
result, ecx_1, edx = sub_585990(&var_4c, arg2, arg3)
int32_t ebp = var_44
int32_t* edi = var_48

if (result.b != 0)
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    var_4.b = 1
    char var_50_1 = 0
    
    if (var_48 == ebp)
    label_57b942:
        result_7.b = 1
    else
        while (true)
            void* esi_1 = &edi[1]
            enum MESSAGEBOX_RESULT result_1
            sub_57e3f0(result_7, &result_1, &var_28, var_50_1)
            var_4.b = 2
            int32_t ebp_1 = *(esi_1 + 0x14)
            result_7 = *(esi_1 + 0x10)
            int32_t* ecx_3
            
            if (ebp_1 u< 0x10)
                ecx_3 = esi_1
            else
                ecx_3 = *esi_1
            
            void* result_14 = 4
            
            if (result_7 u< 4)
                result_14 = result_7
            
            int32_t eax_6 = sub_405190(result_14, "Mesh", ecx_3, result_14)
            bool cond:0_1 = eax_6 == 0
            
            if (eax_6 == 0)
                if (result_7 u>= 4)
                    eax_6.b = result_7 != 4
                else
                    eax_6 = 0xffffffff
                
                cond:0_1 = eax_6 == 0
            
            eax_6.b = cond:0_1
            
            if (eax_6.b != 0)
                void* eax_7 = edi[7]
                
                if (eax_7 != edi[8] && *(eax_7 + 4) == 3)
                    if (&var_28 != eax_7 + 0x28)
                        sub_401ff0(&var_28, eax_7 + 0x28, 0, 0xffffffff)
                    
                    var_50_1 = 0
                    goto label_57b8d7
                
            label_57b92d:
                result = result_1
                
                if (result != 0)
                    j__free(result)
                
                result_7.b = 0
                break
            
            int32_t* ecx_5
            
            if (ebp_1 u< 0x10)
                ecx_5 = esi_1
            else
                ecx_5 = *esi_1
            
            void* result_15 = 8
            
            if (result_7 u< 8)
                result_15 = result_7
            
            int32_t eax_9 = sub_405190(result_15, "MeshPart", ecx_5, result_15)
            bool cond:1_1 = eax_9 == 0
            
            if (eax_9 == 0)
                if (result_7 u>= 8)
                    eax_9.b = result_7 != 8
                else
                    eax_9 = 0xffffffff
                
                cond:1_1 = eax_9 == 0
            
            eax_9.b = cond:1_1
            
            if (eax_9.b != 0)
                void* eax_10 = edi[7]
                
                if (eax_10 == edi[8] || *(eax_10 + 4) != 3)
                    goto label_57b92d
                
                if (&var_28 != eax_10 + 0x28)
                    sub_401ff0(&var_28, eax_10 + 0x28, 0, 0xffffffff)
                
                var_50_1 = 1
                goto label_57b8d7
            
            enum MESSAGEBOX_RESULT var_58
            
            if (sub_40c250(esi_1, "DrawShadow") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x40 || *(edi[7] + 4) != 2)
                    goto label_57b92d
                
                enum MESSAGEBOX_RESULT result_2 = result_1
                int32_t ebp_2 = 0
                enum MESSAGEBOX_RESULT result_22 = result_2
                result_7 = (var_58 - result_2 + 3) u>> 2
                
                if (result_2 u> var_58)
                    result_7 = nullptr
                
                if (result_7 != 0)
                    do
                        result_22 += 4
                        ebp_2 += 1
                        *(*(result_22 - 4) + 0x40) = sub_40c250(edi[7] + 0x10, "true")
                    while (ebp_2 != result_7)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "ZWrite") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x40 || *(edi[7] + 4) != 2)
                    goto label_57b92d
                
                enum MESSAGEBOX_RESULT result_3 = result_1
                int32_t ebp_3 = 0
                enum MESSAGEBOX_RESULT result_23 = result_3
                result_7 = (var_58 - result_3 + 3) u>> 2
                
                if (result_3 u> var_58)
                    result_7 = nullptr
                
                if (result_7 != 0)
                    do
                        result_23 += 4
                        ebp_3 += 1
                        *(*(result_23 - 4) + 0x41) = sub_40c250(edi[7] + 0x10, "true")
                    while (ebp_3 != result_7)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "UVScroll") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x80)
                    goto label_57b92d
                
                void* edx_1 = edi[7]
                int32_t eax_30 = *(edx_1 + 4)
                
                if (eax_30 != 0 && eax_30 != 1)
                    goto label_57b92d
                
                if (sub_586c10(edx_1 + 0x40) == 0)
                    goto label_57b92d
                
                enum MESSAGEBOX_RESULT result_8 = result_1
                result_7 = nullptr
                enum MESSAGEBOX_RESULT result_16 = result_8
                uint32_t esi_5 = (var_58 - result_8 + 3) u>> 2
                
                if (result_8 u> var_58)
                    esi_5 = 0
                
                if (esi_5 != 0)
                    do
                        int32_t xmm1_2
                        
                        if (*(edx_1 + 0x44) != 0)
                            xmm1_2 = *(edx_1 + 0x4c)
                        else
                            xmm1_2 = _mm_cvtepi32_ps(zx.o(*(edx_1 + 0x48)))
                        
                        int32_t xmm0_2
                        
                        if (*(edx_1 + 4) != 0)
                            xmm0_2 = *(edx_1 + 0xc)
                        else
                            xmm0_2 = _mm_cvtepi32_ps(zx.o(*(edx_1 + 8)))
                        
                        void* ecx_17 = *result_16
                        result_7 += 1
                        result_16 += 4
                        *(ecx_17 + 0x4c) = xmm0_2
                        *(ecx_17 + 0x50) = xmm1_2
                    while (result_7 != esi_5)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "SpecularColor") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0xc0)
                    goto label_57b92d
                
                void* edx_2 = edi[7]
                
                if (sub_586c10(edx_2) == 0)
                    goto label_57b92d
                
                if (sub_586c10(edx_2 + 0x40) == 0)
                    goto label_57b92d
                
                if (sub_586c10(edx_2 + 0x80) == 0)
                    goto label_57b92d
                
                result_7 = result_1
                int32_t esi_6 = 0
                void* result_17 = result_7
                uint32_t edx_6 = (var_58 - result_7 + 3) u>> 2
                
                if (result_7 u> var_58)
                    edx_6 = 0
                
                if (edx_6 != 0)
                    int32_t var_2c_1 = 0x3f800000
                    
                    do
                        void* ecx_22 = edi[7]
                        int32_t xmm2_2
                        
                        if (*(ecx_22 + 0x84) != 0)
                            xmm2_2 = *(ecx_22 + 0x8c)
                        else
                            xmm2_2 = _mm_cvtepi32_ps(zx.o(*(ecx_22 + 0x88)))
                        
                        int32_t xmm1_4
                        
                        if (*(ecx_22 + 0x44) != 0)
                            xmm1_4 = *(ecx_22 + 0x4c)
                        else
                            xmm1_4 = _mm_cvtepi32_ps(zx.o(*(ecx_22 + 0x48)))
                        
                        int32_t xmm0_4
                        
                        if (*(ecx_22 + 4) != 0)
                            xmm0_4 = *(ecx_22 + 0xc)
                        else
                            xmm0_4 = _mm_cvtepi32_ps(zx.o(*(ecx_22 + 8)))
                        
                        void* ecx_23 = *result_17
                        esi_6 += 1
                        result_17 += 4
                        int32_t var_34_1 = xmm1_4
                        int32_t var_30_1 = xmm2_2
                        *(ecx_23 + 0x54) = xmm0_4.o
                    while (esi_6 != edx_6)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "SpecularPower") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x40)
                    goto label_57b92d
                
                void* edx_7 = edi[7]
                
                if (sub_586c10(edx_7) == 0)
                    goto label_57b92d
                
                enum MESSAGEBOX_RESULT result_9 = result_1
                result_7 = nullptr
                enum MESSAGEBOX_RESULT result_18 = result_9
                uint32_t esi_10 = (var_58 - result_9 + 3) u>> 2
                
                if (result_9 u> var_58)
                    esi_10 = 0
                
                if (esi_10 != 0)
                    do
                        int32_t xmm0_7
                        
                        if (*(edx_7 + 4) != 0)
                            xmm0_7 = *(edx_7 + 0xc)
                        else
                            xmm0_7 = _mm_cvtepi32_ps(zx.o(*(edx_7 + 8)))
                        
                        void* ecx_26 = *result_18
                        result_7 += 1
                        result_18 += 4
                        *(ecx_26 + 0x64) = xmm0_7
                    while (result_7 != esi_10)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "ParallaxScale") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x40)
                    goto label_57b92d
                
                void* edx_8 = edi[7]
                
                if (sub_586c10(edx_8) == 0)
                    goto label_57b92d
                
                enum MESSAGEBOX_RESULT result_10 = result_1
                result_7 = nullptr
                enum MESSAGEBOX_RESULT result_19 = result_10
                uint32_t esi_14 = (var_58 - result_10 + 3) u>> 2
                
                if (result_10 u> var_58)
                    esi_14 = 0
                
                if (esi_14 != 0)
                    do
                        int32_t xmm0_9
                        
                        if (*(edx_8 + 4) != 0)
                            xmm0_9 = *(edx_8 + 0xc)
                        else
                            xmm0_9 = _mm_cvtepi32_ps(zx.o(*(edx_8 + 8)))
                        
                        void* ecx_29 = *result_19
                        result_7 += 1
                        result_19 += 4
                        *(ecx_29 + 0x44) = xmm0_9
                    while (result_7 != esi_14)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "ReliefScale") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x40)
                    goto label_57b92d
                
                void* edx_9 = edi[7]
                
                if (sub_586c10(edx_9) == 0)
                    goto label_57b92d
                
                enum MESSAGEBOX_RESULT result_11 = result_1
                result_7 = nullptr
                enum MESSAGEBOX_RESULT result_20 = result_11
                uint32_t esi_18 = (var_58 - result_11 + 3) u>> 2
                
                if (result_11 u> var_58)
                    esi_18 = 0
                
                if (esi_18 != 0)
                    do
                        int32_t xmm0_11
                        
                        if (*(edx_9 + 4) != 0)
                            xmm0_11 = *(edx_9 + 0xc)
                        else
                            xmm0_11 = _mm_cvtepi32_ps(zx.o(*(edx_9 + 8)))
                        
                        void* ecx_32 = *result_20
                        result_7 += 1
                        result_20 += 4
                        *(ecx_32 + 0x48) = xmm0_11
                    while (result_7 != esi_18)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "HeightDetection") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x40 || *(edi[7] + 4) != 2)
                    goto label_57b92d
                
                enum MESSAGEBOX_RESULT result_4 = result_1
                int32_t ebp_4 = 0
                enum MESSAGEBOX_RESULT result_24 = result_4
                result_7 = (var_58 - result_4 + 3) u>> 2
                
                if (result_4 u> var_58)
                    result_7 = nullptr
                
                if (result_7 != 0)
                    do
                        result_24 += 4
                        ebp_4 += 1
                        *(*(result_24 - 4) + 0x68) = sub_40c250(edi[7] + 0x10, "true")
                    while (ebp_4 != result_7)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "BlendMode") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x40)
                    goto label_57b92d
                
                void* ecx_39 = edi[7]
                
                if (*(ecx_39 + 4) != 2)
                    goto label_57b92d
                
                result_7 = nullptr
                char eax_65 = sub_40c250(ecx_39 + 0x10, 0x6e52e0)
                void** result_12 = result_1
                
                if (eax_65 != 0)
                    result_7 = 1
                
                int32_t edx_10 = 0
                uint32_t esi_22 = (var_58 - result_12 + 3) u>> 2
                void** result_21 = result_12
                
                if (result_12 u> var_58)
                    esi_22 = 0
                
                if (esi_22 != 0)
                    do
                        void* ecx_41 = *result_21
                        result_21 = &result_21[1]
                        edx_10 += 1
                        *(ecx_41 + 0x6c) = result_7
                    while (edx_10 != esi_22)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "MeshCombinable") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x40 || *(edi[7] + 4) != 2)
                    goto label_57b92d
                
                enum MESSAGEBOX_RESULT result_5 = result_1
                int32_t ebp_5 = 0
                enum MESSAGEBOX_RESULT result_25 = result_5
                result_7 = (var_58 - result_5 + 3) u>> 2
                
                if (result_5 u> var_58)
                    result_7 = nullptr
                
                if (result_7 != 0)
                    do
                        result_25 += 4
                        ebp_5 += 1
                        *(*(result_25 - 4) + 0x75) = sub_40c250(edi[7] + 0x10, "true")
                    while (ebp_5 != result_7)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "SkyDome") != 0)
                if (((edi[8] - edi[7]) & 0xffffffc0) != 0x40 || *(edi[7] + 4) != 2)
                    goto label_57b92d
                
                enum MESSAGEBOX_RESULT result_6 = result_1
                int32_t ebp_6 = 0
                enum MESSAGEBOX_RESULT result_26 = result_6
                result_7 = (var_58 - result_6 + 3) u>> 2
                
                if (result_6 u> var_58)
                    result_7 = nullptr
                
                if (result_7 != 0)
                    do
                        result_26 += 4
                        ebp_6 += 1
                        *(*(result_26 - 4) + 0x27) = sub_40c250(edi[7] + 0x10, "true")
                    while (ebp_6 != result_7)
                
                goto label_57b8d7
            
            if (sub_40c250(esi_1, "Edge") == 0)
                if (sub_40c250(esi_1, "EdgeSize") != 0)
                    goto label_57b8d7
                
                int32_t eax_82
                int32_t ecx_53
                int32_t edx_11
                eax_82, ecx_53, edx_11 = sub_40c250(esi_1, "EdgeColor")
                
                if (eax_82.b != 0)
                    goto label_57b8d7
                
                if (*(esi_1 + 0x14) u>= 0x10)
                    esi_1 = *esi_1
                
                sub_59f4e0(eax_82, edx_11, ecx_53, 0x6e5264, esi_1)
                goto label_57b92d
            
        label_57b8d7:
            var_4.b = 1
            result = result_1
            
            if (result != 0)
                j__free(result)
                result_1 = 0
                var_58 = 0
                int32_t var_54_1 = 0
            
            edi = &edi[0xa]
            
            if (edi == var_44)
                goto label_57b942
            
            result_7 = result_13
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)
    
    ebp = var_44
    edi = var_48
    int32_t var_14_2 = 0xf
    int32_t var_18_2 = 0
    var_28 = 0
else
    sub_59f4e0(result, edx, ecx_1, 0x6e5208, eax_4)
    result_7.b = 0

int32_t var_4_1 = 0xffffffff
int32_t* esi_23 = edi

if (edi != ebp)
    do
        (**esi_23)(0)
        esi_23 = &esi_23[0xa]
    while (esi_23 != ebp)

if (edi != 0)
    j__free(edi)

result.b = result_7.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
