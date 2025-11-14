// 函数: sub_5e87d0
// 地址: 0x5e87d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x254)
var_78 = 0
int32_t* eax_6

if (ecx != 0)
    eax_6 = (**ecx)(0x6eb708)

if (ecx == 0 || eax_6 == 0)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
else
    void* var_2c
    sub_401f60(&var_2c, "Manual")
    int32_t var_4 = 0
    char var_5c[0x10]
    int32_t* eax_7 = sub_4028a0(&var_5c, &var_2c)
    var_4.b = 1
    char var_74
    void* eax_9 = sub_401f60(&var_74, (**eax_6)(eax_4))
    var_4.b = 2
    char var_44
    int32_t* eax_10 = sub_410a20(eax_9, eax_9, &var_44, eax_7)
    var_4.b = 3
    sub_410a80(eax_10.b, eax_10, arg2, "index.html")
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44.d)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_60
    
    if (var_60 u>= 0x10)
        j__free(var_74.d)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        j__free(var_5c[0].d)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c[0] = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return arg2
