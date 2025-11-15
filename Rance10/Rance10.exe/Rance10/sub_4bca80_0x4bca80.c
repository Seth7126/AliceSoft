// 函数: sub_4bca80
// 地址: 0x4bca80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7290a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1
int32_t* arg_4
sub_4275f0(&result_1, arg_4)
int32_t var_8_1 = 0
int32_t* result_2 = result_1
arg_4.b = 0
int32_t* var_18
int32_t eax_5 = (var_18 - result_2) s>> 2
sub_4bcbf0(eax_5, var_18, result_2, eax_5, &arg_4)
int32_t* ebx

if (result_2 == var_18)
label_4bcaf6:
    void** esi = arg1[2]
    int32_t edi_1 = arg1[3]
    
    if (esi == edi_1)
    label_4bcb19:
        ebx.b = 1
    else
        while (sub_4bc930(*esi, arg2, arg3) != 0)
            esi = &esi[1]
            
            if (esi == edi_1)
                goto label_4bcb19
        
        ebx.b = 0
else
    while (sub_4bcb50(arg1, *result_2) != 0)
        result_2 = &result_2[1]
        
        if (result_2 == var_18)
            goto label_4bcaf6
    
    ebx.b = 0

int32_t* result = result_1
int32_t var_14

if (result != 0)
    sub_403160(result, (var_14 - result) s>> 2, 4)
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
