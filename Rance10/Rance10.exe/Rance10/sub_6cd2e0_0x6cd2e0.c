// 函数: sub_6cd2e0
// 地址: 0x6cd2e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748f58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*arg1 != 0)
    result.b = 1
else
    void* var_2c
    
    if (CoCreateInstance(&data_752a94, 0, CLSCTX_INPROC_SERVER, &data_752aa4, arg1) s>= 0)
        int32_t* eax_5 = *arg1
        
        if ((*(*eax_5 + 0x48))(eax_5, 0) s>= 0)
            *(arg1 + 0x11) = 1
            arg1[2] = arg1[1]
            int32_t* eax_8 = *arg1
            
            if ((*(*eax_8 + 0x20))(eax_8, 0, 0, arg1, sub_6cd140) s>= 0)
                result.b = 1
            else
                void var_44
                sub_403360(&var_44, 0x79a230)
                int32_t var_8_3 = 2
                sub_6c52e0(&var_44)
                sub_403320(&var_44)
                result.b = 0
        else
            sub_403360(&var_2c, "IDirectDraw2::Initialize()")
            int32_t var_8_2 = 1
            sub_6c52e0(&var_2c)
            sub_403320(&var_2c)
            result.b = 0
    else
        sub_403360(&var_2c, "DirectDraw")
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        struct _EXCEPTION_REGISTRATION_RECORD** var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
