// 函数: sub_487bb0
// 地址: 0x487bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_14 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bac28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_68 = ebx
int32_t var_60 = 0

if (*(ebx + 0x80) == 0)
    int32_t var_8c_1 = *(ebx + 8)
    void* ebp_1 = ebx + 0x70
    int32_t var_4 = 0
    void* var_5c
    sub_403110(ebp_1, sub_4691f0(&var_5c, "FPS\n > %d\n\n"), nullptr, 0xffffffff)
    int32_t var_4_1 = 0xffffffff
    int32_t var_48
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    int32_t var_8c_3 = *(ebx + 0x14)
    int32_t var_90_1 = *(ebx + 0x10)
    int32_t var_90_2 = 0
    int32_t var_4_2 = 1
    sub_403110(ebp_1, sub_4691f0(&var_5c, 0x6de414), nullptr, 0xffffffff)
    int32_t var_4_3 = 0xffffffff
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    var_90_2.q = _mm_cvtps_pd(*(ebx + 0x18))
    int32_t var_90_3 = 0
    int32_t var_4_4 = 2
    sub_403110(ebp_1, sub_4691f0(&var_5c, 0x6dfaf0), nullptr, 0xffffffff)
    int32_t var_4_5 = 0xffffffff
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    var_90_3.q = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(ebx + 0x10))) f/ *(ebx + 0x1c))
    int32_t var_4_6 = 3
    sub_403110(ebp_1, sub_4691f0(&var_5c, 0x6de434), nullptr, 0xffffffff)
    int32_t var_4_7 = 0xffffffff
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    int32_t var_8c_7 = *(ebx + 0x2c)
    int32_t var_90_4 = *(ebx + 0x28)
    int32_t var_4_8 = 4
    sub_403110(ebp_1, sub_4691f0(&var_5c, 0x6de654), nullptr, 0xffffffff)
    int32_t var_4_9 = 0xffffffff
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    void* eax_10 = *(ebx + 0x3c)
    int32_t eax_11
    
    if (eax_10 != 0)
        eax_11 = *(eax_10 + 0x14)
    else
        eax_11 = 0xffffffff
    
    int32_t var_8c_9 = eax_11
    int32_t var_4_10 = 5
    sub_403110(ebp_1, sub_4691f0(&var_5c, 0x6dfb10), nullptr, 0xffffffff)
    int32_t var_4_11 = 0xffffffff
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    int32_t var_8c_11 = *(ebx + 0x54)
    int32_t var_90_5 = 0
    int32_t var_4_12 = 6
    sub_403110(ebp_1, sub_4691f0(&var_5c, 0x6de67c), nullptr, 0xffffffff)
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c.b = 0
    int32_t var_4_13 = 7
    int64_t xmm0_7 = (zx.o(0)).q
    int32_t* eax_14 = *(ebx + 0x40)
    float var_70_1 = 0f
    int32_t* i = *eax_14
    int32_t var_2c
    int32_t var_18
    
    if (i != eax_14)
        void* ecx_9 = ebx + 0x48
        
        do
            int32_t var_90_6 = 0
            bool cond:4_1 = *sub_41ff70(ecx_9, &i[0xa]) == 1
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            char var_44 = 0
            sub_401ff0(&var_44, &i[4], 0, 0xffffffff)
            var_4_13.b = 8
            int32_t* edi_2 = i[0xa]
            int32_t eax_18 = (*(*edi_2 + 0x10))(eax_4)
            int32_t eax_19 = (*(*edi_2 + 0x14))()
            float xmm0_8
            
            xmm0_8 = cond:4_1 == 0 ? 1f : 1.5f
            
            int32_t ecx_13 = 1
            
            if (eax_18 s> 1)
                do
                    ecx_13 *= 2
                while (ecx_13 s< eax_18)
            
            int32_t eax_20 = 1
            
            if (eax_19 s> 1)
                do
                    eax_20 *= 2
                while (eax_20 s< eax_19)
            
            char* edi_3 = &var_44
            
            if (var_30_1 u>= 0x10)
                edi_3 = var_44.d
            
            int32_t eax_22 = 0x6dfab0
            float xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_20 * ecx_13))
            
            if (cond:4_1 == 0)
                eax_22 = 0x6dfab8
            
            float xmm1_5[0x2] = xmm1_2 * 4f * xmm0_8 * 0.0009765625f
            var_70_1 = xmm1_5[0] + var_70_1
            var_90_6.q = _mm_cvtps_pd(xmm1_5)
            int32_t ecx_15 = 0x6dfac0
            
            if ((*(*edi_2 + 0x28))(eax_22, var_90_6) == 0)
                ecx_15 = 0x6dfac8
            
            int32_t var_98_5 = ecx_15
            int32_t var_9c_1 = eax_19
            int32_t var_a0_1 = eax_18
            char* var_a4_1 = edi_3
            var_90_5 = 0
            var_4_13.b = 9
            sub_403110(&var_5c, sub_4691f0(&var_2c, " >> %s [%d x %d]\n >> "), nullptr, 0xffffffff)
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            var_4_13.b = 7
            
            if (var_30_1 u>= 0x10)
                j__free(var_44.d)
            
            if (*(i + 0xd) == 0)
                int32_t* i_1 = i[2]
                
                if (*(i_1 + 0xd) != 0)
                    int32_t* i_3 = i[1]
                    
                    if (*(i_3 + 0xd) == 0)
                        while (i == i_3[2])
                            i = i_3
                            i_3 = i_3[1]
                            
                            if (*(i_3 + 0xd) != 0)
                                break
                    
                    i = i_3
                else
                    i = i_1
                    int32_t* i_2 = *i
                    
                    while (*(i_2 + 0xd) == 0)
                        i = i_2
                        i_2 = *i
            
            ebx = var_68
            ecx_9 = ebx + 0x48
        while (i != *(ebx + 0x40))
        
        xmm0_7 = var_70_1
        ebp_1 = ebx + 0x70
    
    var_90_5.q = _mm_cvtps_pd(xmm0_7)
    int32_t var_94_14 = *(ebx + 0x44)
    var_4_13.b = 0xa
    sub_403110(ebp_1, sub_4691f0(&var_2c, 0x6dfad0), nullptr, 0xffffffff)
    var_4_13.b = 7
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    sub_403110(ebp_1, &var_5c, nullptr, 0xffffffff)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_401ff0(arg2, ebp_1, 0, 0xffffffff)
    
    if (var_48_1 u>= 0x10)
        j__free(var_5c)
else
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_401ff0(arg2, ebx + 0x70, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return arg2
