// 函数: sub_54d2d0
// 地址: 0x54d2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4cc1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_c8
int32_t eax_2 = __security_cookie ^ &var_c8
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
var_c8 = ebx
struct sealengine::CPRPData::VTable* const var_b0 = &sealengine::CPRPData::`vftable'
int32_t* var_ac = nullptr
int32_t var_a8 = 0
int32_t var_a4 = 0
int32_t var_4 = 0
int32_t eax_6
int32_t ecx_1
int32_t edx
eax_6, ecx_1, edx = sub_585990(&var_b0, arg2, arg3)
int32_t ebp = var_a8
int32_t* edi = var_ac
enum MESSAGEBOX_RESULT result

if (eax_6.b != 0)
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    var_4.b = 1
    int32_t* esi_1 = edi
    
    if (edi == ebp)
    label_54d784:
        int32_t* edx_1 = *(ebx + 0x40)
        int32_t* ecx_17 = *(ebx + 0x3c)
        var_c8.b = 0
        int32_t eax_28 = (edx_1 - ecx_17) s>> 5
        sub_5501a0(eax_28, edx_1, ecx_17, eax_28, var_c8)
        int32_t* edx_2 = *(ebx + 0x4c)
        int32_t* ecx_18 = *(ebx + 0x48)
        var_c8.b = 0
        int32_t eax_31 = (edx_2 - ecx_18) s>> 5
        sub_550290(eax_31, edx_2, ecx_18, eax_31, var_c8)
        void* ecx_19 = *(ebx + 0x54)
        int32_t eax_32
        int32_t edx_5
        edx_5:eax_32 = muls.dp.d(0x66666667, *(ebx + 0x58) - ecx_19)
        var_c8.b = 0
        int32_t edx_6 = edx_5 s>> 3
        int32_t eax_35 = (edx_6 u>> 0x1f) + edx_6
        sub_550380(eax_35, *(ebx + 0x58), ecx_19, eax_35, var_c8)
        int32_t* eax_36 = *(ebx + 0x60)
        int32_t* i = *eax_36
        
        if (i != eax_36)
            do
                int32_t* edx_8 = i[0xb]
                int32_t* ecx_20 = i[0xa]
                var_c8.b = 0
                int32_t eax_39 = (edx_8 - ecx_20) s>> 5
                sub_5501a0(eax_39, edx_8, ecx_20, eax_39, var_c8)
                
                if (*(i + 0xd) == 0)
                    int32_t* i_4 = i[2]
                    
                    if (*(i_4 + 0xd) != 0)
                        int32_t* i_6 = i[1]
                        
                        if (*(i_6 + 0xd) == 0)
                            while (i == i_6[2])
                                i = i_6
                                i_6 = i_6[1]
                                
                                if (*(i_6 + 0xd) != 0)
                                    break
                        
                        i = i_6
                    else
                        i = i_4
                        int32_t* i_5 = *i
                        
                        while (*(i_5 + 0xd) == 0)
                            i = i_5
                            i_5 = *i
            while (i != *(ebx + 0x60))
        
        int32_t* eax_63 = *(ebx + 0x68)
        int32_t* i_1 = *eax_63
        
        if (i_1 != eax_63)
            do
                int32_t* edx_13 = i_1[0xb]
                int32_t* ecx_46 = i_1[0xa]
                var_c8.b = 0
                int32_t eax_66 = (edx_13 - ecx_46) s>> 5
                sub_550290(eax_66, edx_13, ecx_46, eax_66, var_c8)
                
                if (*(i_1 + 0xd) == 0)
                    int32_t* i_7 = i_1[2]
                    
                    if (*(i_7 + 0xd) != 0)
                        int32_t* i_9 = i_1[1]
                        
                        if (*(i_9 + 0xd) == 0)
                            while (i_1 == i_9[2])
                                i_1 = i_9
                                i_9 = i_9[1]
                                
                                if (*(i_9 + 0xd) != 0)
                                    break
                        
                        i_1 = i_9
                    else
                        i_1 = i_7
                        int32_t* i_8 = *i_1
                        
                        while (*(i_8 + 0xd) == 0)
                            i_1 = i_8
                            i_8 = *i_1
            while (i_1 != *(ebx + 0x68))
        
        int32_t** eax_67 = *(ebx + 0x70)
        int32_t* i_2 = *eax_67
        
        if (i_2 != eax_67)
            do
                void* ecx_47 = i_2[0xa]
                int32_t eax_68
                int32_t edx_16
                edx_16:eax_68 = muls.dp.d(0x66666667, i_2[0xb] - ecx_47)
                var_c8.b = 0
                int32_t edx_17 = edx_16 s>> 3
                int32_t eax_71 = (edx_17 u>> 0x1f) + edx_17
                sub_550380(eax_71, i_2[0xb], ecx_47, eax_71, var_c8)
                
                if (*(i_2 + 0xd) == 0)
                    int32_t* i_10 = i_2[2]
                    
                    if (*(i_10 + 0xd) != 0)
                        int32_t* i_12 = i_2[1]
                        
                        if (*(i_12 + 0xd) == 0)
                            while (i_2 == i_12[2])
                                i_2 = i_12
                                i_12 = i_12[1]
                                
                                if (*(i_12 + 0xd) != 0)
                                    break
                        
                        i_2 = i_12
                    else
                        i_2 = i_10
                        int32_t* i_11 = *i_2
                        
                        while (*(i_11 + 0xd) == 0)
                            i_2 = i_11
                            i_11 = *i_2
            while (i_2 != *(ebx + 0x70))
        
        result = *(ebx + 0x78)
        enum MESSAGEBOX_RESULT i_3 = *result
        
        if (i_3 != result)
            do
                void* ecx_48 = *(i_3 + 0x28)
                int32_t eax_72
                int32_t edx_21
                edx_21:eax_72 = muls.dp.d(0x66666667, *(i_3 + 0x2c) - ecx_48)
                var_c8.b = 0
                int32_t edx_22 = edx_21 s>> 3
                int32_t eax_75 = (edx_22 u>> 0x1f) + edx_22
                sub_5512c0(eax_75, *(i_3 + 0x2c), ecx_48, eax_75, var_c8)
                
                if (*(i_3 + 0xd) == 0)
                    enum MESSAGEBOX_RESULT i_13 = *(i_3 + 8)
                    
                    if (*(i_13 + 0xd) != 0)
                        result = *(i_3 + 4)
                        
                        if (*(result + 0xd) == 0)
                            while (i_3 == *(result + 8))
                                i_3 = result
                                result = *(result + 4)
                                
                                if (*(result + 0xd) != 0)
                                    break
                        
                        i_3 = result
                    else
                        i_3 = i_13
                        result = *i_3
                        
                        while (*(result + 0xd) == 0)
                            i_3 = result
                            result = *i_3
            while (i_3 != *(ebx + 0x78))
        
        ebx.b = 1
    else
        while (true)
            int32_t ebp_1 = esi_1[6]
            void* edi_1 = &esi_1[1]
            ebx = *(edi_1 + 0x10)
            void* ecx_2
            
            if (ebp_1 u< 0x10)
                ecx_2 = edi_1
            else
                ecx_2 = *edi_1
            
            void* eax_7 = 0x10
            
            if (ebx u< 0x10)
                eax_7 = ebx
            
            int32_t eax_8 = sub_405190(eax_7, "ObjectMulDiffuse", ecx_2, eax_7)
            bool cond:0_1 = eax_8 == 0
            
            if (eax_8 == 0)
                if (ebx u>= 0x10)
                    eax_8.b = ebx != 0x10
                else
                    eax_8 = 0xffffffff
                
                cond:0_1 = eax_8 == 0
            
            eax_8.b = cond:0_1
            struct sealengine::CFrameMulColor::VTable* const var_c4
            int128_t var_c0
            void var_48
            
            if (eax_8.b == 0)
                void* ecx_6
                
                if (ebp_1 u< 0x10)
                    ecx_6 = edi_1
                else
                    ecx_6 = *edi_1
                
                void* eax_13 = 0x10
                
                if (ebx u< 0x10)
                    eax_13 = ebx
                
                int32_t eax_14 = sub_405190(eax_13, "ObjectAddAmbient", ecx_6, eax_13)
                bool cond:1_1 = eax_14 == 0
                
                if (eax_14 == 0)
                    if (ebx u>= 0x10)
                        eax_14.b = ebx != 0x10
                    else
                        eax_14 = 0xffffffff
                    
                    cond:1_1 = eax_14 == 0
                
                eax_14.b = cond:1_1
                
                if (eax_14.b == 0)
                    if (sub_40c250(edi_1, "ObjectMulAlpha") == 0)
                        if (sub_40c250(edi_1, "Mesh") == 0)
                            if (sub_40c250(edi_1, "MeshMulDiffuse") == 0)
                                if (sub_40c250(edi_1, "MeshAddAmbient") == 0)
                                    if (sub_40c250(edi_1, "MeshMulAlpha") == 0)
                                        int32_t eax_58
                                        int32_t ecx_41
                                        int32_t edx_12
                                        eax_58, ecx_41, edx_12 =
                                            sub_40c250(edi_1, "MeshTextureAnime")
                                        
                                        if (eax_58.b == 0)
                                            if (*(edi_1 + 0x14) u>= 0x10)
                                                edi_1 = *edi_1
                                            
                                            sub_59f4e0(eax_58, edx_12, ecx_41, 0x6e3d80, edi_1)
                                            ebx.b = 0
                                            break
                                        
                                        void* ecx_42 = esi_1[7]
                                        
                                        if (((esi_1[8] - ecx_42) & 0xffffffc0) != 0x80
                                                || *(ecx_42 + 4) != 0 || *(ecx_42 + 0x44) != 0)
                                            ebx.b = 0
                                            break
                                        
                                        int32_t eax_61
                                        
                                        if (*(ecx_42 + 0x44) != 1)
                                            eax_61 = *(ecx_42 + 0x48)
                                        else
                                            eax_61 = int.d(fconvert.t(*(ecx_42 + 0x4c)))
                                        
                                        struct sealengine::CFrameIndex::VTable* const var_90_1 =
                                            &sealengine::CFrameIndex::`vftable'
                                        int32_t var_8c_1 = eax_61
                                        struct sealengine::CFrameMulColor::VTable* ecx_43
                                        
                                        if (*(ecx_42 + 4) != 1)
                                            ecx_43 = *(ecx_42 + 8)
                                        else
                                            ecx_43 = int.d(fconvert.t(*(ecx_42 + 0xc)))
                                        
                                        var_c4 = ecx_43
                                        var_c0.d = 0
                                        var_c0:4.d = &sealengine::CFrameIndex::`vftable'
                                        var_c0:8.d = eax_61
                                        var_c0:0xc.d = 0xffffffff
                                        var_4.b = 0xf
                                        ebx = var_c8
                                        sub_54e560(sub_54e0e0(ebx + 0x78, &var_28), &var_c4)
                                        var_4.b = 1
                                        struct sealengine::CFrameIndex::VTable* const var_90_2 =
                                            &sealengine::CFrameIndex::`vftable'
                                    else
                                        void* edx_11 = esi_1[7]
                                        
                                        if (((esi_1[8] - edx_11) & 0xffffffc0) != 0x80
                                                || *(edx_11 + 4) != 0)
                                            ebx.b = 0
                                            break
                                        
                                        if (sub_586c10(edx_11 + 0x40).b == 0)
                                            ebx.b = 0
                                            break
                                        
                                        int32_t xmm0_16
                                        
                                        if (*(edx_11 + 0x44) != 0)
                                            xmm0_16 = *(edx_11 + 0x4c)
                                        else
                                            xmm0_16 = _mm_cvtepi32_ps(zx.o(*(edx_11 + 0x48)))
                                        
                                        struct sealengine::CFrameMulAlpha::VTable* const var_a0 =
                                            &sealengine::CFrameMulAlpha::`vftable'
                                        int32_t var_9c_1 = xmm0_16
                                        int32_t eax_55
                                        
                                        if (*(edx_11 + 4) != 1)
                                            eax_55 = *(edx_11 + 8)
                                        else
                                            eax_55 = int.d(fconvert.t(*(edx_11 + 0xc)))
                                        
                                        int32_t* eax_56 = sub_54e230(&var_c4, eax_55, 1, &var_a0)
                                        var_4.b = 0xd
                                        ebx = var_c8
                                        sub_54e3b0(sub_54e080(ebx + 0x70, &var_28), eax_56)
                                        var_4.b = 1
                                        var_a0 = &sealengine::CFrameMulAlpha::`vftable'
                                else
                                    void* edx_10 = esi_1[7]
                                    
                                    if (((esi_1[8] - edx_10) & 0xffffffc0) != 0x100
                                            || *(edx_10 + 4) != 0)
                                        ebx.b = 0
                                        break
                                    
                                    if (sub_586c10(edx_10 + 0x40).b == 0)
                                        ebx.b = 0
                                        break
                                    
                                    if (sub_586c10(edx_10 + 0x80).b == 0)
                                        ebx.b = 0
                                        break
                                    
                                    if (sub_586c10(edx_10 + 0xc0).b == 0)
                                        ebx.b = 0
                                        break
                                    
                                    int32_t xmm2_8
                                    
                                    if (*(edx_10 + 0xc4) != 0)
                                        xmm2_8 = *(edx_10 + 0xcc)
                                    else
                                        xmm2_8 = _mm_cvtepi32_ps(zx.o(*(edx_10 + 0xc8)))
                                    
                                    int32_t xmm1_8
                                    
                                    if (*(edx_10 + 0x84) != 0)
                                        xmm1_8 = *(edx_10 + 0x8c)
                                    else
                                        xmm1_8 = _mm_cvtepi32_ps(zx.o(*(edx_10 + 0x88)))
                                    
                                    int32_t xmm0_13
                                    
                                    if (*(edx_10 + 0x44) != 0)
                                        xmm0_13 = *(edx_10 + 0x4c)
                                    else
                                        xmm0_13 = _mm_cvtepi32_ps(zx.o(*(edx_10 + 0x48)))
                                    
                                    int32_t var_54_1 = xmm1_8
                                    int32_t var_50_1 = xmm2_8
                                    int32_t var_4c_1 = 0
                                    var_c4 = &sealengine::CFrameAddColor::`vftable'
                                    var_c0 = xmm0_13.o
                                    int32_t eax_49
                                    
                                    if (*(edx_10 + 4) != 1)
                                        eax_49 = *(edx_10 + 8)
                                    else
                                        eax_49 = int.d(fconvert.t(*(edx_10 + 0xc)))
                                    
                                    void* eax_50 = sub_54e200(&var_48, eax_49, 1, &var_c4)
                                    var_4.b = 0xb
                                    ebx = var_c8
                                    sub_54e340(sub_54e020(ebx + 0x68, &var_28), eax_50)
                                    var_4.b = 1
                            else
                                void* edx_9 = esi_1[7]
                                
                                if (((esi_1[8] - edx_9) & 0xffffffc0) != 0x100 || *(edx_9 + 4) != 0)
                                    ebx.b = 0
                                    break
                                
                                if (sub_586c10(edx_9 + 0x40).b == 0)
                                    ebx.b = 0
                                    break
                                
                                if (sub_586c10(edx_9 + 0x80).b == 0)
                                    ebx.b = 0
                                    break
                                
                                if (sub_586c10(edx_9 + 0xc0).b == 0)
                                    ebx.b = 0
                                    break
                                
                                int32_t xmm2_6
                                
                                if (*(edx_9 + 0xc4) != 0)
                                    xmm2_6 = *(edx_9 + 0xcc)
                                else
                                    xmm2_6 = _mm_cvtepi32_ps(zx.o(*(edx_9 + 0xc8)))
                                
                                int32_t xmm1_6
                                
                                if (*(edx_9 + 0x84) != 0)
                                    xmm1_6 = *(edx_9 + 0x8c)
                                else
                                    xmm1_6 = _mm_cvtepi32_ps(zx.o(*(edx_9 + 0x88)))
                                
                                int32_t xmm0_10
                                
                                if (*(edx_9 + 0x44) != 0)
                                    xmm0_10 = *(edx_9 + 0x4c)
                                else
                                    xmm0_10 = _mm_cvtepi32_ps(zx.o(*(edx_9 + 0x48)))
                                
                                int32_t var_64_1 = xmm1_6
                                int32_t var_60_1 = xmm2_6
                                int32_t var_5c_1 = 0
                                var_c4 = &sealengine::CFrameMulColor::`vftable'
                                var_c0 = xmm0_10.o
                                int32_t eax_43
                                
                                if (*(edx_9 + 4) != 1)
                                    eax_43 = *(edx_9 + 8)
                                else
                                    eax_43 = int.d(fconvert.t(*(edx_9 + 0xc)))
                                
                                int32_t* eax_44 = sub_54e1d0(&var_48, eax_43, 1, &var_c4)
                                var_4.b = 9
                                ebx = var_c8
                                sub_54e2d0(sub_54dfc0(ebx + 0x60, &var_28), eax_44)
                                var_4.b = 1
                        else
                            void* ecx_14 = esi_1[7]
                            
                            if (((esi_1[8] - ecx_14) & 0xffffffc0) != 0x40 || *(ecx_14 + 4) != 3)
                                ebx.b = 0
                                break
                            
                            if (&var_28 != ecx_14 + 0x28)
                                sub_401ff0(&var_28, ecx_14 + 0x28, 0, 0xffffffff)
                            
                            ebx = var_c8
                    else
                        void* ecx_11 = esi_1[7]
                        
                        if (((esi_1[8] - ecx_11) & 0xffffffc0) != 0x80 || *(ecx_11 + 4) != 0)
                            ebx.b = 0
                            break
                        
                        result = *(ecx_11 + 0x44)
                        int32_t xmm0_8
                        
                        if (result == 0)
                            xmm0_8 = _mm_cvtepi32_ps(zx.o(*(ecx_11 + 0x48)))
                        else
                            if (result != IDOK)
                                ebx.b = 0
                                break
                                break
                            
                            if (result != 0)
                                xmm0_8 = *(ecx_11 + 0x4c)
                            else
                                xmm0_8 = _mm_cvtepi32_ps(zx.o(*(ecx_11 + 0x48)))
                        
                        struct sealengine::CFrameMulAlpha::VTable* const var_98_1 =
                            &sealengine::CFrameMulAlpha::`vftable'
                        int32_t var_94_1 = xmm0_8
                        int32_t eax_22
                        
                        if (*(ecx_11 + 4) != 1)
                            eax_22 = *(ecx_11 + 8)
                        else
                            eax_22 = int.d(fconvert.t(*(ecx_11 + 0xc)))
                        
                        var_c4 = eax_22
                        var_c0.d = 1
                        var_c0:4.d = &sealengine::CFrameMulAlpha::`vftable'
                        var_c0:8.d = xmm0_8
                        var_c0:0xc.d = 0xffffffff
                        var_4.b = 7
                        ebx = var_c8
                        sub_54e3b0(ebx + 0x54, &var_c4)
                        var_4.b = 1
                        struct sealengine::CFrameMulAlpha::VTable* const var_98_2 =
                            &sealengine::CFrameMulAlpha::`vftable'
                else
                    void* ecx_7 = esi_1[7]
                    
                    if (((esi_1[8] - ecx_7) & 0xffffffc0) != 0x100 || *(ecx_7 + 4) != 0)
                        ebx.b = 0
                        break
                    
                    result = *(ecx_7 + 0x44)
                    
                    if (result != 0 && result != IDOK)
                        ebx.b = 0
                        break
                    
                    result = *(ecx_7 + 0x84)
                    
                    if (result != 0 && result != IDOK)
                        ebx.b = 0
                        break
                    
                    result = *(ecx_7 + 0xc4)
                    int32_t xmm2_4
                    
                    if (result == 0)
                        xmm2_4 = _mm_cvtepi32_ps(zx.o(*(ecx_7 + 0xc8)))
                    else
                        if (result != IDOK)
                            ebx.b = 0
                            break
                            break
                        
                        if (result != 0)
                            xmm2_4 = *(ecx_7 + 0xcc)
                        else
                            xmm2_4 = _mm_cvtepi32_ps(zx.o(*(ecx_7 + 0xc8)))
                    
                    int32_t xmm1_4
                    
                    if (*(ecx_7 + 0x84) != 0)
                        xmm1_4 = *(ecx_7 + 0x8c)
                    else
                        xmm1_4 = _mm_cvtepi32_ps(zx.o(*(ecx_7 + 0x88)))
                    
                    int32_t xmm0_5
                    
                    if (*(ecx_7 + 0x44) != 0)
                        xmm0_5 = *(ecx_7 + 0x4c)
                    else
                        xmm0_5 = _mm_cvtepi32_ps(zx.o(*(ecx_7 + 0x48)))
                    
                    int32_t var_74_1 = xmm1_4
                    int32_t var_70_1 = xmm2_4
                    int32_t var_6c_1 = 0
                    var_c4 = &sealengine::CFrameAddColor::`vftable'
                    var_c0 = xmm0_5.o
                    int32_t eax_17
                    
                    if (*(ecx_7 + 4) != 1)
                        eax_17 = *(ecx_7 + 8)
                    else
                        eax_17 = int.d(fconvert.t(*(ecx_7 + 0xc)))
                    
                    int32_t* eax_18 = sub_54e200(&var_48, eax_17, 1, &var_c4)
                    var_4.b = 5
                    ebx = var_c8
                    sub_54e340(ebx + 0x48, eax_18)
                    var_4.b = 1
            else
                void* ecx_3 = esi_1[7]
                
                if (((esi_1[8] - ecx_3) & 0xffffffc0) != 0x100 || *(ecx_3 + 4) != 0)
                    ebx.b = 0
                    break
                
                result = *(ecx_3 + 0x44)
                
                if (result != 0 && result != IDOK)
                    ebx.b = 0
                    break
                
                result = *(ecx_3 + 0x84)
                
                if (result != 0 && result != IDOK)
                    ebx.b = 0
                    break
                
                result = *(ecx_3 + 0xc4)
                int32_t xmm2_2
                
                if (result == 0)
                    xmm2_2 = _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0xc8)))
                else
                    if (result != IDOK)
                        ebx.b = 0
                        break
                        break
                    
                    if (result != 0)
                        xmm2_2 = *(ecx_3 + 0xcc)
                    else
                        xmm2_2 = _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0xc8)))
                
                int32_t xmm1_2
                
                if (*(ecx_3 + 0x84) != 0)
                    xmm1_2 = *(ecx_3 + 0x8c)
                else
                    xmm1_2 = _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x88)))
                
                int32_t xmm0_2
                
                if (*(ecx_3 + 0x44) != 0)
                    xmm0_2 = *(ecx_3 + 0x4c)
                else
                    xmm0_2 = _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x48)))
                
                int32_t var_84_1 = xmm1_2
                int32_t var_80_1 = xmm2_2
                int32_t var_7c_1 = 0
                var_c4 = &sealengine::CFrameMulColor::`vftable'
                var_c0 = xmm0_2.o
                int32_t eax_11
                
                if (*(ecx_3 + 4) != 1)
                    eax_11 = *(ecx_3 + 8)
                else
                    eax_11 = int.d(fconvert.t(*(ecx_3 + 0xc)))
                
                int32_t* eax_12 = sub_54e1d0(&var_48, eax_11, 1, &var_c4)
                var_4.b = 3
                ebx = var_c8
                sub_54e2d0(ebx + 0x3c, eax_12)
                var_4.b = 1
            esi_1 = &esi_1[0xa]
            
            if (esi_1 == var_a8)
                goto label_54d784
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)
    
    ebp = var_a8
    edi = var_ac
    int32_t var_14_2 = 0xf
    int32_t var_18_2 = 0
    var_28 = 0
else
    sub_59f4e0(eax_6, edx, ecx_1, 0x6e3d60, eax_4)
    ebx.b = 0

int32_t var_4_1 = 0xffffffff
int32_t* esi_2 = edi

if (edi != ebp)
    do
        (**esi_2)(0)
        esi_2 = &esi_2[0xa]
    while (esi_2 != ebp)

if (edi != 0)
    j__free(edi)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_c8)
return result
