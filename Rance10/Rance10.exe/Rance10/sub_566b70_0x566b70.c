// 函数: sub_566b70
// 地址: 0x566b70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0 || arg2 s>= (*(arg1 + 0x58) - *(arg1 + 0x54)) s>> 3)
    result.b = 0
else
    int32_t* edi_1 = *(arg1 + 0x54) + (arg2 << 3)
    __Smtx_lock_shared(&edi_1[1])
    void* edi_2 = *edi_1
    __Smtx_unlock_shared(&edi_1[1])
    
    if (edi_2 == 0)
        result.b = 0
    else
        int32_t eax_6 = *(edi_2 + 0x144)
        
        if (arg3 s<= 0)
            sub_5c4d50(edi_2 + 0x10, arg3)
            sub_566cf0(arg1)
            result.b = 1
        else if (sub_566320(arg1) != 0)
            sub_5c4d50(edi_2 + 0x10, arg3)
            
            if (eax_6 s> 0)
                result.b = 1
            else
                sub_566c70(arg1)
                result.b = 1
        else
            void var_2c
            sub_403360(&var_2c, 0x767c88)
            int32_t var_8_1 = 0
            sub_5e01e0(&var_2c)
            sub_403320(&var_2c)
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
