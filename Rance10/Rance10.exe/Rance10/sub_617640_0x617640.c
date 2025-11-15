// 函数: sub_617640
// 地址: 0x617640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743f48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t edi = *eax_3
arg1[0x74] = &eax_3[1]
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x4bda12f7, arg1[0x1f] - arg1[0x1e])
int32_t edx_1 = edx s>> 5
int32_t eax_9

if (edi u< (edx_1 u>> 0x1f) + edx_1)
    eax_9 = edi * 0x6c

int32_t result

if (edi u>= (edx_1 u>> 0x1f) + edx_1 || eax_9 == neg.d(arg1[0x1e]))
    int32_t result_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, 0x76ca90, 0x1c)
    int32_t var_8_2 = 0
    sub_612320(arg1, &var_44)
    result = result_1
    
    if (result u>= 0x10)
        int32_t var_70_4 = 1
        result = sub_403160(var_44.d, result + 1, 1)
else
    void** eax_11 = eax_9 + arg1[0x1e] + 4
    
    if (eax_11[5] u>= 0x10)
        eax_11 = *eax_11
    
    void** var_60 = eax_11
    int32_t result_2 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76cab0, 0x1e)
    int32_t var_8_1 = 1
    var_8_1.b = 2
    char var_5c
    sub_612320(arg1, sub_409240(&var_60, &var_2c, &var_5c, &var_60))
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    result = result_2
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (result u>= 0x10)
        int32_t var_70_2 = 1
        result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
