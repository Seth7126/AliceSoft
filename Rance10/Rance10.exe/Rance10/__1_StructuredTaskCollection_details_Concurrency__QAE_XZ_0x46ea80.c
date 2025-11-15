// 函数: ??1_StructuredTaskCollection@details@Concurrency@@QAE@XZ
// 地址: 0x46ea80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d6d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
int32_t* arg_4
sub_46d750(arg_4, &var_1c)
int32_t* edi = var_1c
void* const result

if (edi == var_18)
    result = nullptr
else
    void* eax_3 = sub_46eb40(arg1, edi)
    
    if (eax_3 == 0 || *(eax_3 + 0x34) != 6)
        result = nullptr
    else
        sub_46f1b0(&var_1c, &arg_4, edi)
        result = *(eax_3 + 0x9c)
        
        if (var_1c != var_18)
            result = sub_475800(result, &var_1c)

sub_417070(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
