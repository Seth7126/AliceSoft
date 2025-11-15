// 函数: sub_4756c0
// 地址: 0x4756c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *(arg1 + 0x20)

for (int32_t edi = *(arg1 + 0x24); i != edi; i = &i[1])
    void* ecx = *i
    
    if (*(ecx + 0x1c) == 0)
        int32_t var_8_1 = 0
        void* var_2c
        sub_431bd0(arg2, sub_46de30(ecx, &var_2c))
        int32_t var_8_2 = 0xffffffff
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        result = result_1
        
        if (result u>= 0x10)
            result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
