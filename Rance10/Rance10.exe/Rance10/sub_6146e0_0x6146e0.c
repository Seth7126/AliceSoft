// 函数: sub_6146e0
// 地址: 0x6146e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743aa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_7fcbb8
int32_t var_80 = 0
void* var_98_2
int32_t var_94_2

if (arg2 u< (edi[0x78] - edi[0x77]) s>> 2)
    int32_t eax_13 = *(edi[0x77] + (arg2 << 2))
    
    if (eax_13 == 0)
        int32_t var_7c = arg2
        void* var_74
        sub_403360(&var_74, 0x76c118)
        int32_t var_8_2 = 2
        var_8_2.b = 3
        char var_5c
        sub_612230(edi, "RunFunction", sub_4351a0(&var_7c, &var_74, &var_5c, &var_7c))
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        int32_t var_60
        
        if (var_60 u< 0x10)
            goto label_6147c2
        
        int32_t var_90_5 = 1
        var_94_2 = var_60 + 1
        var_98_2 = var_74
        goto label_6147ba
    
    sub_616c00(edi, arg1, eax_13, 0xffffffff, arg3, arg4)
else
    int32_t var_78 = arg2
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76bac4, 0x29)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_44
    sub_612230(edi, "RunFunction", sub_4351a0(&var_78, &var_2c, &var_44, &var_78))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u< 0x10)
        goto label_6147c2
    
    int32_t var_90_2 = 1
    var_94_2 = var_18_1 + 1
    var_98_2 = var_2c.d
label_6147ba:
    sub_403160(var_98_2, var_94_2, 1)
label_6147c2:
    *arg1 = 0xffffffff
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
