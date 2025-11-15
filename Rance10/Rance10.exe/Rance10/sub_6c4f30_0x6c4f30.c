// 函数: sub_6c4f30
// 地址: 0x6c4f30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748c13
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 8) = arg2

if (arg1 + 0x24 != arg4)
    sub_417070(arg1 + 0x24)
    *(arg1 + 0x24) = *arg4
    *(arg1 + 0x28) = arg4[1]
    *(arg1 + 0x2c) = arg4[2]
    *arg4 = 0
    arg4[1] = 0
    arg4[2] = 0

bool cond:0 = data_7fcbdd == 0
*(arg1 + 0x44) = 0
int32_t result

if (cond:0)
    result = DialogBoxParamA(arg2, 0x96, arg3, sub_6cce00, arg1)
    *(arg1 + 4) = result
else
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    int32_t var_8_1 = 0
    var_8_1.b = 1
    void* var_60
    sub_45aae0(sub_4175e0(sub_403490(&var_30, ".============== CVMErrorDialog::Open ", 0x2d), 
        &var_30, &var_60, \n"))
    int32_t var_4c
    
    if (var_4c u>= 0x10)
        sub_403160(var_60, var_4c + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    void* var_78
    int32_t* eax_13 = sub_6c4e30(&var_78, arg1 + 0x24)
    int32_t var_8_3 = 2
    int32_t* eax_14 = sub_4175e0(eax_13, arg1 + 0xc, &var_60, "\n\n")
    var_8_3.b = 3
    char* eax_15 = sub_4177a0(eax_14, eax_14, &var_30, eax_13)
    var_8_3.b = 4
    var_8_3.b = 5
    void* var_48
    sub_45aae0(sub_4175e0(eax_15, eax_15, &var_48, U"\n"))
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    int32_t var_1c_2 = 0xf
    int32_t var_20_2 = 0
    var_30 = 0
    
    if (var_4c u>= 0x10)
        sub_403160(var_60, var_4c + 1, 1)
    
    int32_t var_8_4 = 0xffffffff
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    var_60.b = 0
    int32_t var_64
    
    if (var_64 u>= 0x10)
        sub_403160(var_78, var_64 + 1, 1)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48.b = 0
    int32_t var_8_5 = 6
    var_8_5.b = 7
    void* var_90
    sub_45aae0(sub_4175e0(sub_403490(&var_48, ".============== CVMErrorDialog::Open ", 0x2d), 
        &var_48, &var_90, \n"))
    int32_t var_7c
    
    if (var_7c u>= 0x10)
        sub_403160(var_90, var_7c + 1, 1)
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48, var_34_1 + 1, 1)
    
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
