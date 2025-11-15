// 函数: sub_6104b0
// 地址: 0x6104b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7434d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (**arg2)(0x76b33c)

if (result != 0)
    int32_t* result_3
    sub_403360(&result_3, (*(*result + 0xc))(eax_2))
    int32_t var_8_1 = 0
    void* esi_1 = arg1 + 0x44
    int32_t var_18
    int32_t* ebx
    int32_t* result_1
    
    if (sub_60a220(esi_1, &result_3) != 0)
        if (sub_62b130(arg1).b == 0)
            ebx.b = 0
        else
            result = (**arg2)(0x76b38c)
            result_1 = result
            
            if (result == 0)
                ebx.b = 0
            else
                int32_t* ecx_14 = *(arg1 + 0x24)
                
                if (ecx_14 == 0)
                    goto label_610639
                
                if ((**ecx_14)() == 0)
                    goto label_610639
                
                int32_t eax_16
                int32_t edx_2
                edx_2:eax_16 = muls.dp.d(0x4bda12f7, *(arg1 + 0x7c) - *(arg1 + 0x78))
                int32_t edx_3 = edx_2 s>> 5
                
                if ((*(*result_1 + 0x10))() != (edx_3 u>> 0x1f) + edx_3)
                    ebx.b = 0
                else
                    esi_1 = arg1 + 0x44
                label_610639:
                    result = (**arg2)(0x76b2dc)
                    
                    if (result == 0)
                        ebx.b = 0
                    else
                        (**result)(*(arg1 + 0x144))
                        int32_t* ecx_20 = *(arg1 + 0x24)
                        
                        if (ecx_20 != 0 && (**ecx_20)() != 0)
                            sub_5fbb00(arg1 + 0x1258, esi_1)
                        
                        int32_t ecx_22
                        
                        if (*(esi_1 + 8) != 0)
                            ecx_22 = *(esi_1 + 4)
                        else
                            ecx_22 = 0
                        
                        *(arg1 + 0x1d4) = ecx_22
                        ebx.b = 1
                        result = *(esi_1 + 8) + ecx_22
                        *(arg1 + 0x1d0) = ecx_22
                        *(arg1 + 0x1d8) = result
                        *(arg1 + 0x1e8) = 1
    else
        int32_t* result_2 = &result_3
        
        if (var_18 u>= 0x10)
            result_2 = result_3
        
        result_1 = result_2
        void* var_5c
        sub_403360(&var_5c, 0x76b5bc)
        var_8_1.b = 1
        var_8_1.b = 2
        char var_44
        sub_6c52e0(sub_409240(&result_1, &var_5c, &var_44, &result_1))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t* var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)
        
        ebx.b = 0
    
    if (var_18 u>= 0x10)
        sub_403160(result_3, var_18 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
