// 函数: sub_4a59b0
// 地址: 0x4a59b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x65) = 1
sub_4a5040(arg1)
char result

if (*(arg1 + 0x50) == 0)
    result = 1
    *(arg1 + 0x65) = 0
else if ((*(**(arg1 + 0x50) + 0x10))(eax_2) == 0 || *(arg1 + 0x50) == 0)
    result = 1
    *(arg1 + 0x65) = 0
else
    result = (*(**(arg1 + 0x50) + 0x1c))()
    
    if (result != 0)
        if (*(arg1 + 0x50) == 0)
            result = 1
            *(arg1 + 0x65) = 0
        else if ((*(**(arg1 + 0x50) + 0x20))() != 0)
            result = 1
            *(arg1 + 0x65) = 0
        else
            void var_2c
            sub_403360(&var_2c, "Direct3D")
            int32_t var_8_1 = 0
            sub_6c52e0(&var_2c)
            sub_403320(&var_2c)
            result = 0
            *(arg1 + 0x65) = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
