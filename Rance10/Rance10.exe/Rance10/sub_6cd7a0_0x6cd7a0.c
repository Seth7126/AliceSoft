// 函数: sub_6cd7a0
// 地址: 0x6cd7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (esi[4].b == 0)
    result.b = 1
else
    int32_t* ecx = *esi
    
    if (ecx != 0)
        result = (*(*ecx + 0x4c))(ecx)
    
    if (ecx == 0 || result s>= 0)
        esi[4].b = 0
        result.b = 1
    else
        void var_2c
        sub_403360(&var_2c, "DirectDraw")
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        sub_403320(&var_2c)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
