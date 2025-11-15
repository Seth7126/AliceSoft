// 函数: ?FindHandler@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@EH1@Z
// 地址: 0x6ff563
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ebx = arg2
int32_t* edi = arg5
char var_2c = 0
char var_5 = 0
int32_t eax

if (edi[1] s> 0x80)
    eax = ebx[2]
else
    eax = sx.d(ebx[2].b)

int32_t var_c = eax

if (eax s>= 0xffffffff && eax s< edi[1])
    int32_t* esi_1 = arg1
    void* result
    int32_t ecx_3
    int32_t edx
    
    if (*esi_1 != 0xe06d7363)
        ecx_3 = arg3
    label_6ff852:
        
        if (edi[3] u<= 0)
            goto label_6ff874
        
        if (arg6 == 0)
            FindHandlerForForeignException(eax, edx, ecx_3, esi_1, ebx, ecx_3, arg4, edi, eax, 
                arg7, arg8)
        label_6ff874:
            result = sub_702f40()
            
            if (*(result + 0x1c) == 0)
                return result
    else
        int32_t var_10_1
        
        if (esi_1[4] != 3)
        label_6ff688:
            ecx_3 = arg3
            var_10_1 = ecx_3
        label_6ff696:
            
            if (*esi_1 != 0xe06d7363 || esi_1[4] != 3 ||
                    (esi_1[5] != 0x19930520 && esi_1[5] != 0x19930521 && esi_1[5] != 0x19930522))
                goto label_6ff852
            
            if (edi[3] u> 0)
                int32_t var_30
                int32_t var_1c
                void* eax_10 = _GetRangeOfTrysToCheck(edi, arg7, eax, &var_1c, &var_30)
                int32_t edx_1 = var_1c
                
                if (edx_1 u< var_30)
                    int32_t* ecx_4 = eax_10 + 0x10
                    int32_t eax_11 = var_c
                    int32_t* var_24_2 = ecx_4
                    
                    do
                        edi = arg5
                        
                        if (ecx_4[-4] s<= eax_11 && eax_11 s<= ecx_4[-3])
                            char* var_18_1 = *ecx_4
                            int32_t ebx_2 = ecx_4[-1]
                            int32_t var_20_1 = ebx_2
                            ebx = arg2
                            
                            if (ebx_2 s> 0)
                                char* ecx_5 = var_18_1
                                int32_t* eax_13 = *(esi_1[7] + 0xc)
                                int32_t i_2 = *eax_13
                                int32_t eax_15 = var_20_1
                                int32_t i_3 = i_2
                                
                                while (true)
                                    void* var_14_1 = &eax_13[1]
                                    edi = arg5
                                    int32_t i_1 = i_2
                                    
                                    if (i_2 s> 0)
                                        int32_t i
                                        
                                        do
                                            if (TypeMatchHelper<class __FrameHandler3>(ecx_5, 
                                                    *var_14_1, esi_1[7]) != 0)
                                                int32_t var_58_5 = var_2c.d
                                                var_5 = 1
                                                CatchIt(esi_1, ebx, var_10_1, arg4, edi, var_18_1, 
                                                    *var_14_1, &ecx_4[-4], arg7, arg8)
                                                goto label_6ff7bd
                                            
                                            var_14_1 += 4
                                            i = i_1 - 1
                                            ecx_5 = var_18_1
                                            i_1 = i
                                        while (i s> 0)
                                        eax_15 = var_20_1
                                    
                                    eax_15 -= 1
                                    ecx_5 = &ecx_5[0x10]
                                    var_20_1 = eax_15
                                    var_18_1 = ecx_5
                                    
                                    if (eax_15 s<= 0)
                                        break
                                    
                                    i_2 = i_3
                                
                            label_6ff7bd:
                                edx_1 = var_1c
                                ecx_4 = var_24_2
                                eax_11 = var_c
                        
                        edx_1 += 1
                        ecx_4 = &ecx_4[5]
                        var_1c = edx_1
                        var_24_2 = ecx_4
                    while (edx_1 u< var_30)
            
            if (arg6 != 0)
                sub_6ff214(esi_1)
            
            if (var_5 != 0 || (*edi & 0x1fffffff) u< 0x19930521
                    || (edi[7] == 0 && ((edi[8].b & 4) == 0 || arg7 != 0)))
                goto label_6ff874
            
            if ((edi[8].b & 4) == 0)
                if (sub_6ff9e6(esi_1, edi[7]) != 0)
                    goto label_6ff874
                
                sub_702f40()
                sub_702f40()
                *(sub_702f40() + 0x10) = esi_1
                *(sub_702f40() + 0x14) = var_10_1
                void** var_5c_7
                
                var_5c_7 = arg8 != 0 ? arg8 : ebx
                
                sub_700470(var_5c_7, esi_1)
                int32_t var_58_10 = 0xffffffff
                ___FrameUnwindToState(ebx, arg4, edi)
                int32_t var_58_11 = edi[7]
                CallUnexpected()
                noreturn
        else
            if (esi_1[5] == 0x19930520 || esi_1[5] == 0x19930521)
                if (esi_1[7] != 0)
                    goto label_6ff688
            else if (esi_1[5] != 0x19930522 || esi_1[7] != 0)
                goto label_6ff688
            
            result = sub_702f40()
            
            if (*(result + 0x10) == 0)
                return result
            
            esi_1 = *(sub_702f40() + 0x10)
            var_2c = 1
            var_10_1 = *(sub_702f40() + 0x14)
            
            if (esi_1 != 0)
                if (*esi_1 != 0xe06d7363 || esi_1[4] != 3)
                label_6ff644:
                    void* eax_4
                    eax_4, edx = sub_702f40()
                    int32_t* eax_6
                    char eax_8
                    
                    if (*(eax_4 + 0x1c) != 0)
                        eax_6 = *(sub_702f40() + 0x1c)
                        *(sub_702f40() + 0x1c) = 0
                        eax_8, edx = sub_6ff9e6(esi_1, eax_6)
                    
                    if (*(eax_4 + 0x1c) == 0 || eax_8 != 0)
                        ecx_3 = var_10_1
                        eax = var_c
                        goto label_6ff696
                    
                    if (sub_6ffa82(eax_6) != 0)
                        int32_t var_58_9 = 1
                        sub_6ff214(esi_1)
                        void var_48
                        std::bad_exception::bad_exception(&var_48)
                        sub_70021b(&var_48, 0x7dbcb0)
                        noreturn
                else if (esi_1[5] == 0x19930520 || esi_1[5] == 0x19930521)
                    if (esi_1[7] != 0)
                        goto label_6ff644
                else if (esi_1[5] != 0x19930522 || esi_1[7] != 0)
                    goto label_6ff644

_terminate()
noreturn
