// 函数: sub_4cd630
// 地址: 0x4cd630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733c61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** result_1 = arg3
int32_t* result_5 = arg5
void** result

if (arg5 == 0)
    result.b = 0
else if (sub_4cdcb0(arg1, arg3).b != 0)
    result.b = 0
else
    void** var_58_2 = arg3
    void** var_60
    void* var_2c
    int32_t* eax_4 = sub_4ce600(&var_2c, var_60)
    void** ebx_1 = *(arg1 + 0x54)
    uint32_t var_40 = eax_4
    void** esi_1 = sub_432330(arg1 + 0x54, eax_4)
    char eax_7
    
    if (esi_1 != ebx_1)
        eax_7 = sub_412ca0(var_40, &esi_1[4])
    
    if (esi_1 == ebx_1 || eax_7 != 0)
        esi_1 = ebx_1
    
    void** var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    if (esi_1 != ebx_1)
        result.b = 0
    else
        int32_t* result_3 = result_1
        
        if (sub_4cddc0(arg1, result_3).b != 0)
            result.b = 0
        else if (sub_4cde40(arg1, result_3).b != 0)
            result.b = 0
        else if (sub_4cdec0(arg1, result_3).b != 0)
            result.b = 0
        else
            int32_t ecx_4 = *arg4
            int32_t esi_3 = arg4[1] - ecx_4
            
            if (esi_3 s<= 0)
                result.b = 0
            else
                struct fileimage::CFileImageAnalyser::VTable* const var_20
                
                if (arg2 == 2)
                    int32_t eax_9 = 0
                    bool cond:0_1 = *(arg1 + 0x30) s< 1
                    var_40 = 0
                    
                    if (cond:0_1)
                        goto label_4cd776
                    
                    int32_t var_1c_1 = ecx_4
                    int32_t var_18_1 = ecx_4 + esi_3
                    var_20 = &fileimage::CFileImageAnalyser::`vftable'
                    
                    if (sub_61ec90(&var_20, &var_40).b == 0)
                        result.b = 0
                    else
                        eax_9 = 4
                        esi_3 -= 4
                    label_4cd776:
                        result = (*(*result_5 + 8))(eax_9 + ecx_4, esi_3)
                        result_1 = result
                        
                        if (result == 0)
                            result.b = 0
                        else
                            (**result)(eax_2)
                            void** result_8
                            int32_t* ecx_9
                            result_8, ecx_9 = sub_432330(arg1 + 0x44, result_3)
                            void** result_7 = result_8
                            char eax_14
                            
                            if (result_7 != *(arg1 + 0x44))
                                eax_14, ecx_9 = sub_412ca0(result_3, &result_7[4])
                            
                            if (result_7 == *(arg1 + 0x44) || eax_14 != 0)
                                int32_t* var_58_12 = ecx_9
                                result_5 = result_3
                                int32_t** var_5c_5 = &result_5
                                int32_t* eax_15 = sub_4d01b0(ecx_9)
                                sub_458790(arg1 + 0x44, &result_5, result_7, &eax_15[4], eax_15)
                                result_7 = result_5
                            
                            result_7[0xa] = result_1
                            void** var_34
                            sub_4cfa60(arg1 + 0x4c, &var_34, &result_1)
                            var_34[5] = var_40
                            result.b = 1
                else if (arg2 == 4)
                    if (sub_4cdbd0(arg1, result_3, arg4).b != 0)
                        result.b = 1
                    else
                        result.b = 0
                else
                    void** result_2
                    
                    if (arg2 == 5)
                        result = sub_4cda20(arg1, arg4)
                        result_2 = result
                        
                        if (result == 0)
                            result.b = 0
                        else
                            void** eax_18
                            int32_t* ecx_17
                            eax_18, ecx_17 = sub_432330(arg1 + 0x5c, result_3)
                            char eax_20
                            
                            if (eax_18 != *(arg1 + 0x5c))
                                eax_20, ecx_17 = sub_412ca0(result_3, &eax_18[4])
                            
                            if (eax_18 != *(arg1 + 0x5c) && eax_20 == 0)
                                eax_18[0xa] = result_2
                                result.b = 1
                            else
                                int32_t* var_58_19 = ecx_17
                                result_5 = result_3
                                int32_t** var_5c_10 = &result_5
                                int32_t* eax_21 = sub_4d01b0(ecx_17)
                                sub_458790(arg1 + 0x5c, &result_5, eax_18, &eax_21[4], eax_21)
                            label_4cd9ea:
                                result_5[0xa] = result_2
                                result.b = 1
                    else
                        void** result_4
                        
                        if (arg2 == 6)
                            var_20 = &fileimage::CFileImageAnalyser::`vftable'
                            int32_t var_1c_2 = ecx_4
                            int32_t var_18_2 = ecx_4 + esi_3
                            int32_t var_8_1 = 0
                            result_4 = sub_6e810c(0x28)
                            result_2 = result_4
                            var_8_1.b = 1
                            result_4[1] = 1
                            *result_4 = &partsengine::CFlatStopMotionData::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
                            result_4[7] = 0xf
                            result_4[6] = 0
                            void* eax_25
                            
                            if (result_4[7] u< 0x10)
                                eax_25 = &result_4[2]
                            else
                                eax_25 = result_4[2]
                            
                            *eax_25 = 0
                            sub_403490(&result_4[2], 0x75d06e, nullptr)
                            result_4[8] = 1
                            struct fileimage::CFileImageAnalyser::VTable* const* var_58_21 = &var_20
                            result_4[9] = 0
                            var_8_1.b = 0
                            
                            if (sub_4d9f80(result_4) != 0)
                                void** eax_28
                                int32_t* ecx_24
                                eax_28, ecx_24 = sub_432330(arg1 + 0x64, result_3)
                                char eax_30
                                
                                if (eax_28 != *(arg1 + 0x64))
                                    eax_30, ecx_24 = sub_412ca0(result_3, &eax_28[4])
                                
                                if (eax_28 == *(arg1 + 0x64) || eax_30 != 0)
                                    int32_t* var_58_24 = ecx_24
                                    result_5 = result_3
                                    int32_t** var_5c_13 = &result_5
                                    int32_t* eax_31 = sub_4d01b0(ecx_24)
                                    sub_458790(arg1 + 0x64, &result_5, eax_28, &eax_31[4], eax_31)
                                    goto label_4cd9ea
                                
                                eax_28[0xa] = result_2
                                result.b = 1
                            else
                                (*(*result_4 + 4))(eax_2)
                                result.b = 0
                        else if (arg2 != 7)
                            result.b = 1
                        else
                            var_20 = &fileimage::CFileImageAnalyser::`vftable'
                            int32_t var_1c_3 = ecx_4
                            int32_t var_18_3 = ecx_4 + esi_3
                            int32_t var_8_2 = 2
                            struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatEmitterData::VTable
                                ** result_6 = sub_6e810c(0x150)
                            result_5 = result_6
                            var_8_2.b = 3
                            result_4 = sub_4d0ae0(result_6)
                            var_8_2.b = 2
                            result_2 = result_4
                            
                            if (sub_4d1160(result_4, *(arg1 + 0x30), &var_20) == 0)
                                (*(*result_4 + 4))(eax_2)
                                result.b = 0
                            else
                                void** eax_36
                                int32_t* ecx_30
                                eax_36, ecx_30 = sub_432330(arg1 + 0x6c, result_3)
                                char eax_38
                                
                                if (eax_36 != *(arg1 + 0x6c))
                                    eax_38, ecx_30 = sub_412ca0(result_3, &eax_36[4])
                                
                                if (eax_36 == *(arg1 + 0x6c) || eax_38 != 0)
                                    int32_t* var_58_29 = ecx_30
                                    result_5 = result_3
                                    int32_t** var_5c_17 = &result_5
                                    int32_t* eax_39 = sub_4d01b0(ecx_30)
                                    sub_458790(arg1 + 0x6c, &result_5, eax_36, &eax_39[4], eax_39)
                                    goto label_4cd9ea
                                
                                eax_36[0xa] = result_2
                                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
