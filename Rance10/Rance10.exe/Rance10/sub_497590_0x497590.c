// 函数: sub_497590
// 地址: 0x497590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730010
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = (**(arg1 - 4))(0x760b54)
char var_78

if (eax_4 == 0)
    var_78 = 0
else
    var_78 = (**eax_4)(eax_2)

char eax_8 = sub_492740(arg1 - 4)
char* result
char var_2c
char* var_18

if (eax_8 != 0)
    char* ecx_8 = &var_2c
    
    if (sub_487780() == 0)
        sub_403360(ecx_8, 0x76099c)
        int32_t var_8_2 = 1
        goto label_497615
    
    sub_403360(ecx_8, "CG.afa")
    int32_t var_8_3 = 2
    int32_t var_8_4 = 0xffffffff
    int32_t ebx
    ebx.b = sub_44bc00(sub_42e170(2, &var_2c), var_78) == 0
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, &var_18[1], 1)
    
    if (ebx.b == 0)
        if (sub_643e40() == 0)
            sub_403360(&var_2c, 0x760808)
            int32_t var_8_6 = 4
            goto label_4976d3
        
        void* edi_1
        result, edi_1 = sub_44f7b0()
        
        if (result.b == 0)
            sub_403360(&var_2c, 0x760838)
            int32_t var_8_7 = 5
            goto label_4976d3
        
        int32_t* ecx_14 = *(edi_1 + 0x1d0)
        
        if (ecx_14 == 0)
            result.b = 0
        else
            result = (*(*ecx_14 + 0x14))(0x760b04)
            
            if (result == 0)
                result.b = 0
            else
                void var_44
                sub_403360(&var_44, 0x75cec2)
                int32_t var_8_8 = 6
                sub_403360(&var_2c, 0x760864)
                var_8_8.b = 7
                void var_74
                void** eax_17 = sub_4961b0(&var_74, &var_2c, &var_44)
                var_8_8.b = 8
                bool cond:1_1 = sub_4a94d0((**result)(eax_2), eax_17) == 0
                sub_403320(&var_74)
                sub_403320(&var_2c)
                int32_t var_8_9 = 0xffffffff
                sub_403320(&var_44)
                
                if (cond:1_1 == 0)
                    sub_4a79b0()
                    sub_4a7a60()
                    
                    if (sub_4f5a00() != 0)
                        if (sub_423b50().b != 0)
                            result.b = 1
                        else
                            void var_5c
                            sub_403360(&var_5c, "ADVEngine")
                            int32_t var_8_12 = 0xb
                            sub_6c52e0(&var_5c)
                            sub_403320(&var_5c)
                            result.b = 0
                    else
                        sub_403360(&var_44, "PartsEngine")
                        int32_t var_8_11 = 0xa
                        sub_6c52e0(&var_44)
                        sub_403320(&var_44)
                        result.b = 0
                else
                    sub_403360(&var_44, 0x760884)
                    int32_t var_8_10 = 9
                    sub_6c52e0(&var_44)
                    sub_403320(&var_44)
                    result.b = 0
    else
        sub_403360(&var_2c, 0x7607e0)
        int32_t var_8_5 = 3
    label_4976d3:
        sub_6c52e0(&var_2c)
        sub_403320(&var_2c)
        result.b = 0
else
    var_18 = 0xf
    int32_t var_1c_1 = 0
    var_2c = eax_8
    sub_403490(&var_2c, 0x7609c8, 0x58)
    int32_t var_8_1 = 0
label_497615:
    sub_6c52e0(&var_2c)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, &var_18[1], 1)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
