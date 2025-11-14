// 函数: sub_42e9d0
// 地址: 0x42e9d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result =
    (*(**(arg1 + 8) + 0x2c))(__security_cookie ^ &__saved_edi)
int32_t edx = 0
struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
int32_t var_3c = 0

if (result s<= 0)
label_42ecca:
    result.b = 1
else
    while (true)
        struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = (*(**(arg1 + 8) + 0x30))(edx)
        
        if (ebx_1 != 0xffffffff)
            if (ebx_1 s< 0)
                result.b = 0
                break
            
            struct _EXCEPTION_REGISTRATION_RECORD*** ebp_1 = arg2
            result = *ebp_1
            
            if (ebx_1 s>= (ebp_1[1] - result) s>> 2)
                result.b = 0
                break
            
            result[ebx_1] = &result[ebx_1]->Next + 1
            
            if ((*ebp_1)[ebx_1] s<= 1)
                int32_t edx_1
                result, edx_1 = (*(**(arg1 + 8) + 0x14))(ebx_1)
                
                if (result u> 5)
                    result.b = 0
                    break
                
                char eax_10
                int32_t* ecx_10
                
                switch (result)
                    case nullptr
                        int32_t eax_7 = (*(**(arg1 + 0xc) + 0x14))()
                        int32_t var_30
                        sub_42f420(&var_30, eax_7)
                        int32_t edi_1 = 0
                        int32_t var_4 = 0
                        
                        if (eax_7 s> 0)
                            int32_t ebx_2 = var_30
                            
                            do
                                *(ebx_2 + (edi_1 << 2)) = (*(**(arg1 + 0xc) + 0x18))(edi_1)
                                edi_1 += 1
                            while (edi_1 s< eax_7)
                            
                            ebp_1 = arg2
                        
                        eax_10 = sub_42e8b0(arg1, ebx_1, ebp_1, &var_30)
                        ecx_10 = &var_30
                    label_42eca6:
                        
                        if (eax_10 == 0)
                            sub_403510(ecx_10)
                            result.b = 0
                            break
                        
                        int32_t var_4_3 = 0xffffffff
                        sub_403510(ecx_10)
                    case 1
                        int32_t eax_11 = sub_42ced0(result, edx_1, arg1, ebx_1)
                        int32_t var_24
                        sub_42f420(&var_24, eax_11)
                        int32_t edi_2 = 0
                        int32_t var_4_1 = 1
                        
                        if (eax_11 s> 0)
                            do
                                *(var_24 + (edi_2 << 2)) = (*(**(arg1 + 0xc) + 0xc))(
                                    (*(**(arg1 + 8) + 0x18))(ebx_1), edi_2)
                                edi_2 += 1
                            while (edi_2 s< eax_11)
                            
                            ebp_1 = arg2
                        
                        eax_10 = sub_42e8b0(arg1, ebx_1, ebp_1, &var_24)
                        ecx_10 = &var_24
                        goto label_42eca6
                    case 3
                        struct _EXCEPTION_REGISTRATION_RECORD** ebp_4 = (*(**(arg1 + 8) + 4))(ebx_1)
                        
                        if (ebp_4 != 0 && (*ebp_4)->__offset(0x14).d() s> 0)
                            result = (*ebp_4)->__offset(0x18).d()
                            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                            
                            if (result == 0)
                                result.b = 0
                                break
                            
                            int32_t eax_17 = (*(**(arg1 + 8) + 0x24))(ebx_1)
                            
                            if (eax_17 != 0xffffffff)
                                eax_17 += 1
                            
                            if (eax_17 s<= 1)
                                result = (*(**(arg1 + 8) + 0x28))(ebx_1) - 0xe
                                
                                if (result u> 0x34)
                                    result.b = 0
                                    break
                                
                                switch (result)
                                    case 2, 3
                                        int32_t edi_4 = 0
                                        int32_t eax_31
                                        int32_t edx_9
                                        edx_9:eax_31 = sx.q((*ebp_4)->__offset(0x14).d())
                                        
                                        if ((eax_31 + (edx_9 & 3)) s>> 2 s> 0)
                                            while (sub_42e5b0(arg1, result_1[edi_4], arg2).b != 0)
                                                edi_4 += 1
                                                int32_t eax_36
                                                int32_t edx_11
                                                edx_11:eax_36 = sx.q((*ebp_4)->__offset(0x14).d())
                                                
                                                if (edi_4 s>= (eax_36 + (edx_11 & 3)) s>> 2)
                                                    goto label_42ecbb
                                            
                                            result.b = 0
                                            break
                                    case 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 
                                            0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
                                            0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 
                                            0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 
                                            0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33
                                        result.b = 0
                                        break
                            else
                                int32_t edi_3 = 0
                                int32_t eax_20
                                int32_t edx_5
                                edx_5:eax_20 = sx.q((*ebp_4)->__offset(0x14).d())
                                
                                if ((eax_20 + (edx_5 & 3)) s>> 2 s> 0)
                                    while (sub_42e5b0(arg1, result_1[edi_3], arg2).b != 0)
                                        edi_3 += 1
                                        int32_t eax_25
                                        int32_t edx_7
                                        edx_7:eax_25 = sx.q((*ebp_4)->__offset(0x14).d())
                                        
                                        if (edi_3 s>= (eax_25 + (edx_7 & 3)) s>> 2)
                                            goto label_42ecbb
                                    
                                    result.b = 0
                                    break
                    case 4
                        int32_t eax_38 = sub_42dba0(result, edx_1, arg1, ebx_1)
                        int32_t var_18
                        sub_42f420(&var_18, eax_38)
                        int32_t edi_5 = 0
                        int32_t var_4_2 = 2
                        
                        if (eax_38 s> 0)
                            do
                                *(var_18 + (edi_5 << 2)) = (*(**(arg1 + 0xc) + 0x24))(
                                    (*(**(arg1 + 8) + 0x1c))(ebx_1), edi_5)
                                edi_5 += 1
                            while (edi_5 s< eax_38)
                            
                            ebp_1 = arg2
                        
                        eax_10 = sub_42e8b0(arg1, ebx_1, ebp_1, &var_18)
                        ecx_10 = &var_18
                        goto label_42eca6
        
    label_42ecbb:
        edx = var_3c + 1
        var_3c = edx
        
        if (edx s>= result_2)
            goto label_42ecca

fsbase->NtTib.ExceptionList = ExceptionList
return result
