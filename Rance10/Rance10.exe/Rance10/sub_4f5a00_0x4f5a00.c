// 函数: sub_4f5a00
// 地址: 0x4f5a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7363e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcba4
sub_487ad0(2, 0x32, 1)
sub_487ad0(3, 0x32, 1)
char eax_3 = sub_4d5730(esi + 0xc)
char* result
char var_2c

if (eax_3 != 0)
    if (sub_524950(esi + 0x5c) != 0)
        if (sub_4bb670(esi + 0x1c4).b != 0)
            int32_t* edi_1 = data_7fcb88
            
            if (edi_1 == 0)
                result.b = 0
            else
                result = (**edi_1)(0x765614)
                
                if (result == 0)
                    result.b = 0
                else
                    (**result)(esi + 4)
                    int32_t* eax_10 = (**edi_1)(0x765528)
                    
                    if (eax_10 == 0)
                        eax_10.b = 0
                    else
                        eax_10 = (**eax_10)(eax_2)
                    
                    *(esi + 0x1f4) = eax_10.b
                    void* ecx_14 = *(esi + 0x17c)
                    
                    if (ecx_14 != 0)
                        sub_4f3210(ecx_14)
                    
                    result = *(esi + 0x1b4)
                    
                    if (result != 0)
                        void* ecx_15 = *(result + 0x88)
                        
                        if (ecx_15 != 0)
                            sub_4f3210(ecx_15)
                    
                    result.b = 1
        else
            void var_44
            sub_403360(&var_44, 0x7655a0)
            int32_t var_8_3 = 2
            sub_6c52e0(&var_44)
            sub_403320(&var_44)
            result.b = 0
    else
        sub_403360(&var_2c, 0x7655c8)
        int32_t var_8_2 = 1
        sub_6c52e0(&var_2c)
        char* var_18
        
        if (var_18 u< 0x10)
            result.b = 0
        else
            sub_403160(var_2c.d, &var_18[1], 1)
            result.b = 0
else
    char* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = eax_3
    sub_403490(&var_2c, 0x765578, 0x26)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, &var_18_1[1], 1)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
