// 函数: ??0?$WriteOnlyArray@E$00@Platform@@I$AAA@PAEI@Z
// 地址: 0x69a1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d926
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = *arg1

if (ecx != 0)
    bool cond:0_1 = ecx[1] != 1
    eax_3 = ecx[1]
    ecx[1] -= 1
    
    if (not(cond:0_1))
        int32_t* edx_1 = ecx[0x1e]
        
        if (edx_1 != 0)
            int32_t eax_5 = (**edx_1)(ecx, eax_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_5
        
        eax_3 = (**ecx)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
