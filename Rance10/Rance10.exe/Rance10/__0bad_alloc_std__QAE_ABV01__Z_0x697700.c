// 函数: ??0bad_alloc@std@@QAE@ABV01@@Z
// 地址: 0x697700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg1

if (ecx != 0)
    int32_t eax_3 = ecx[1]
    ecx[1] -= 1
    result = eax_3 - 1
    
    if (eax_3 == 1)
        result = (*(*ecx + 4))(eax_2)

*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
