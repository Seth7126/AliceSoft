// 函数: sub_626a70
// 地址: 0x626a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
void* ebx
void* var_34 = ebx
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg2 + 0x14)
void* result

if (*(arg2 + 0xc) s< &ecx[1])
    result.b = 0
else
    int32_t eax_3
    
    if (*(arg2 + 0xc) != 0)
        eax_3 = *(arg2 + 8)
    else
        eax_3 = 0
    
    *(arg1 + 0x1c) = *(ecx + eax_3)
    *(arg2 + 0x14) += 4
    int32_t* ecx_1 = *(arg2 + 0x14)
    
    if (*(arg2 + 0xc) s< &ecx_1[1])
        result.b = 0
    else
        int32_t eax_5
        
        if (*(arg2 + 0xc) != 0)
            eax_5 = *(arg2 + 8)
        else
            eax_5 = 0
        
        *(arg1 + 0x34) = *(ecx_1 + eax_5)
        *(arg2 + 0x14) += 4
        void* var_30 = nullptr
        
        if (sub_622c00(arg2, &var_30).b == 0)
            result.b = 0
        else
            *(arg1 + 0x2c) = var_30
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_8_1 = 0
            
            if (sub_622cd0(arg2, &var_2c) == 0)
                sub_403320(&var_2c)
                result.b = 0
            else
                *(arg1 + 0x30) = sub_60a120(**(arg1 + 0x24) + 0x44, &var_2c)
                
                if (sub_622c00(arg2, &var_30) == 0)
                    sub_403320(&var_2c)
                    result.b = 0
                else
                    *(arg1 + 0x38) = var_30 == 1
                    
                    if (sub_622c00(arg2, &var_30) == 0)
                        sub_403320(&var_2c)
                        result.b = 0
                    else
                        ebx = var_30
                        *(arg1 + 0x14) = 0
                        
                        if (ebx s<= 0)
                        label_626bab:
                            sub_626d80(arg1)
                            sub_403320(&var_2c)
                            result.b = 1
                        else if (sub_405df0(arg1 + 0xc, ebx) == 0)
                            sub_403320(&var_2c)
                            result.b = 0
                        else
                            char* eax_14
                            
                            if (*(arg1 + 0x14) != 0)
                                eax_14 = *(arg1 + 0x10)
                            else
                                eax_14 = nullptr
                            
                            if (sub_622bb0(arg2, eax_14, ebx) != 0)
                                goto label_626bab
                            
                            sub_403320(&var_2c)
                            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
