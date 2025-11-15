// 函数: sub_435dc0
// 地址: 0x435dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* result

if (arg2 == 0)
    result.b = 0
else
    int32_t esi_1 = *(arg1 + 0x34)
    int32_t ebx_1 = *(arg1 + 0x38)
    int32_t eax_4 = (*(*arg2 + 0x10))(eax_2)
    int32_t eax_6
    
    if (eax_4 s>= esi_1)
        eax_6 = (*(*arg2 + 0x14))()
    
    if (eax_4 s< esi_1 || eax_6 s< ebx_1)
        void* var_2c
        sub_403360(&var_2c, 0x75dc70)
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        int16_t* var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        result.b = 0
    else
        int16_t* eax_8 = (*(*arg2 + 8))(0, 0)
        int32_t var_48_1 = (*(*arg2 + 0x1c))()
        result = sub_437920(arg3, eax_8)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
