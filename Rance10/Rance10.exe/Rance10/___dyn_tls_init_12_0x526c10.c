// 函数: ___dyn_tls_init@12
// 地址: 0x526c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0xb8)

if (ecx != 0)
    int32_t esi_1 = ecx[1]
    ecx[1] -= 1
    result = (**ecx)(esi_1 - 1)
    *(arg1 + 0xb8) = 0

int32_t* ecx_1 = *(arg1 + 0xb4)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0xb4) = 0

int32_t* ecx_2 = *(arg1 + 0xbc)

if (ecx_2 != 0)
    int32_t ebx_1 = ecx_2[1]
    ecx_2[1] -= 1
    result = (**ecx_2)(ebx_1 - 1)
    *(arg1 + 0xbc) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
