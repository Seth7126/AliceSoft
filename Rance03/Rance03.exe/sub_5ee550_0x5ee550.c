// 函数: sub_5ee550
// 地址: 0x5ee550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = data_75d518
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(ebp + 8) != 0xffffffff)
    int32_t* arg_4
    int32_t* esi_1 = arg_4
    result = esi_1[4]
    
    if (result != 0)
        uint8_t* ebx_1 = nullptr
        uint8_t* var_18 = nullptr
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        int32_t var_4 = 0
        
        if (result != 0)
            if (result u> 0xffffffff)
                sub_69a551("vector<T> too long")
                noreturn
            
            sub_403640(&var_18, result)
            ebx_1 = var_18
        
        int32_t eax_3 = esi_1[4]
        
        if (eax_3 s> 0)
            int32_t edi_1 = 0
            
            do
                int32_t eax_4 = esi_1[5]
                char* ecx_2
                
                if (eax_4 u< 0x10)
                    ecx_2 = esi_1
                else
                    ecx_2 = *esi_1
                
                char* ecx_3
                
                if (ecx_2[edi_1] u>= 0x81)
                    if (eax_4 u< 0x10)
                        ecx_3 = esi_1
                    else
                        ecx_3 = *esi_1
                
                char* ecx_4
                char* ecx_5
                
                if (ecx_2[edi_1] u< 0x81 || ecx_3[edi_1] u> 0x9f)
                    if (eax_4 u< 0x10)
                        ecx_4 = esi_1
                    else
                        ecx_4 = *esi_1
                    
                    if (ecx_4[edi_1] u>= 0xe0)
                        if (eax_4 u< 0x10)
                            ecx_5 = esi_1
                        else
                            ecx_5 = *esi_1
                
                if ((ecx_2[edi_1] u< 0x81 || ecx_3[edi_1] u> 0x9f)
                        && (ecx_4[edi_1] u< 0xe0 || ecx_5[edi_1] u> 0xef))
                    int32_t* ecx_7
                    
                    if (eax_4 u< 0x10)
                        ecx_7 = esi_1
                    else
                        ecx_7 = *esi_1
                    
                    if (*(ecx_7 + edi_1) != 0xd)
                        int32_t* ecx_10
                        
                        if (eax_4 u< 0x10)
                            ecx_10 = esi_1
                        else
                            ecx_10 = *esi_1
                        
                        if (*(ecx_10 + edi_1) != 0xa)
                            if (eax_4 u< 0x10)
                                goto label_5ee6c4
                            
                            sub_414b60(&var_18, *esi_1 + edi_1)
                            *(ebp + 0x14) = 0
                        else
                            if (*(ebp + 0x14) == 0)
                                arg_4.b = 0xd
                                sub_414b60(&var_18, &arg_4)
                            
                            if (esi_1[5] u< 0x10)
                                goto label_5ee6c4
                            
                            sub_414b60(&var_18, *esi_1 + edi_1)
                            *(ebp + 0x14) = 0
                    else if (eax_4 u< 0x10)
                        sub_414b60(&var_18, esi_1 + edi_1)
                        *(ebp + 0x14) = 1
                    else
                        sub_414b60(&var_18, *esi_1 + edi_1)
                        *(ebp + 0x14) = 1
                else
                    int32_t* eax_5
                    
                    if (eax_4 u< 0x10)
                        eax_5 = esi_1
                    else
                        eax_5 = *esi_1
                    
                    sub_414b60(&var_18, eax_5 + edi_1)
                    edi_1 += 1
                    
                    if (esi_1[5] u< 0x10)
                    label_5ee6c4:
                        sub_414b60(&var_18, esi_1 + edi_1)
                        *(ebp + 0x14) = 0
                    else
                        sub_414b60(&var_18, *esi_1 + edi_1)
                        *(ebp + 0x14) = 0
                
                edi_1 += 1
            while (edi_1 s< eax_3)
            
            ebx_1 = var_18
        
        result.b = sub_604e00(ebp + 4, ebx_1, var_14_1 - ebx_1).b != 0
        arg_4.b = result.b
        
        if (ebx_1 != 0)
            j__free(ebx_1)
            result.b = arg_4.b
    else
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
