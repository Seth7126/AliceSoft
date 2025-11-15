// 函数: sub_55d280
// 地址: 0x55d280
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
int32_t ecx_3 = ___dyn_tls_init@12(&var_d0)
int32_t eax_4 = arg5

if (eax_4.b == 0)
    int32_t var_e4_3 = ecx_3
    int32_t eax_6 = sub_527c50(eax_4, arg3, arg2, arg4, arg1[0x25], arg1[0x26])
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

int32_t* i = arg1[0x27]

for (int32_t edi_1 = arg1[0x28]; i != edi_1; i = &i[1])
    if (sub_55ba70(*i, arg2, arg3, eax_4.b) != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    eax_4 = arg5

eax_4.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
