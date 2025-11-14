// 函数: sub_611ad0
// 地址: 0x611ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cd60e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void var_88
sub_608f00(&var_88)
int32_t var_c_1 = 0
struct IShaderParam::graphengine::CShaderParam::VTable* var_50
sub_609200(&var_88, sub_608f00(&var_50))
int32_t i_8 = arg4
char var_58 = arg2
char var_57 = arg3
int32_t var_84 = 0x14
int32_t var_80 = 2
int32_t i_12 = i_8

if (sub_608f90(arg1 + 0x50, &var_88) != 0)
    int32_t* ecx_4 = *(arg1 + 0x4c)
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 4))(eax_2)
        *(arg1 + 0x4c) = 0
    
    int32_t* ecx_5 = *(arg1 + 0x48)
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 4))(eax_2)
        *(arg1 + 0x48) = 0
    
    sub_6093d0(arg1 + 0x50)
    void* var_c8_2 = arg1 + 0x50
    
    if (sub_612900(arg1, &var_88) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (sub_612940(arg1, &var_88, 0) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    sub_609200(arg1 + 0x50, &var_88)

float* var_94
sub_42f420(&var_94, 4)
var_c_1.b = 1
float xmm0_1 = _mm_cvtepi32_ps(zx.o(arg6))
float* eax_9 = var_94
float xmm2 = 1f / xmm0_1
*eax_9 = xmm2 * 2f
float xmm1 = 1f / _mm_cvtepi32_ps(zx.o(arg7))
float var_ac = xmm1
eax_9[1] = xmm1 * -2f
eax_9[2] = 0xbf800000
eax_9[3] = 0x3f800000
int32_t edx = *(arg1 + 0xbc)
int32_t* ecx_11 = *(*(arg1 + 4) + 0x38)
char var_ad

if (edx == 0)
    var_ad = 0
else
    (*(*ecx_11 + 0xc0))(ecx_11, edx, 0, 0, var_94, 0, 0)
    int32_t i_11 = 0
    float* var_a0 = nullptr
    int32_t var_9c_1 = 0
    int32_t var_98_1 = 0
    sub_42f4d0(&var_a0, 0x80, &i_11)
    var_c_1.b = 2
    float* ebx_1 = var_a0
    
    if (arg5 == 0)
        if (arg3 != 0)
            int32_t i_14 = 0
            float xmm3_3 = var_ac
            int32_t eax_31
            int32_t edx_4
            edx_4:eax_31 = sx.q((i_8 << 1) + 0xffffffff)
            int32_t eax_36
            int32_t edx_5
            edx_5:eax_36 = sx.q(i_8)
            int32_t i_7 = (eax_36 - edx_5) s>> 1
            float xmm1_8 = _mm_cvtepi32_ps(zx.o(neg.d((eax_31 - edx_4) s>> 1))) + 0.5f
            
            if (i_7 s> 0)
                i_11 = i_7
                void* ecx_19 = &ebx_1[2]
                int32_t i
                
                do
                    float xmm0_16 = xmm3_3 * xmm1_8
                    xmm1_8 = xmm1_8 + 2f
                    *(ecx_19 - 4) = xmm0_16
                    *ecx_19 = 0x40000000
                    ecx_19 += 0x10
                    i = i_7
                    i_7 -= 1
                while (i != 1)
                i_14 = i_11
            
            ebx_1[i_14 * 4 + 2] = 0x3f800000
            float xmm1_10 = xmm1_8 - 0.5f + 1.5f
            
            if (i_14 + 1 s< i_8)
                void* eax_43 = ((i_14 + 1) << 4) + 8 + ebx_1
                int32_t i_10 = i_8 - (i_14 + 1)
                int32_t i_1
                
                do
                    float xmm0_18 = xmm3_3 * xmm1_10
                    xmm1_10 = xmm1_10 + 2f
                    *(eax_43 - 4) = xmm0_18
                    *eax_43 = 0x40000000
                    eax_43 += 0x10
                    i_1 = i_10
                    i_10 -= 1
                while (i_1 != 1)
        else if (i_8 s> 0)
            float xmm3_4 = var_ac
            void* ecx_21 = &ebx_1[1]
            int32_t eax_45
            int32_t edx_6
            edx_6:eax_45 = sx.q(i_8)
            int32_t eax_48 = neg.d((eax_45 - edx_6) s>> 1)
            int32_t i_2
            
            do
                ecx_21 += 0x10
                float xmm0_20 = _mm_cvtepi32_ps(zx.o(eax_48))
                eax_48 += 1
                *(ecx_21 - 0x10) = xmm0_20 * xmm3_4
                i_2 = i_8
                i_8 -= 1
            while (i_2 != 1)
    else if (arg3 != 0)
        int32_t i_13 = 0
        int32_t eax_13
        int32_t edx_1
        edx_1:eax_13 = sx.q((i_8 << 1) + 0xffffffff)
        int32_t eax_18
        int32_t edx_2
        edx_2:eax_18 = sx.q(i_8)
        int32_t i_6 = (eax_18 - edx_2) s>> 1
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(neg.d((eax_13 - edx_1) s>> 1))) + 0.5f
        
        if (i_6 s> 0)
            float* ecx_13 = ebx_1
            i_11 = i_6
            int32_t i_3
            
            do
                float xmm0_9 = xmm2 * xmm1_3
                xmm1_3 = xmm1_3 + 2f
                *ecx_13 = xmm0_9
                ecx_13[2] = 0x40000000
                ecx_13 = &ecx_13[4]
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            i_13 = i_11
        
        ebx_1[i_13 * 4 + 2] = 0x3f800000
        float xmm1_5 = xmm1_3 - 0.5f + 1.5f
        
        if (i_13 + 1 s< i_8)
            void* eax_24 = &ebx_1[(i_13 + 1) * 4]
            int32_t i_9 = i_8 - (i_13 + 1)
            int32_t i_4
            
            do
                float xmm0_11 = xmm2 * xmm1_5
                xmm1_5 = xmm1_5 + 2f
                *eax_24 = xmm0_11
                *(eax_24 + 8) = 0x40000000
                eax_24 += 0x10
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
    else if (i_8 s> 0)
        int32_t eax_26
        int32_t edx_3
        edx_3:eax_26 = sx.q(i_8)
        float* ecx_17 = ebx_1
        int32_t eax_29 = neg.d((eax_26 - edx_3) s>> 1)
        int32_t i_5
        
        do
            ecx_17 = &ecx_17[4]
            float xmm0_13 = _mm_cvtepi32_ps(zx.o(eax_29))
            eax_29 += 1
            ecx_17[-4] = xmm0_13 * xmm2
            i_5 = i_8
            i_8 -= 1
        while (i_5 != 1)
    
    int32_t ecx_22 = *(arg1 + 0xc4)
    int32_t* edx_7 = *(*(arg1 + 4) + 0x38)
    
    if (ecx_22 == 0)
        var_ad = 0
    else
        (*(*edx_7 + 0xc0))(edx_7, ecx_22, 0, 0, ebx_1, 0, 0)
        float eax_51 = *(arg1 + 0xbc)
        void* esi = *(arg1 + 4)
        
        if (eax_51 == 0)
            var_ad = 0
        else
            var_ac = eax_51
            
            if (*(esi + 0x144) != eax_51)
                int32_t* eax_52 = *(esi + 0x38)
                (*(*eax_52 + 0x1c))(eax_52, 0, 1, &var_ac)
                *(esi + 0x144) = var_ac
            
            float eax_54 = *(arg1 + 0xc4)
            void* esi_1 = *(arg1 + 4)
            
            if (eax_54 == 0)
                var_ad = 0
            else
                var_ac = eax_54
                
                if (*(esi_1 + 0x148) != eax_54)
                    int32_t* eax_55 = *(esi_1 + 0x38)
                    (*(*eax_55 + 0x40))(eax_55, 0, 1, &var_ac)
                    *(esi_1 + 0x148) = var_ac
                
                var_ad = 1
    
    if (ebx_1 != 0)
        j__free(ebx_1)

j__free(var_94)
int32_t result
result.b = var_ad
fsbase->NtTib.ExceptionList = ExceptionList
return result
