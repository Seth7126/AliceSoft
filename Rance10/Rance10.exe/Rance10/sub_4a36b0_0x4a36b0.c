// 函数: sub_4a36b0
// 地址: 0x4a36b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731260
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
sub_499820(&arg1[0x9b], (*(*arg1 + 0x38))(arg1[4], __security_cookie ^ &__saved_ebp))

if (arg2 != 0)
    int32_t var_8_1 = 0
    void var_28
    sub_49e330(&arg1[-1], sub_49a220(&arg1[0x9b], &var_28))
    int32_t var_8_2 = 0xffffffff
    sub_417070(&var_28)
    
    if (arg3 != 0)
        int32_t* ecx_4 = data_7fcb34
        
        if (ecx_4 != 0)
            (*(*ecx_4 + 0x10))()

sub_49bdf0(&arg1[0xa0])
int32_t var_8_3 = 1
void* var_1c
int32_t result = sub_49a2e0(&arg1[0x9b], sub_49bbc0(&arg1[0xa0], &var_1c))
void* ecx_8 = var_1c
int32_t var_14

if (ecx_8 != 0)
    result = sub_403160(ecx_8, (var_14 - ecx_8) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
