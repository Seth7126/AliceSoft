// 函数: sub_46a560
// 地址: 0x46a560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cf60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_38 = ebx
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_30 = arg1
int32_t i = 0
int32_t var_34 = 0

if (arg2[4] u> 0)
    int32_t ecx = arg2[5]
    
    do
        char* esi_1
        
        if (ecx u< 0x10)
            esi_1 = arg2
        else
            esi_1 = *arg2
        
        ebx.b = esi_1[i]
        void* var_2c
        int32_t var_18
        
        if (ebx.b u< 0x81 || ebx.b u> 0x9f)
            ebx.b += 0x20
            
            if (ebx.b u<= 0xf)
                goto label_46a5c8
            
            char* esi_4
            
            if (ecx u< 0x10)
                esi_4 = arg2
            else
                esi_4 = *arg2
            
            char* esi_5
            
            if (esi_4[i] s>= 0x61)
                if (ecx u< 0x10)
                    esi_5 = arg2
                else
                    esi_5 = *arg2
            
            if (esi_4[i] s< 0x61 || esi_5[i] s> 0x7a)
                char* esi_6
                
                if (ecx u< 0x10)
                    esi_6 = arg2
                else
                    esi_6 = *arg2
                
                char* esi_7
                
                if (esi_6[i] s>= 0x41)
                    if (ecx u< 0x10)
                        esi_7 = arg2
                    else
                        esi_7 = *arg2
                
                if (esi_6[i] s< 0x41 || esi_7[i] s> 0x5a)
                    char* esi_8
                    
                    if (ecx u< 0x10)
                        esi_8 = arg2
                    else
                        esi_8 = *arg2
                    
                    int32_t* esi_9
                    
                    if (esi_8[i] s>= 0x30)
                        if (ecx u< 0x10)
                            esi_9 = arg2
                        else
                            esi_9 = *arg2
                    
                    if (esi_8[i] s< 0x30 || *(esi_9 + i) s> 0x39 || i == 0)
                        char* esi_10
                        
                        if (ecx u< 0x10)
                            esi_10 = arg2
                        else
                            esi_10 = *arg2
                        
                        if (esi_10[i] != 0x5f)
                            int32_t* esi_11
                            
                            if (ecx u< 0x10)
                                esi_11 = arg2
                            else
                                esi_11 = *arg2
                            
                            int32_t* esi_12
                            
                            if (*(esi_11 + i) s>= 0xa1)
                                if (ecx u< 0x10)
                                    esi_12 = arg2
                                else
                                    esi_12 = *arg2
                            
                            if (*(esi_11 + i) s< 0xa1 || *(esi_12 + i) s> 0xdf)
                                int32_t* eax_5 = sub_419600(i, U"""", &var_2c, arg2)
                                int32_t var_8_2 = 1
                                sub_4176f0(eax_5.b, eax_5, arg1, U""")
                                
                                if (var_18 u>= 0x10)
                                    sub_403160(var_2c, var_18 + 1, 1)
                                
                                goto label_46a6c7
        else
        label_46a5c8:
            char* esi_2
            
            if (ecx u< 0x10)
                esi_2 = arg2
            else
                esi_2 = *arg2
            
            if (esi_2[i] == 0x81)
                int32_t* esi_3
                
                if (ecx u< 0x10)
                    esi_3 = arg2
                else
                    esi_3 = *arg2
                
                if (*(esi_3 + i + 1) == 0x40)
                    int32_t* eax_4 = sub_419600(i, &(*U"["""")[1], &var_2c, arg2)
                    int32_t var_8_1 = 0
                    sub_4176f0(eax_4.b, eax_4, arg1, &(*U"["""")[2])
                    
                    if (var_18 u>= 0x10)
                        sub_403160(var_2c, var_18 + 1, 1)
                    
                    goto label_46a6c7
            
            i += 1
        i += 1
    while (i u< arg2[4])

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_403590(arg1, arg2, 0, 0xffffffff)
label_46a6c7:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
