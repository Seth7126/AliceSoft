// 函数: sub_486450
// 地址: 0x486450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baa78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 == 0 || arg3 s<= 0)
    result.b = 0
else
    sub_486110(arg1)
    result = arg2 + arg3
    struct fileimage::CFileImageAnalyser::VTable* const var_44 =
        &fileimage::CFileImageAnalyser::`vftable'
    struct _EXCEPTION_REGISTRATION_RECORD** var_40_1 = arg2
    int32_t var_4 = 0
    
    if (arg2 u>= result)
    label_48673b:
        
        if (*(arg1 + 0x30) s< 7)
            void* ecx_14 = *(arg1 + 0x3c)
            
            if (ecx_14 != 0)
                *(arg1 + 0x34) = sub_48fe10(ecx_14, arg1)
        
        result.b = 1
    else
        while (true)
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            char var_28 = 0
            var_4.b = 1
            sub_402110(&var_28, 0x6da1d2, nullptr)
            
            if (sub_468c20(&var_44, &var_28, 4).b != 0)
                struct _EXCEPTION_REGISTRATION_RECORD** ecx_2 = var_40_1
                
                if (&ecx_2[1] u<= result)
                    var_40_1 = &ecx_2[1]
                    void* esi_7 = ((zx.d(*(ecx_2 + 3)) << 8 | zx.d(*(ecx_2 + 2))) << 8
                        | zx.d(*(ecx_2 + 1))) << 8 | zx.d(*ecx_2)
                    void* ebp_1 = &ecx_2[1] + esi_7
                    
                    if (ebp_1 u<= result)
                        char* ecx_3 = &var_28
                        int32_t eax_7 = 4
                        
                        if (var_14_1 u>= 0x10)
                            ecx_3 = var_28.d
                        
                        if (var_18_1 u< 4)
                            eax_7 = var_18_1
                        
                        int32_t eax_8 = sub_405190(eax_7, "FLAT", ecx_3, eax_7)
                        bool cond:1_1 = eax_8 == 0
                        
                        if (eax_8 == 0)
                            if (var_18_1 u>= 4)
                                eax_8.b = var_18_1 != 4
                            else
                                eax_8 = 0xffffffff
                            
                            cond:1_1 = eax_8 == 0
                        
                        eax_8.b = cond:1_1
                        
                        if (eax_8.b == 0 || esi_7 != 0x20)
                            char* ecx_5 = &var_28
                            int32_t eax_9 = 4
                            
                            if (var_14_1 u>= 0x10)
                                ecx_5 = var_28.d
                            
                            if (var_18_1 u< 4)
                                eax_9 = var_18_1
                            
                            int32_t eax_10 = sub_405190(eax_9, "FLAT", ecx_5, eax_9)
                            bool cond:3_1 = eax_10 == 0
                            
                            if (eax_10 == 0)
                                if (var_18_1 u>= 4)
                                    eax_10.b = var_18_1 != 4
                                else
                                    eax_10 = 0xffffffff
                                
                                cond:3_1 = eax_10 == 0
                            
                            eax_10.b = cond:3_1
                            
                            if (eax_10.b == 0 || esi_7 != 0x40)
                                char* ecx_7 = &var_28
                                int32_t eax_11 = 4
                                
                                if (var_14_1 u>= 0x10)
                                    ecx_7 = var_28.d
                                
                                if (var_18_1 u< 4)
                                    eax_11 = var_18_1
                                
                                int32_t eax_12 = sub_405190(eax_11, "MTLC", ecx_7, eax_11)
                                bool cond:5_1 = eax_12 == 0
                                
                                if (eax_12 == 0)
                                    if (var_18_1 u>= 4)
                                        eax_12.b = var_18_1 != 4
                                    else
                                        eax_12 = 0xffffffff
                                    
                                    cond:5_1 = eax_12 == 0
                                
                                eax_12.b = cond:5_1
                                
                                if (eax_12.b == 0)
                                    if (sub_40c250(&var_28, "LIBL") == 0)
                                        var_40_1 = ebp_1
                                        
                                        if (sub_40c250(&var_28, "ELNA") != 0)
                                            *(arg1 + 0x38) = 1
                                        
                                        goto label_486715
                                    
                                    if (sub_486a10(arg1, &var_44).b != 0)
                                        goto label_486715
                                else
                                    int32_t* var_38
                                    sub_448e90(&var_38, esi_7)
                                    var_4.b = 2
                                    int32_t* esi_8 = var_38
                                    sub_69d850(esi_8, &ecx_2[1], esi_7, eax_4)
                                    var_40_1 = ebp_1
                                    int32_t* eax_13 = sub_486f90(arg1, &var_38)
                                    *(arg1 + 0x3c) = eax_13
                                    char eax_14
                                    
                                    if (eax_13 != 0)
                                        eax_14 = sub_48fd40(eax_13)
                                    
                                    if (eax_13 != 0 && eax_14 != 0)
                                        if (esi_8 != 0)
                                            j__free(esi_8)
                                            var_38 = nullptr
                                            int32_t var_34_1 = 0
                                            int32_t var_30_1 = 0
                                        
                                        goto label_486715
                                    
                                    sub_403510(&var_38)
                            else if (sub_4868c0(arg1, &var_44).b != 0)
                                goto label_486715
                        else if (sub_4867a0(arg1, &var_44).b != 0)
                        label_486715:
                            var_4.b = 0
                            
                            if (var_14_1 u>= 0x10)
                                j__free(var_28.d)
                            
                            if (var_40_1 u>= result)
                                goto label_48673b
                            
                            continue
            
            if (var_14_1 u< 0x10)
                break
            
            j__free(var_28.d)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
