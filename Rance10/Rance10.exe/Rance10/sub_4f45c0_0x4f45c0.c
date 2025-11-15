// 函数: sub_4f45c0
// 地址: 0x4f45c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736050
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_4
int32_t esi = arg_4
int32_t var_54 = esi
void* result = sub_4f15e0(arg1 + 4)

if (result == 0)
    result.b = 0
else
    int32_t edx_1 = *(result + 8)
    
    if (esi s< edx_1 || *(result + 4) + edx_1 s<= esi)
        result.b = 0
    else
        result = *(*(result + 0xc) + ((esi - edx_1) << 2))
        
        if (result == 0)
            result.b = 0
        else
            result.b = *(result + 0x240)
            
            if (result.b == 0)
                result.b = 0
            else
                void* var_1c_1 = 0xf
                int32_t var_20_1 = 0
                char var_30 = 0
                sub_403490(&var_30, 0x7654c0, 0x50)
                int32_t var_8_1 = 0
                var_8_1.b = 1
                char var_48
                sub_45aae0(sub_409350(&arg_4, &var_30, &var_48, &arg_4))
                int32_t var_34
                
                if (var_34 u>= 0x10)
                    sub_403160(var_48.d, var_34 + 1, 1)
                
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                var_48 = 0
                
                if (var_1c_1 u>= 0x10)
                    sub_403160(var_30.d, var_1c_1 + 1, 1)
                
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
