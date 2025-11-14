// 函数: sub_520ed0
// 地址: 0x520ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2e20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_78 = 0

if (data_75d534 == 0)
label_521058:
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
else
    void* var_94_1 = arg1
    int32_t* eax_5 = sub_6203f0()
    
    if (eax_5 == 0)
        goto label_521058
    
    int32_t* eax_6 = (**eax_5)(0x6e3200)
    
    if (eax_6 == 0)
        goto label_521058
    
    int32_t* eax_8 = (**eax_5)(0x6e31f0)
    
    if (eax_8 == 0)
        goto label_521058
    
    int32_t var_2c
    sub_401f60(&var_2c, (*(*eax_8 + 0x18))(eax_4))
    int32_t var_4 = 0
    char var_5c[0x10]
    char* eax_11 = sub_4028a0(&var_5c, &var_2c)
    var_4.b = 1
    char var_74
    char* eax_13 = sub_401f60(&var_74, (*(*eax_6 + 8))())
    var_4.b = 2
    char var_44
    char* eax_14 = sub_410a20(eax_13, eax_13, &var_44, eax_11)
    var_4.b = 3
    sub_410ad0(eax_14, eax_14, arg2, arg1 + 4)
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
sub_69a5bc(eax_2 ^ &var_7c)
return arg2
