// 函数: sub_42e5b0
// 地址: 0x42e5b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b54d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg2
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edi s< 0)
labelid_1:
    result.b = 0
else
    int32_t* ebp_1 = arg3
    int32_t ecx = *ebp_1
    
    if (edi s>= (ebp_1[1] - ecx) s>> 2)
    labelid_1:
        result.b = 0
    else
        *(ecx + (edi << 2)) += 1
        
        if ((*ebp_1)[edi] s> 1)
            result.b = 1
        else
            int32_t edx_1
            result, edx_1 = (*(**(arg1 + 8) + 0x14))(edi)
            int32_t* var_18
            
            if (result u> 5)
            labelid_1:
                result.b = 0
            else
                switch (result)
                    case nullptr
                        int32_t eax_7 = (*(**(arg1 + 0xc) + 0x14))(eax_2)
                        sub_42f420(&var_18, eax_7)
                        int32_t ebx_1 = 0
                        int32_t var_4 = 0
                        
                        if (eax_7 s<= 0)
                            goto label_42e672
                        
                        int32_t* edi_1 = var_18
                        
                        do
                            edi_1[ebx_1] = (*(**(arg1 + 0xc) + 0x18))(ebx_1)
                            ebx_1 += 1
                        while (ebx_1 s< eax_7)
                        
                        edi = arg2
                    label_42e665:
                        ebp_1 = arg3
                    label_42e672:
                        int32_t** ecx_6 = &var_18
                        
                        if (sub_42e8b0(arg1, edi, ebp_1, &var_18) != 0)
                            sub_403510(ecx_6)
                            result.b = 1
                        else
                            sub_403510(ecx_6)
                        labelid_1:
                            result.b = 0
                    case 1
                        int32_t eax_11 = sub_42ced0(result, edx_1, arg1, edi)
                        sub_42f420(&var_18, eax_11)
                        int32_t var_4_1 = 1
                        
                        if (eax_11 s<= 0)
                            goto label_42e672
                        
                        int32_t* ebp_3 = var_18
                        int32_t ebx_2 = 0
                        
                        do
                            sub_42cef0(arg1, edi, ebx_2, ebp_3)
                            ebx_2 += 1
                            ebp_3 = &ebp_3[1]
                        while (ebx_2 s< eax_11)
                        
                        goto label_42e665
                    case 2, 5
                        result.b = 1
                    case 3
                        struct _EXCEPTION_REGISTRATION_RECORD** ebx_3 = (*(**(arg1 + 8) + 4))(edi)
                        
                        if (ebx_3 == 0)
                            result.b = 1
                        else if ((*ebx_3)->__offset(0x14).d(eax_2) s<= 0)
                            result.b = 1
                        else
                            result = (*ebx_3)->__offset(0x18).d()
                            arg3 = result
                            
                            if (result == 0)
                            label_42e688:
                                result.b = 0
                            else
                                int32_t eax_15 = (*(**(arg1 + 8) + 0x24))(edi)
                                
                                if (eax_15 != 0xffffffff)
                                    eax_15 += 1
                                
                                if (eax_15 s<= 1)
                                    result = (*(**(arg1 + 8) + 0x28))(edi) - 0xe
                                    
                                    if (result u> 0x34)
                                    label_42e688_1:
                                        result.b = 0
                                    else
                                        switch (result)
                                            case nullptr, 1, 0x10, 0x24, 0x34
                                                result.b = 1
                                            case 2, 3
                                                int32_t i = 0
                                                int32_t eax_29
                                                int32_t edx_7
                                                edx_7:eax_29 = sx.q((*ebx_3)->__offset(0x14).d())
                                                
                                                if ((eax_29 + (edx_7 & 3)) s>> 2 s<= 0)
                                                    result.b = 1
                                                else
                                                    int32_t eax_34
                                                    int32_t edx_9
                                                    
                                                    do
                                                        if (sub_42e5b0(arg3[i], ebp_1).b == 0)
                                                            goto label_42e688_2
                                                        
                                                        i += 1
                                                        edx_9:eax_34 =
                                                            sx.q((*ebx_3)->__offset(0x14).d())
                                                    while (i s< (eax_34 + (edx_9 & 3)) s>> 2)
                                                    result.b = 1
                                            case 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 
                                                0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                                                0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 
                                                0x21, 0x22, 0x23, 0x25, 0x26, 0x27, 0x28, 0x29, 
                                                0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 
                                                0x32, 0x33
                                            label_42e688_2:
                                                result.b = 0
                                else
                                    int32_t i_1 = 0
                                    int32_t eax_18
                                    int32_t edx_3
                                    edx_3:eax_18 = sx.q((*ebx_3)->__offset(0x14).d())
                                    
                                    if ((eax_18 + (edx_3 & 3)) s>> 2 s<= 0)
                                        result.b = 1
                                    else
                                        int32_t eax_23
                                        int32_t edx_5
                                        
                                        do
                                            if (sub_42e5b0(arg3[i_1], ebp_1).b == 0)
                                                goto label_42e688_2
                                            
                                            i_1 += 1
                                            edx_5:eax_23 = sx.q((*ebx_3)->__offset(0x14).d())
                                        while (i_1 s< (eax_23 + (edx_5 & 3)) s>> 2)
                                        result.b = 1
                    case 4
                        int32_t eax_36 = sub_42dba0(result, edx_1, arg1, edi)
                        sub_42f420(&var_18, eax_36)
                        int32_t ebx_4 = 0
                        int32_t var_4_2 = 2
                        
                        if (eax_36 s<= 0)
                            goto label_42e672
                        
                        int32_t* ebp_4 = var_18
                        
                        do
                            sub_42dbc0(arg1, edi, ebx_4, ebp_4)
                            ebx_4 += 1
                            ebp_4 = &ebp_4[1]
                        while (ebx_4 s< eax_36)
                        
                        goto label_42e665

fsbase->NtTib.ExceptionList = ExceptionList
return result
