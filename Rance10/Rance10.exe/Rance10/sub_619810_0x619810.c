// 函数: sub_619810
// 地址: 0x619810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cd30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = arg1[0x7f]
int32_t edx = *(arg1[0x7e] + (ecx << 2) - 4)
void* result = ecx - 1
int32_t var_48 = edx
arg1[0x7f] = result

if (edx != 0xffffffff)
    result = sub_621d30(&arg1[0x52], edx)
    
    if (result.b == 0)
        void* var_44
        sub_403360(&var_44, 0x76d0bc)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_2c
        sub_612320(arg1, sub_409350(&var_48, &var_44, &var_2c, &var_48))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        void* result_1
        result = result_1
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (result u>= 0x10)
            result = sub_403160(var_44, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
