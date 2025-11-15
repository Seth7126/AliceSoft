// 函数: sub_6237c0
// 地址: 0x6237c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7449f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_64 = arg1
struct _EXCEPTION_REGISTRATION_RECORD*** edx = *(arg2 + 0x14)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg2 + 0xc) s< &edx[1])
    result.b = 0
else
    int32_t eax_3
    
    if (*(arg2 + 0xc) != 0)
        eax_3 = *(arg2 + 8)
    else
        eax_3 = 0
    
    result = *(edx + eax_3)
    *(arg2 + 0x14) = &edx[1]
    
    if (result s>= 0)
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        int32_t var_8_1 = 0
        void* ebx
        int32_t var_70
        
        if (sub_622cd0(arg2, &var_30).b == 0)
            ebx.b = 0
        else
            void* var_6c
            
            if (sub_622c00(arg2, &var_70).b == 0)
                ebx.b = 0
            else
                int32_t var_68
                
                if (sub_622c00(arg2, &var_6c).b == 0)
                    ebx.b = 0
                else if (sub_609df0(arg3 + 0x44, &var_30, &var_68).b == 0)
                    ebx.b = 0
                else
                    result = sub_609d60(arg3 + 0x44, var_68)
                    
                    if (result == 0)
                        ebx.b = 0
                    else
                        ebx = var_6c
                        
                        if (result[0x17] == ebx)
                            ebx.b = 1
                            *arg4 = *result + var_70
                        else
                            char* edi_1 = var_64
                            char* eax_4 = &var_30
                            
                            if (var_1c_1 u>= 0x10)
                                eax_4 = var_30.d
                            
                            *(edi_1 + 4) = 1
                            var_64 = eax_4
                            void var_48
                            sub_403360(&var_48, 0x76d698)
                            var_8_1.b = 1
                            void var_60
                            sub_409670(&edi_1[8], 
                                sub_6241c0(&var_64, &var_48, &var_60, &var_64, result[0x17], ebx))
                            sub_403320(&var_60)
                            sub_403320(&var_48)
                            ebx.b = 0
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        result.b = ebx.b
    else
        *arg4 = result
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
