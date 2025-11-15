// 函数: sub_619480
// 地址: 0x619480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74435d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_474 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t edx = *eax_3
arg1[0x74] = &eax_3[1]
int32_t var_464 = edx
int32_t ecx = eax_3[1]
int32_t var_460 = ecx
arg1[0x74] = &eax_3[2]
char* result
void* var_444
char var_42c
char* eax_8
int32_t edi

if (ecx s>= 0)
    int32_t var_478_3 = edx
    edi = sub_621ba0(&arg1[0x52])
    
    if (edi s>= 0)
        int32_t eax_14
        int32_t edx_3
        edx_3:eax_14 = muls.dp.d(0x4bda12f7, arg1[0x1f] - arg1[0x1e])
        int32_t ecx_9 = var_460
        int32_t edx_4 = edx_3 s>> 5
        int32_t ebx_1
        int32_t ebx_2
        
        if (ecx_9 u< (edx_4 u>> 0x1f) + edx_4)
            ebx_1 = ecx_9 * 0x6c
            ebx_2 = ebx_1 + arg1[0x1e]
        
        if (ecx_9 u>= (edx_4 u>> 0x1f) + edx_4 || ebx_1 == neg.d(arg1[0x1e]))
            sub_403360(&var_444, 0x76d120)
            int32_t var_8_4 = 4
            var_8_4.b = 5
            sub_612320(arg1, sub_409350(&var_460, &var_444, &var_42c, &var_460))
            sub_403320(&var_42c)
            result = sub_403320(&var_444)
        else
            uint32_t var_414[0x100]
            sub_6290c0(&arg1[0x7d], &var_414, *(ebx_2 + 0x4c))
            
            if (sub_616b40(arg1, ebx_2, edi, &var_414, *(arg1[0x284] - 4)) != 0)
                result = sub_405d30(&arg1[0x7d], edi)
            else
                void var_45c
                sub_403360(&var_45c, 0x76d14c)
                int32_t var_8_3 = 6
                sub_612230(arg1, 0x76d0f8, &var_45c)
                result = sub_403320(&var_45c)
    else
        sub_403360(&var_444, 0x76d1d8)
        int32_t var_8_2 = 2
        eax_8 = sub_417810(&var_464, &var_444, &var_42c, &var_464, var_460)
        var_8_2.b = 3
    label_619531:
        sub_612320(arg1, eax_8)
        int32_t var_418
        
        if (var_418 u>= 0x10)
            sub_403160(var_42c.d, var_418 + 1, 1)
        
        char* result_1
        result = result_1
        int32_t var_418_1 = 0xf
        int32_t var_41c_1 = 0
        var_42c = 0
        
        if (result u>= 0x10)
            result = sub_403160(var_444, &result[1], 1)
else
    int32_t var_478 = 1
    edi = sub_6219f0(&arg1[0x52], edx)
    
    if (edi s< 0)
        sub_403360(&var_444, 0x76d174)
        int32_t var_8_1 = 0
        eax_8 = sub_409350(&var_464, &var_444, &var_42c, &var_464)
        var_8_1.b = 1
        goto label_619531
    
    result = sub_405d30(&arg1[0x7d], edi)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
