// 函数: sub_574380
// 地址: 0x574380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_70 = 0xffffffff
int32_t (* var_74)(void* arg1) = sub_73c920
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* i_2
int32_t eax_2 = __security_cookie ^ &i_2
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm2 = arg2[2]
float xmm1 = *arg2
arg1[0xd] = arg1[0xc]
arg1[0x10] = arg1[0xf]
int32_t* i_3 = sub_574200(arg1, xmm1, xmm2)
float* eax_6 = arg3
i_2 = i_3
int32_t* result = sub_574200(arg1, *eax_6, eax_6[2])

if (i_3 == 0 || result == 0)
    result.b = 0
else
    void var_68
    sub_5deb30(&var_68, arg4, arg5)
    int32_t edi_1 = arg1[1]
    
    for (int32_t* i = *arg1; i != edi_1; i = &i[0x17])
        sub_5722d0(i, &var_68)
    
    int32_t* var_84 = nullptr
    int32_t var_80_1 = 0
    int32_t* eax_7 = sub_406950(nullptr, nullptr)
    var_84 = eax_7
    int32_t var_70_1 = 0
    int32_t* var_90 = nullptr
    int32_t var_8c_1 = 0
    int32_t* eax_8 = sub_406950(nullptr, nullptr)
    int32_t* var_88_1 = eax_8
    var_90 = eax_8
    var_70_1.b = 1
    i_3[0x14] = 0
    float xmm2_3 = i_3[0x10] f- result[0x10]
    float xmm1_3 = i_3[0x11] f- result[0x11]
    float xmm0_2 = i_3[0x12] f- result[0x12]
    i_3[0x13] = 0
    int32_t* var_bc_2 = eax_7[1]
    i_3[0x15] = xmm2_3 * xmm2_3 + xmm1_3 * xmm1_3 + xmm0_2 * xmm0_2
    int32_t* eax_10 = sub_406980(eax_7, var_bc_2, &i_2)
    
    if (0x15555554 - var_80_1 u< 1)
    label_5744e6:
        sub_6d0927("list<T> too long")
        noreturn
    
    eax_7[1] = eax_10
    int32_t esi_4 = var_80_1 + 1
    int32_t var_80_2 = esi_4
    *eax_10[1] = eax_10
    int32_t* ebx
    
    if (var_80_1 == 0xffffffff)
    label_57475c:
        sub_574810(arg1)
        ebx.b = 1
    else
        int32_t* ecx_6 = var_84
        int32_t* edx_2 = var_88_1
        int32_t* var_7c_1 = ecx_6
        
        while (true)
            void** eax_12 = *ecx_6
            float xmm1_5 = 3.40282347e+38f
            i_2 = nullptr
            
            if (eax_12 != ecx_6)
                do
                    int32_t* i_5 = eax_12[2]
                    
                    if (i_5[0x16].b != 0)
                        float xmm0_5 = i_5[0x15] f+ i_5[0x14]
                        
                        if (not(xmm1_5 <= xmm0_5))
                            xmm1_5 = xmm0_5
                            i_2 = i_5
                    
                    eax_12 = *eax_12
                while (eax_12 != ecx_6)
                
                esi_4 = var_80_2
            
            int32_t* i_4 = i_2
            int32_t* i_6 = i_4
            
            if (i_4 == 0)
                ebx.b = 0
                break
            
            if (i_4 == result)
                sub_5747c0(arg1, arg2, arg3, i_4)
                goto label_57475c
            
            void* i_1 = &i_4[9]
            
            for (ebx = i_1 + 0xc; i_1 != ebx; i_1 += 4)
                void* j = *i_1
                
                if (j == 0)
                    ecx_6 = var_7c_1
                else
                    float xmm2_8 = i_4[0x10] f- *(j + 0x40)
                    float xmm1_7 = i_4[0x11] f- *(j + 0x44)
                    float xmm0_7 = i_4[0x12] f- *(j + 0x48)
                    float xmm2_12 = xmm2_8 * xmm2_8 + xmm1_7 * xmm1_7 + xmm0_7 * xmm0_7 f+ i_4[0x14]
                    void** esi_5 = *var_7c_1
                    
                    if (esi_5 != var_7c_1)
                        while (esi_5[2] != j)
                            esi_5 = *esi_5
                            
                            if (esi_5 == var_7c_1)
                                break
                    
                    void** eax_14 = *edx_2
                    
                    if (eax_14 != edx_2)
                        while (eax_14[2] != j)
                            eax_14 = *eax_14
                            
                            if (eax_14 == edx_2)
                                break
                    
                    if (esi_5 != var_7c_1)
                        if (not(xmm2_12 f>= *(j + 0x50)))
                            goto label_5745f2
                        
                        ecx_6 = var_7c_1
                        esi_4 = var_80_2
                    else if (eax_14 == edx_2 || not(xmm2_12 f>= *(j + 0x50)))
                    label_5745f2:
                        *(j + 0x4c) = i_2
                        *(*i_1 + 0x50) = xmm2_12
                        void* ecx_8 = *i_1
                        float xmm2_14 = *(ecx_8 + 0x40) f- result[0x10]
                        float xmm1_10 = *(ecx_8 + 0x44) f- result[0x11]
                        float xmm0_10 = *(ecx_8 + 0x48) f- result[0x12]
                        *(ecx_8 + 0x54) = xmm2_14 * xmm2_14 + xmm1_10 * xmm1_10 + xmm0_10 * xmm0_10
                        
                        if (eax_14 != var_88_1)
                            void** eax_15 = *var_88_1
                            
                            if (eax_15 != var_88_1)
                                while (eax_15[2] != *i_1)
                                    eax_15 = *eax_15
                                    
                                    if (eax_15 == var_88_1)
                                        break
                            
                            var_8c_1 -= 1
                            *eax_15[1] = *eax_15
                            *(*eax_15 + 4) = eax_15[1]
                            sub_403160(eax_15, 1, 0xc)
                        
                        ecx_6 = var_7c_1
                        
                        if (esi_5 != ecx_6)
                            esi_4 = var_80_2
                        else
                            int32_t* eax_16 = sub_406980(ecx_6, ecx_6[1], i_1)
                            
                            if (0x15555554 - var_80_2 u< 1)
                                goto label_5744e6
                            
                            int32_t* eax_17 = var_7c_1
                            esi_4 = var_80_2 + 1
                            ecx_6 = var_84
                            var_80_2 = esi_4
                            var_7c_1 = ecx_6
                            eax_17[1] = eax_16
                            *eax_16[1] = eax_16
                    else
                        ecx_6 = var_7c_1
                        esi_4 = var_80_2
                    
                    i_4 = i_2
                
                edx_2 = var_88_1
            
            void** eax_19 = *ecx_6
            
            if (eax_19 != ecx_6)
                while (eax_19[2] != i_2)
                    eax_19 = *eax_19
                    
                    if (eax_19 == ecx_6)
                        break
            
            *eax_19[1] = *eax_19
            var_80_2 = esi_4 - 1
            *(*eax_19 + 4) = eax_19[1]
            sub_403160(eax_19, 1, 0xc)
            int32_t* eax_20 = sub_406980(var_88_1, var_88_1[1], &i_6)
            
            if (0x15555554 - var_8c_1 u< 1)
                goto label_5744e6
            
            var_88_1[1] = eax_20
            esi_4 = var_80_2
            var_8c_1 += 1
            *eax_20[1] = eax_20
            
            if (esi_4 == 0)
                goto label_57475c
            
            edx_2 = var_90
            ecx_6 = var_7c_1
            var_88_1 = edx_2
    
    sub_406910(&var_90)
    sub_403160(var_90, 1, 0xc)
    sub_406910(&var_84)
    sub_403160(var_84, 1, 0xc)
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &i_2)
return result
