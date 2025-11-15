// 函数: sub_6213c0
// 地址: 0x6213c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728ce8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 u>= arg1[5])
    result = 0xffffffff
else
    void var_48
    void var_3c
    int32_t* eax_5 = sub_622260(sub_44a580(&arg1[1], &var_48), &var_3c, arg2)
    int32_t* esi_1 = *eax_5
    
    if (esi_1 != 0)
        esi_1 = *esi_1
    
    int32_t edx_1 = eax_5[2]
    void* esi_2 = *(*(esi_1[1] + (((esi_1[2] - 1) & edx_1 u>> 2) << 2)) + ((edx_1 & 3) << 2))
    
    if (esi_2 == 0)
        result = 0xffffffff
    else
        int32_t eax_11 = *(esi_2 + 4) - 2
        
        if (eax_11 u> 3)
            result = 0xffffffff
        else
            switch (eax_11)
                case 0
                    char* eax_12
                    
                    if (*(esi_2 + 0x14) != 0)
                        eax_12 = *(esi_2 + 0x10)
                    else
                        eax_12 = nullptr
                    
                    void var_30
                    sub_403360(&var_30, eax_12)
                    int32_t var_8_1 = 0
                    void* var_5c_3 = &var_30
                    int32_t result_1 = sub_621930(arg1)
                    sub_403320(&var_30)
                    result = result_1
                case 1
                    int32_t result_2 =
                        sub_6211e0(arg1, *(esi_2 + 0x2c), *(esi_2 + 0x30), *(esi_2 + 0x34))
                    int32_t* eax_19 = sub_622840(arg1, result_2)
                    
                    if (eax_19 == 0)
                        result = 0xffffffff
                    else
                        char eax_20
                        
                        if (*(esi_2 + 0x38) != 0)
                            eax_20 = sub_627ce0(eax_19, esi_2)
                        
                        if (*(esi_2 + 0x38) != 0 && eax_20 == 0)
                            result = 0xffffffff
                        else
                            result = result_2
                case 2
                    int32_t var_5c_4 = 0
                    int32_t result_3 = sub_6219f0(arg1, sub_629d00(esi_2))
                    void* eax_15 = sub_6228d0(arg1, result_3)
                    
                    if (eax_15 == 0)
                        result = 0xffffffff
                    else
                        if ((*(*(eax_15 + 0x20) + 4))(esi_2 + 0x20) == 0)
                            result_3 = 0xffffffff
                        
                        result = result_3
                case 3
                    int32_t result_4 = sub_621320(arg1)
                    void* eax_22 = sub_622960(arg1, result_4)
                    
                    if (eax_22 == 0)
                        result = 0xffffffff
                    else
                        (**(eax_22 + 0x20))(eax_2)
                        
                        if (sub_5ff490(eax_22, esi_2) == 0)
                            result_4 = 0xffffffff
                        
                        result = result_4

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
