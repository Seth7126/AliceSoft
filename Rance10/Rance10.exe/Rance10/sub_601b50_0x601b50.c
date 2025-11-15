// 函数: sub_601b50
// 地址: 0x601b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_601c30(arg1)
char result = sub_6015f0(*arg1)

if (result != 0)
    void* ecx_1 = data_7fcbb0
    
    if (ecx_1 != 0)
        result = sub_621db0(ecx_1, arg1[2])

*arg1 = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
return result
