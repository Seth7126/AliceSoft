// 函数: sub_4f0950
// 地址: 0x4f0950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735f23
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = sub_505050(arg1 + 0x84, arg2, arg3, arg4)

if (result.b != 0)
    int32_t var_8_1 = 0
    void* var_44
    sub_4055a0(arg3, sub_4175e0(result, arg2, &var_44, 0x765388), 0, 0xffffffff)
    int32_t var_8_2 = 0xffffffff
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    void* var_74
    char* eax_9 = sub_4be2e0(&var_74, (*(**(arg1 + 0x74) + 0xc))(eax_2))
    int32_t var_8_3 = 1
    
    if (*(eax_9 + 0x14) u>= 0x10)
        eax_9 = *eax_9
    
    char* var_90 = eax_9
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x765370, 0x17)
    var_8_3.b = 2
    char* eax_11 = sub_409240(&var_90, &var_2c, &var_44, &var_90)
    var_8_3.b = 3
    var_8_3.b = 4
    char var_5c
    sub_4055a0(arg3, sub_407820(eax_11, arg2, &var_5c, eax_11), 0, 0xffffffff)
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t var_8_4 = 0xffffffff
    int32_t var_60
    int32_t eax_19 = var_60
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (eax_19 u>= 0x10)
        eax_19 = sub_403160(var_74, eax_19 + 1, 1)
    
    int32_t var_8_5 = 5
    void* var_8c
    void* ebx
    ebx.b = (*(**(arg1 + 0x74) + 0x58))(sub_4175e0(eax_19, arg2, &var_8c, "*\t"), arg3, arg4) == 0
    char* var_78
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c, &var_78[1], 1)
    
    result.b = ebx.b == 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
