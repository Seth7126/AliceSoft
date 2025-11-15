// 函数: sub_4c1450
// 地址: 0x4c1450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x7625b8, 0x25)
int32_t var_8_1 = 0
int32_t var_30 = 0
void** var_34
sub_494190(&var_34, &var_30)
void** eax_3 = var_34
int32_t result

if (eax_3 == *data_7fcb84)
    result = 0
else
    void* ecx_2 = eax_3[5]
    
    if (ecx_2 == 0)
        result = 0
    else
        char* edx_1 = &var_2c
        
        if (var_18 u>= 0x10)
            edx_1 = var_2c.d
        
        int32_t* eax_5 = (*(*(ecx_2 + 4) + 0x2c))(edx_1)
        
        if (eax_5 == 0)
            result = 0
        else
            result = (*(*eax_5 + 0xc))(arg1, 0)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
