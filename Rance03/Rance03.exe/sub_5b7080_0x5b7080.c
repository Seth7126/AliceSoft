// 函数: sub_5b7080
// 地址: 0x5b7080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c90c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg3 = 0
arg1[0x21] = 0
sub_5b7010(arg1)
int32_t* arg_4
BOOL result = sub_5b7320(arg1, arg_4, arg2)

if (result.b == 0)
    result.b = 0
else
    if (arg1[0x1e] != 0 && arg1[0x17] != 0)
        result = sub_40d280(&arg1[0x1a], &arg1[0x13])
    
    if (arg1[0x1e] == 0 || arg1[0x17] == 0 || result.b == 0)
        void* arg_14
        void* ecx_2 = arg_14
        int32_t ebx_1 = *(ecx_2 + 0x14)
        
        if (ebx_1 s< 0 || ebx_1 u>= (*(ecx_2 + 0xc) - *(ecx_2 + 8)) s>> 2)
            result.b = 0
        else
            void* ebx_2 = *(*(ecx_2 + 8) + (ebx_1 << 2))
            
            if (ebx_2 == 0)
                result.b = 0
            else
                BOOL var_28_1 = &arg4[0x24]
                
                if (arg4 == 0xffffff70)
                    result.b = 0
                else
                    result = arg1[1]
                    
                    if (result == arg1[2])
                        result.b = 0
                    else
                        void** var_18
                        sub_42f330(&var_18)
                        int32_t var_4 = 0
                        int32_t* i = *(result + 4)
                        
                        while (i != *(result + 8))
                            void* eax_11 = sub_427f90(&var_18, (*i << 5) + 8 + arg1[4])
                            int32_t ecx_5 = *i
                            i = &i[1]
                            *eax_11 = ecx_5
                        
                        BOOL ebp_2 = var_28_1
                        int32_t esi_1 = 0
                        int32_t var_2c_1 = 0
                        int32_t eax_12
                        int32_t edx_2
                        edx_2:eax_12 = muls.dp.d(0x66666667, *(ebp_2 + 4) - *ebp_2)
                        int32_t edx_3 = edx_2 s>> 4
                        
                        if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
                        label_5b72cc:
                            sub_5b7010(arg1)
                            ebx_2.b = 1
                            *arg3 = arg1[0x21]
                        else
                            void** ecx_8 = nullptr
                            arg2 = nullptr
                            
                            while (true)
                                int32_t* ebp_4 = *ebp_2 + ecx_8
                                uint32_t eax_16 = ebp_4[6]
                                
                                if (esi_1 u< *(ebx_2 + 0xc) u>> 2)
                                    int32_t eax_19
                                    
                                    if (*(ebx_2 + 0xc) != 0)
                                        eax_19 = *(ebx_2 + 8)
                                    else
                                        eax_19 = 0
                                    
                                    int32_t* eax_20 = *(eax_19 + (esi_1 << 2))
                                    arg_4 = eax_20
                                    void** eax_21 = sub_417ed0(&var_18, ebp_4)
                                    void*** eax_24
                                    void** var_20
                                    
                                    if (eax_21 == var_18)
                                        var_20 = var_18
                                        eax_24 = &var_20
                                    else if (sub_40c3a0(ebp_4, &eax_21[4]) != 0)
                                        var_20 = var_18
                                        eax_24 = &var_20
                                    else
                                        void** var_24 = eax_21
                                        eax_24 = &var_24
                                    void** eax_26 = *eax_24
                                    int32_t* ecx_14
                                    
                                    if (eax_26 == var_18)
                                    label_5b7272:
                                        ecx_14 = eax_20
                                    label_5b7280:
                                        
                                        if (var_2c_1 u< *(ebx_2 + 0xc) u>> 2)
                                            int32_t eax_34
                                            
                                            if (*(ebx_2 + 0xc) != 0)
                                                eax_34 = *(ebx_2 + 8)
                                            else
                                                eax_34 = 0
                                            
                                            ebp_2 = var_28_1
                                            arg2 = &arg2[0xa]
                                            *(eax_34 + (var_2c_1 << 2)) = ecx_14
                                            esi_1 = var_2c_1 + 1
                                            int32_t eax_35
                                            int32_t edx_4
                                            edx_4:eax_35 =
                                                muls.dp.d(0x66666667, *(ebp_2 + 4) - *ebp_2)
                                            var_2c_1 = esi_1
                                            int32_t edx_5 = edx_4 s>> 4
                                            
                                            if (esi_1 s>= (edx_5 u>> 0x1f) + edx_5)
                                                goto label_5b72cc
                                            
                                            ecx_8 = arg2
                                            continue
                                    else
                                        int32_t ecx_10 = eax_26[0xa]
                                        
                                        if (ecx_10 s>= 0 && ecx_10 s< (arg1[5] - arg1[4]) s>> 5)
                                            int32_t* ecx_12 = (ecx_10 << 5) + arg1[4]
                                            
                                            if (*ecx_12 != eax_16)
                                                goto label_5b7272
                                            
                                            void* var_44_4 = arg_14
                                            
                                            if (sub_5b7e60(arg1, eax_16, &arg_4, ecx_12[1], ecx_12)
                                                    != 0)
                                                arg1[0x21] += 1
                                                ecx_14 = arg_4
                                                goto label_5b7280
                                
                                ebx_2.b = 0
                                break
                        
                        int32_t** ecx_19 = var_18
                        sub_417e10(&var_18, &arg_14, *ecx_19, ecx_19)
                        j__free(var_18)
                        result.b = ebx_2.b
    else
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
