// 函数: sub_46ba90
// 地址: 0x46ba90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = arg1[1]
int32_t var_6c = 0
*arg1 = eax_4
char* result

while (true)
    if (arg1[3] u> eax_4)
        int32_t edi_1 = eax_4
        
        if (sub_46ceb0(arg1) == 0)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_80_2 = sub_403490(&var_2c, 0x75ce25, nullptr)
            int32_t var_8_1 = 0
            sub_471d90(arg2, &var_2c, 0)
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            result = arg2
            break
        
        sub_46d0c0(arg1, arg3)
        eax_4 = arg1[1]
        
        if (eax_4 != edi_1)
            continue
    
    int32_t ecx_2 = arg1[1]
    int32_t ecx_3 = ecx_2 - arg1[2]
    int32_t edi_2
    
    if (ecx_2 - arg1[2] s>= 0 && (arg1[9] - arg1[8]) s>> 2 s> ecx_3)
        edi_2 = *(arg1[8] + (ecx_3 << 2))
    else
        edi_2 = 0xffffffff
    
    void var_64
    sub_46bbc0(arg1, &var_64, arg3)
    int32_t var_8_2 = 1
    int32_t var_30_1 = edi_2
    sub_4691b0(arg2, &var_64)
    sub_408940(&var_64)
    result = arg2
    break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
