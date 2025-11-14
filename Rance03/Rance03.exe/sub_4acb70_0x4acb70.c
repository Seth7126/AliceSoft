// 函数: sub_4acb70
// 地址: 0x4acb70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc9f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x68) != 0)
    int32_t* var_18 = nullptr
    void* var_14_1 = nullptr
    int32_t var_10_1 = 0
    void* ebp_1 = arg1 + 8
    int32_t var_4 = 0
    sub_412de0(&var_18, ebp_1)
    
    for (int32_t* i = *arg3; i != arg3[1]; i = &i[1])
        (*(**(*(*i + 0x10) + 0x5c) + 0x48))(&var_18)
    
    int32_t i_1 = *(arg1 + 0x54)
    int32_t ebx_2 = *ebp_1
    int32_t* eax_6 = var_18
    
    if (i_1 != ebx_2)
        int32_t* ecx_2 = eax_6
        
        if (eax_6 != var_14_1)
            while (*ecx_2 != i_1)
                ecx_2 = &ecx_2[1]
                
                if (ecx_2 == var_14_1)
                    goto label_4acc23
        
        if (eax_6 == var_14_1 || ecx_2 == var_14_1)
        label_4acc23:
            *(arg1 + 0x54) = ebx_2
    
    int32_t i_2 = *(arg1 + 0x64)
    
    if (i_2 != ebx_2)
        int32_t* ecx_3 = eax_6
        
        if (eax_6 != var_14_1)
            while (*ecx_3 != i_2)
                ecx_3 = &ecx_3[1]
                
                if (ecx_3 == var_14_1)
                    goto label_4acc44
        
        if (eax_6 == var_14_1 || ecx_3 == var_14_1)
        label_4acc44:
            *(arg1 + 0x64) = ebx_2
    
    int32_t* arg_8
    int32_t* edx_2 = arg_8
    
    while (eax_6 != var_14_1)
        int32_t ecx_4 = *eax_6
        eax_6 = &eax_6[1]
        *(ecx_4 + 0x48) += edx_2
        *(ecx_4 + 0x10) = 0
        *(ecx_4 + 0x34) += edx_2
    
    sub_4ac850(arg1, edx_2)
    void* esi_1 = data_75d4e0
    *(arg1 + 0xc) = 0
    int32_t var_34 = 0
    int32_t* var_30 = nullptr
    bool eax_7 = sub_46cb80(esi_1)
    
    if (eax_7 != 0)
        eax_7 = (***(esi_1 + 0xc))(&var_34, &var_30)
    
    eax_7 = eax_7 == 1
    int32_t* eax_10
    int32_t ecx_8
    
    if (eax_7 != 0)
        ecx_8 = var_34
        eax_10 = var_30
    else
        ecx_8 = *(arg1 + 0x10)
        eax_10 = *(arg1 + 0x14)
        var_34 = ecx_8
        var_30 = eax_10
    
    char var_39_1
    
    if (ecx_8 == *(arg1 + 0x10))
        var_39_1 = ecx_8.b - (*(arg1 + 0x10)).b
        *(arg1 + 0x14)
    
    if (ecx_8 != *(arg1 + 0x10) || eax_10 != *(arg1 + 0x14))
        var_39_1 = 1
    
    void* esi_2 = data_75d4e0
    int32_t var_1c
    int16_t eax_12
    
    if (sub_46cb80(esi_2).b != 0)
        eax_12 = (***(esi_2 + 0x1c))(eax_2)
        
        if (eax_12.b != 0)
            if ((0x8000 & GetKeyState(1)) != 0)
                eax_12.b = (***(esi_2 + 0xc))(&var_1c, &arg_8).b != 0
            else
                eax_12.b = 0
    else
        eax_12.b = 0
    
    void* esi_3 = data_75d4e0
    arg3.b = eax_12.b
    int16_t eax_17 = sub_46cb80(esi_3)
    int32_t var_20
    
    if (eax_17.b != 0)
        eax_17 = (***(esi_3 + 0x1c))(eax_2)
        
        if (eax_17.b != 0)
            if ((0x8000 & GetKeyState(2)) != 0)
                eax_17.b = (***(esi_3 + 0xc))(&var_20, &var_1c).b != 0
            else
                eax_17.b = 0
    
    void* esi_4 = data_75d4e0
    arg_8.b = eax_17.b
    int32_t var_24
    int16_t eax_22
    
    if (sub_46cb80(esi_4).b != 0 && (***(esi_4 + 0x1c))(eax_2).b != 0)
        if ((0x8000 & GetKeyState(4)) != 0)
            eax_22.b = (***(esi_4 + 0xc))(&var_24, &var_20).b != 0
        else
            eax_22.b = 0
    
    char ecx_17 = *(arg1 + 0x20)
    eax_22:1.b = arg3.b
    char var_3a_1
    
    if (ecx_17 == 0)
        var_3a_1 = 1
    
    if (ecx_17 != 0 || eax_22:1.b == 0)
        var_3a_1 = 0
    
    char edx_3 = *(arg1 + 0x21)
    int16_t ebx_3
    ebx_3:1.b = arg_8.b
    
    if (edx_3 == 0)
        arg_8.b = 1
    
    if (edx_3 != 0 || ebx_3:1.b == 0)
        arg_8.b = 0
    
    ebx_3.b = *(arg1 + 0x22)
    char var_35_1
    
    if (ebx_3.b == 0)
        var_35_1 = 1
    
    if (ebx_3.b != 0 || eax_22.b == 0)
        var_35_1 = 0
    
    char var_37_1
    
    if (ecx_17 != 0)
        var_37_1 = 1
    
    if (ecx_17 == 0 || eax_22:1.b != 0)
        var_37_1 = 0
    
    char var_36_1
    
    if (edx_3 != 0)
        var_36_1 = 1
    
    if (edx_3 == 0 || ebx_3:1.b != 0)
        var_36_1 = 0
    
    if (ebx_3.b == 0 || eax_22.b != 0)
        ebx_3.b = 0
    else
        ebx_3.b = 1
    
    void* esi_5 = data_75d4e0
    *(arg1 + 0x20) = eax_22:1.b
    *(arg1 + 0x21) = ebx_3:1.b
    *(arg1 + 0x22) = eax_22.b
    char eax_27
    int32_t* ecx_21
    int16_t edx_4
    eax_27, ecx_21, edx_4 = sub_46cb80(esi_5)
    
    if (eax_27 != 0)
        ecx_21 = *(esi_5 + 0x10)
    
    if (eax_27 == 0 || ecx_21 == 0)
        var_1c = 0
        var_24 = 0
    else
        int32_t eax_29 = (*(*ecx_21 + 4))(eax_2)
        int32_t* ecx_22 = *(esi_5 + 0x10)
        var_1c = eax_29
        int32_t eax_30
        eax_30, edx_4, ecx_21 = (*(*ecx_22 + 8))()
        var_24 = eax_30
        
        if (eax_29 != 0 || eax_30 != 0)
            ecx_21, edx_4 = sub_4857f0(arg1 + 0x70, eax_29, eax_30, 0)
        
        ebp_1 = arg1 + 8
    
    if (eax_7 != 0)
        if (var_39_1 != 0)
            ecx_21, edx_4 = sub_485750(arg1 + 0x70, var_34, var_30, 0)
        
        if (var_37_1 != 0)
            ecx_21, edx_4 = sub_485840(arg1 + 0x70, var_34, var_30, 1, 0)
        
        if (var_36_1 != 0)
            ecx_21, edx_4 = sub_485840(arg1 + 0x70, var_34, var_30, 2, 0)
        
        if (ebx_3.b != 0)
            ecx_21, edx_4 = sub_485840(arg1 + 0x70, var_34, var_30, 4, 0)
    
    edx_4:1.b = var_3a_1
    edx_4.b = arg_8.b
    
    if (edx_4:1.b != 0 || var_35_1 != edx_4:1.b || edx_4.b != 0)
        ebx_3.b = 1
    else
        ebx_3.b = 0
    
    int32_t* eax_31 = var_18
    void* esi_6 = var_14_1
    arg_8.b = ebx_3.b
    int32_t* var_28_1
    int32_t* eax_32
    
    if (eax_31 == esi_6)
    label_4acf5f:
        eax_32 = *ebp_1
        var_28_1 = eax_32
    else
        while (true)
            ecx_21 = *eax_31
            
            if (ecx_21[0x13].b != 0)
                eax_32 = ecx_21
                var_28_1 = ecx_21
                break
            
            eax_31 = &eax_31[1]
            
            if (eax_31 == esi_6)
                goto label_4acf5f
    
    int32_t* ebp_3 = eax_32
    int32_t* var_2c_1 = ebp_3
    
    if (edx_4.b != 0 && *(arg1 + 0x54) != *(arg1 + 8))
        eax_32, ecx_21, edx_4 = sub_4ac680(arg1)
        esi_6 = var_14_1
        edx_4:1.b = var_3a_1
    
    if (ebx_3:1.b == 0)
        *(arg1 + 0x60) = ebx_3:1.b
    
    eax_32.b = *(arg1 + 0x60)
    int32_t* esi_7
    
    if (eax_32.b != 0)
        esi_7 = var_28_1
    else if (eax_7 != eax_32.b)
        int32_t* ebx_4
        
        if (ebx_3.b != 0 || edx_4:1.b != 0)
            ebx_4 = *(arg1 + 8)
            var_2c_1 = ebx_4
            *(arg1 + 0x54) = ebx_4
            
            if (esi_6 != var_18)
                while (true)
                    int32_t* ebp_4 = *(esi_6 - 4)
                    esi_6 -= 4
                    void* ebx_5 = ebp_4[1]
                    eax_32 = *(ebx_5 + 0x40)
                    
                    if (eax_32[0x11f].b != 0 || *(eax_32 + 0x47d) == 0)
                        int32_t* eax_33 = var_30
                        void* ecx_30 = *(ebx_5 + 0x40)
                        var_20 = var_34
                        eax_32, ecx_21 = sub_4a26a0(ecx_30, arg2)
                        
                        if (eax_32.b != 0)
                            eax_32, ecx_21 = sub_4a2720(*(ebx_5 + 0x40))
                            
                            if (not(_mm_cvtepi32_ps(zx.o(eax_32)) f<= 0))
                                eax_32, ecx_21 = (*(*ebp_4[1] + 0x50))(var_20, eax_33, 1)
                                
                                if (eax_32.b != 0)
                                    if (var_3a_1 != 0)
                                        *(arg1 + 0x54) = ebp_4
                                        void* eax_45 = *(ebp_4[1] + 0x40)
                                        *(arg1 + 0x58) =
                                            _mm_cvtepi32_ps(zx.o(*(eax_45 + 0x17c))) f+
                                            *(eax_45 + 0x7c)
                                        void* eax_47 = *(ebp_4[1] + 0x40)
                                        float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(eax_47 + 0x180))) f+
                                            *(eax_47 + 0x80)
                                        *(arg1 + 0x18) = var_34
                                        *(arg1 + 0x1c) = var_30
                                        *(arg1 + 0x5c) = xmm0_8
                                    
                                    ebx_4 = var_2c_1
                                    
                                    if (arg_8.b != 0)
                                        ebx_4 = ebp_4
                                    
                                    var_2c_1 = ebx_4
                                    break
                    
                    if (esi_6 == var_18)
                        ebx_4 = var_2c_1
                        break
                
                esi_6 = var_14_1
            
            if (var_28_1 != ebx_4)
                if (var_28_1[0x13].b != 0)
                    int32_t* var_54_10 = ecx_21
                    eax_32, ecx_21 = sub_485ca0(&var_28_1[0x19])
                    var_28_1[0x13].b = 0
                    esi_6 = var_14_1
                
                if (ebx_4[0x13].b == 0)
                    int32_t* var_54_11 = ecx_21
                    sub_485c60(&ebx_4[0x19])
                    ebx_4[0x13].b = 1
                    esi_6 = var_14_1
        else
            eax_32.b = arg3.b
            
            if (eax_32.b != 0)
                ebx_4 = var_2c_1
            else
                sub_4ac7a0(arg1, var_34, var_30)
                ebx_4 = var_2c_1
                esi_6 = var_14_1
        
        void* ecx_35 = *(arg1 + 0x54)
        
        if (ecx_35 != *(arg1 + 8) && ecx_35 == ebx_4 && var_39_1 != 0
                && *(*(*(ecx_35 + 4) + 0x40) + 0x47e) != 0)
            int32_t eax_41 = var_34 - *(arg1 + 0x18)
            float xmm2_3 = _mm_cvtepi32_ps(zx.o(var_30 - *(arg1 + 0x1c))) f+ *(arg1 + 0x5c)
            sub_4e6d70(ecx_35, _mm_cvtepi32_ps(zx.o(eax_41)) f+ *(arg1 + 0x58), xmm2_3)
            void* ecx_37 =
                sub_4e6ef0(*(arg1 + 0x54), *(arg1 + 0x18), *(arg1 + 0x1c), var_34, var_30)
            esi_6 = var_14_1
            *(arg1 + 0x64) = *(arg1 + 8)
            eax_32.b = 0
            arg3.b = 0
            
            if (esi_6 != var_18)
                do
                    void* ebx_6 = *(esi_6 - 4)
                    esi_6 -= 4
                    
                    if (ebx_6 != *(arg1 + 0x54))
                        char eax_42
                        
                        if (eax_32.b == 0)
                            void* var_54_13 = ecx_37
                            eax_42 = sub_4e6d20(ebx_6, arg2, var_34, var_30)
                        
                        if (eax_32.b != 0 || eax_42 == 0)
                            eax_32, ecx_37 = sub_4e6fe0(ebx_6, *(arg1 + 0x54))
                            eax_32.b = arg3.b
                        else
                            ecx_37 = ebx_6
                            sub_4e6f40(ecx_37, *(arg1 + 0x54), var_34, var_30)
                            *(arg1 + 0x64) = ebx_6
                            
                            if (*(*(*(ebx_6 + 4) + 0x40) + 0x47d) != 0)
                                eax_32.b = arg3.b
                            else
                                eax_32.b = 1
                                arg3.b = 1
                while (esi_6 != var_18)
                
                esi_6 = var_14_1
        
        eax_32.b = 0
        arg3.b = 0
        
        while (esi_6 != var_18)
            void* ebx_7 = *(esi_6 - 4)
            esi_6 -= 4
            
            if (eax_32.b != 0)
                goto label_4ad2a2
            
            void* ebp_7 = *(ebx_7 + 4)
            arg_8 = var_30
            void* ecx_40 = *(ebp_7 + 0x40)
            var_20 = var_34
            
            if (sub_4a26a0(ecx_40, arg2).b == 0)
            label_4ad29e:
                eax_32.b = arg3.b
            label_4ad2a2:
                
                if (*(ebx_7 + 0x61) == 0)
                    if (*(ebx_7 + 0x44) != 0)
                        void* ebp_8 = data_75d4e0
                        var_20 = 0
                        arg_8 = nullptr
                        char eax_54
                        int32_t ecx_45
                        eax_54, ecx_45 = sub_46cb80(ebp_8)
                        
                        if (eax_54 != 0)
                            ecx_45 = (***(ebp_8 + 0xc))(&var_20, &arg_8)
                        
                        int32_t var_54_18 = ecx_45
                        sub_4857a0(ebx_7 + 0x64, var_20, arg_8)
                    
                    (*(**(ebx_7 + 4) + 0x38))(1)
                    *(ebx_7 + 0x44) = 0
                    eax_32.b = arg3.b
            else
                if (_mm_cvtepi32_ps(zx.o(sub_4a2720(*(ebp_7 + 0x40)))) f<= 0)
                    goto label_4ad29e
                
                if ((*(**(ebx_7 + 4) + 0x50))(var_20, arg_8, 1).b == 0)
                    goto label_4ad29e
                
                sub_4e6db0(ebx_7)
                
                if (*(*(*(ebx_7 + 4) + 0x40) + 0x47d) != 0)
                    eax_32.b = arg3.b
                else
                    eax_32.b = 1
                    arg3.b = 1
        
        ebp_3 = var_2c_1
        esi_7 = var_28_1
    else if (eax_32.b != 0)
        esi_7 = var_28_1
    else
        void* ecx_55 = *(arg1 + 0x54)
        esi_7 = var_28_1
        
        if (ecx_55 == esi_7)
            sub_4e6e80(ecx_55)
    
    sub_4e7030(ebp_3)
    int32_t ecx_50 = var_1c
    int32_t eax_57 = var_24
    
    if (ecx_50 != 0 || eax_57 != 0)
        sub_4857f0(&ebp_3[0x19], ecx_50, eax_57, 0)
    
    if (esi_7 != ebp_3)
        sub_4e7210(esi_7)
    
    ecx_50.b = eax_7
    
    if (ecx_50.b != 0 && *(arg1 + 0x23) != 0)
        *(arg1 + 0x10) = var_34
        *(arg1 + 0x14) = var_30
    
    int32_t* esi_8 = var_18
    int32_t* eax_60 = esi_8
    *(arg1 + 0x23) = ecx_50.b
    int32_t eax_62
    
    if (esi_8 == var_14_1)
    label_4ad37f:
        eax_62 = *(arg1 + 8)
    else
        while (true)
            int32_t ecx_53 = *eax_60
            
            if (*(ecx_53 + 0x10) != 0)
                eax_62 = ecx_53
                break
            
            eax_60 = &eax_60[1]
            
            if (eax_60 == var_14_1)
                goto label_4ad37f
    
    result = *(eax_62 + 4)
    
    if (result[0xc].b != 0)
        void* eax_61 = result[0x10]
        void* ecx_54 = *(eax_61 + 0x64)
        
        if (ecx_54 != 0)
            result = sub_4a44a0(ecx_54)
        else
            result = *(eax_61 + 0x2c)
        
        *(arg1 + 0xc) = result
    
    if (esi_8 != 0)
        result = j__free(esi_8)

fsbase->NtTib.ExceptionList = ExceptionList
return result
