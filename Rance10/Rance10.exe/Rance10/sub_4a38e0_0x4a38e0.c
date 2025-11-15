// 函数: sub_4a38e0
// 地址: 0x4a38e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7312d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x2b8)
int32_t var_7c = 0
int32_t* eax_4

if (ecx != 0)
    eax_4 = (**ecx)(0x760e3c)

if (ecx == 0 || eax_4 == 0)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
else
    void* var_78
    sub_403360(&var_78, "Manual")
    int32_t var_8_1 = 0
    char var_60
    int32_t* eax_5 = sub_404f20(&var_60, &var_78)
    var_8_1.b = 1
    char var_48
    void* eax_7 = sub_403360(&var_48, (**eax_4)(eax_2))
    var_8_1.b = 2
    char var_30[0x10]
    int32_t* eax_8 = sub_4177a0(eax_7, eax_7, &var_30, eax_5)
    var_8_1.b = 3
    sub_4176f0(eax_8.b, eax_8, arg2, "index.html")
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30[0].d, var_1c + 1, 1)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30[0] = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_4c
    
    if (var_4c u>= 0x10)
        sub_403160(var_60.d, var_4c + 1, 1)
    
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    var_60 = 0
    int32_t var_64
    
    if (var_64 u>= 0x10)
        sub_403160(var_78, var_64 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
