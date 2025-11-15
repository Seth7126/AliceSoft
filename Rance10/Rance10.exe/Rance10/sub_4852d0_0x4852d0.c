// 函数: sub_4852d0
// 地址: 0x4852d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ecb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = &data_7fcc80
char* result = sub_563c60(&data_7fcc80)

if (result.b != 0)
    void* esi_1 = nullptr
    void* var_58 = nullptr
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    int32_t var_8_1 = 0
    void* var_2c
    char* var_18
    bool eax_4
    
    if (data_7fd464 != 0)
        var_8_1.b = 1
        eax_4 = sub_67edf0(sub_4079d0(result, &data_7fd454, &var_2c, &data_7fcc80), &var_58)
        var_8_1.b = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, &var_18[1], 1)
        
        esi_1 = var_58
    
    char* ebx
    int32_t* var_4c
    char var_44
    
    if (data_7fd464 == 0 || eax_4 == 0 || esi_1 == var_54_1)
        if (data_7fcc94 u>= 0x10)
            edi = data_7fcc80
        
        var_4c = edi
        sub_403360(&var_2c, 0x7600b4)
        var_8_1.b = 2
        var_8_1.b = 3
        sub_6c52e0(sub_409240(&var_4c, &var_2c, &var_44, &var_4c))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, &var_18[1], 1)
        
        ebx.b = 0
    else if (sub_4854b0(arg1, &var_58).b != 0)
        esi_1 = var_58
        ebx.b = 1
    else
        if (data_7fcc94 u>= 0x10)
            edi = data_7fcc80
        
        var_4c = edi
        sub_403360(&var_2c, 0x760088)
        var_8_1.b = 4
        var_8_1.b = 5
        sub_6c52e0(sub_409240(&var_4c, &var_2c, &var_44, &var_4c))
        sub_403320(&var_44)
        sub_403320(&var_2c)
        esi_1 = var_58
        ebx.b = 0
    
    if (esi_1 != 0)
        sub_403160(esi_1, var_50_1 - esi_1, 1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
