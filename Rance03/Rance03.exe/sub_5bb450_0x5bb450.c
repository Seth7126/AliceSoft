// 函数: sub_5bb450
// 地址: 0x5bb450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_2 = arg1 - 1
bool cond:0 = arg1 - 1 s< 0
arg1 = result_2
struct _EXCEPTION_REGISTRATION_RECORD** result

if (cond:0)
label_5bb549:
    result.b = 1
else
    uint32_t ebx_1
    
    if (*(arg3 + 0x48) != 0)
        ebx_1 = *(arg3 + 0xc) u>> 2
    else
        ebx_1 = 0
    
    if (result_2 s>= (*(arg2 + 8) - *(arg2 + 4)) s>> 2)
        result.b = 0
    else
        (*(arg2 + 4))[result_2] = ebx_1
        
        if (result_2 != 0)
            int32_t i = 0
            
            if (ebx_1 s<= 0)
            label_5bb549_1:
                result.b = 1
            else
                while (i u< *(arg3 + 0xc) u>> 2)
                    int32_t eax_11
                    
                    if (*(arg3 + 0xc) != 0)
                        eax_11 = *(arg3 + 8)
                    else
                        eax_11 = 0
                    
                    int32_t ecx_10 = *(eax_11 + (i << 2))
                    
                    if (ecx_10 u>= (*(arg4 + 0xc) - *(arg4 + 8)) s>> 2)
                        break
                    
                    result = *(*(arg4 + 8) + (ecx_10 << 2))
                    
                    if (result == 0)
                        break
                    
                    if (sub_5bb450(result_2, arg2, result, arg4).b == 0)
                        break
                    
                    i += 1
                    
                    if (i s>= ebx_1)
                        goto label_5bb549_2
                    
                    result_2 = arg1
                
                result.b = 0
        else
            int32_t* result_1 = result_2
            int32_t* result_4 = result_2
            int32_t* result_5 = result_2
            int32_t ecx_2 = *(arg3 + 0x3c)
            uint32_t var_20 = ebx_1
            uint32_t eax_5 = sub_5b8590(ecx_2)
            sub_42f470(&result_1, ebx_1)
            
            if (eax_5 s>= 0xa && (eax_5 s<= 0xb || eax_5 == 0x2f))
                int32_t* result_3 = result_1
                
                if (result_3 != result_2)
                    int32_t* ecx_4
                    
                    if (*(arg3 + 0xc) != 0)
                        ecx_4 = *(arg3 + 8)
                    else
                        ecx_4 = nullptr
                    
                    sub_69d850(result_3, ecx_4, ebx_1 << 2, eax_2)
                
                goto label_5bb533
            
            int32_t edi_1 = 0
            
            if (ebx_1 s<= 0)
            label_5bb533:
                sub_5b8630(arg2 + 0x10, &var_20)
                result = result_1
                
                if (result != 0)
                    j__free(result)
                
            label_5bb549_2:
                result.b = 1
            else
                while (true)
                    int32_t ecx_9
                    
                    if (*(arg3 + 0xc) != 0)
                        ecx_9 = *(arg3 + 8)
                    else
                        ecx_9 = 0
                    
                    if (sub_5bb240(eax_5, *(ecx_9 + (edi_1 << 2)), &result_1[edi_1], arg4) == 0)
                        result = result_1
                        
                        if (result != 0)
                            j__free(result)
                        
                        break
                    
                    edi_1 += 1
                    
                    if (edi_1 s>= ebx_1)
                        goto label_5bb533
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
