// 函数: sub_553150
// 地址: 0x553150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a8eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_e0 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void var_d0
(*(*arg1 + 0x18))(sub_526a90(&var_d0, arg4))
int32_t var_8_2 = 0xffffffff
___dyn_tls_init@12(&var_d0)
int32_t* esi = arg1[0xb1]

if (esi == arg1[0xb2])
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

float ebx_1 = arg3

while (true)
    char eax_4
    eax_4, ebx_1 = sub_5505a0(*esi, arg2, ebx_1, arg5)
    
    if (eax_4 != 0)
        break
    
    esi = 4

fsbase->NtTib.ExceptionList = ExceptionList
return 1
