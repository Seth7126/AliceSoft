// 函数: sub_615220
// 地址: 0x615220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743ba0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t edx = *eax_3
arg1[0x74] = &eax_3[1]
int32_t edi = arg1[0x18]
int32_t ecx = arg1[0x19]
int32_t var_60 = edx
int32_t eax_5

if (edi != ecx)
    eax_5 = arg1[0x1b]

int32_t result
char var_2c
int32_t var_18

if (edi == ecx || eax_5 == arg1[0x1c] || edx u>= (ecx - edi) s>> 2
        || eax_5 == neg.d(*(edi + (edx << 2))))
    int32_t result_2 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, 0x76bef8, 0x30)
    int32_t var_8_4 = 0
    var_8_4.b = 1
    sub_612320(arg1, sub_409350(&var_60, &var_44, &var_2c, &var_60))
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    result = result_2
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (result u>= 0x10)
        int32_t var_70_7 = 1
        result = sub_403160(var_44.d, result + 1, 1)
else
    sub_403360(&var_2c, eax_5 + *(edi + (edx << 2)))
    int32_t var_8_1 = 2
    char* var_70_1 = &var_2c
    int32_t eax_7 = sub_621930(&arg1[0x52])
    int32_t var_8_2 = 0xffffffff
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    if (eax_7 s>= 0)
        result = sub_405d30(&arg1[0x7d], eax_7)
    else
        void* var_5c
        sub_403360(&var_5c, 0x76be9c)
        int32_t var_8_3 = 3
        sub_612320(arg1, &var_5c)
        int32_t result_1
        result = result_1
        
        if (result u>= 0x10)
            int32_t var_70_3 = 1
            result = sub_403160(var_5c, result + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
