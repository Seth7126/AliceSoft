// 函数: sub_46ceb0
// 地址: 0x46ceb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cdc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *(arg1 + 4)
char* var_60 = ecx
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = *ecx

if (result.b == 0x2f || result.b == 0x23 || result.b == 0x2e)
    *(arg1 + 0x10) = ecx
    result.b = *ecx
    
    if (result.b != 0x2e)
        if (result.b != 0x23)
            *(arg1 + 4) = &ecx[1]
            
            if (*(arg1 + 0xc) u> &ecx[1] && ecx[1] == 0x2f)
                goto label_46cf21
            
            if (ecx[1] == 0x2a)
                char edx = 0
                int32_t edi_1 = 1
                *(arg1 + 4) = &ecx[2]
                
                if (*(arg1 + 0xc) u<= &ecx[2])
                    goto label_46d018
                
                do
                    char* ebx_2 = *(arg1 + 4)
                    ecx.b = *ebx_2
                    
                    if (ecx.b u< 0x81)
                        if ((&ecx[0x20]).b u> 0xf)
                            goto label_46cfd3
                        
                        edx = 0
                        *(arg1 + 4) = &ebx_2[1]
                    else if (ecx.b u<= 0x9f || (&ecx[0x20]).b u<= 0xf)
                        edx = 0
                        *(arg1 + 4) = &ebx_2[1]
                    else
                    label_46cfd3:
                        
                        if (ecx.b != 0x2f)
                            if (ecx.b == 0x2a)
                                if (ecx.b != 0x2f || edx != 0x2a)
                                    goto label_46cff1
                                
                                goto label_46cfe8
                            
                            edx = 0
                        else if (edx != 0x2a)
                        label_46cff1:
                            
                            if (ecx.b != 0x2a || edx != 0x2f)
                                edx = ecx.b
                            else
                                edi_1 += 1
                                edx = 0
                        else
                        label_46cfe8:
                            int32_t temp2_1 = edi_1
                            edi_1 -= 1
                            
                            if (temp2_1 == 1)
                                *(arg1 + 4) += 1
                                result.b = 1
                                *(arg1 + 0x10) = 0
                                goto label_46d0a3
                            
                            edx = 0
                    
                    *(arg1 + 4) += 1
                while (*(arg1 + 0xc) u> *(arg1 + 4))
                
                if (edi_1 == 0)
                    *(arg1 + 0x10) = 0
                    result.b = 1
                else
                    ecx = var_60
                label_46d018:
                    void* ecx_4 = ecx - *(arg1 + 8)
                    int32_t edx_1
                    
                    if (ecx - *(arg1 + 8) s>= 0 && (*(arg1 + 0x24) - *(arg1 + 0x20)) s>> 2 s> ecx_4)
                        edx_1 = *(*(arg1 + 0x20) + (ecx_4 << 2))
                    else
                        edx_1 = 0xffffffff
                    
                    void var_5c
                    char* eax_9 = sub_6ca3a0(&var_5c, edx_1)
                    int32_t var_8_1 = 0
                    void var_44
                    char* eax_10 = sub_41a330(eax_9.b, 0x75f6e8, &var_44, eax_9)
                    var_8_1.b = 1
                    void var_2c
                    char* eax_11 = sub_4176f0(eax_10.b, eax_10, &var_2c, "): /* ")
                    var_8_1.b = 2
                    sub_45eb40(*(arg1 + 0x2c), eax_11)
                    sub_403320(&var_2c)
                    sub_403320(&var_44)
                    sub_403320(&var_5c)
                    result.b = 0
            else
                *(arg1 + 0x10) = 0
                *(arg1 + 4) = ecx
                result.b = 1
        else
            *(arg1 + 4) = &ecx[1]
            
            if (*(arg1 + 0xc) u<= &ecx[1] || ecx[1] != result.b)
                *(arg1 + 4) = *(arg1 + 0x10)
                result.b = 1
                *(arg1 + 0x10) = 0
                *(arg1 + 0x10) = 0
            else
                sub_46d150(arg1)
                *(arg1 + 0x10) = 0
                result.b = 1
    else if (ecx == *(arg1 + 8))
    label_46cf21:
        sub_46d150(arg1)
        *(arg1 + 0x10) = 0
        result.b = 1
    else
        result.b = ecx[0xffffffff]
        
        if (result.b == 0 || result.b == 0xa)
            goto label_46cf21
        
        *(arg1 + 0x10) = 0
        result.b = 1
        *(arg1 + 0x10) = 0
else
    result.b = 1

label_46d0a3:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
