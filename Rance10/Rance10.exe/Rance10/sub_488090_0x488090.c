// 函数: sub_488090
// 地址: 0x488090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSoundChannel::VTable** result

if (arg3 != 0 && arg4 s> 0)
    char* var_48_1 = arg3
    struct kiwi::CSoundChannel::VTable** edi_1 = sub_47fc30(&arg1[0x1e], arg2)
    
    if (edi_1 == 0)
        result.b = 0
    else
        void var_2c
        sub_403360(&var_2c, 0x75ce9f)
        int32_t var_8_1 = 0
        int32_t var_8_2 = 0xffffffff
        int128_t* ebx_1
        ebx_1.b = sub_489260(edi_1, arg3, arg4, &var_2c) == 0
        sub_403320(&var_2c)
        
        if (ebx_1.b != 0)
            result.b = 0
        else
            (*(edi_1[1]->vFunc_0 + 0x44))(arg5)
            int32_t var_48_4 = 0xffffffff
            long double x87_r0
            sub_4864e0(arg1[0x27], x87_r0, edi_1)
            sub_4893f0(edi_1, 0, 0)
            result = (*(edi_1[1]->vFunc_0 + 0x10))(eax_2)
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
