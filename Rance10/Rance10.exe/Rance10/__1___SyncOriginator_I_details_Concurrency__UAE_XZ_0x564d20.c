// 函数: ??1?$_SyncOriginator@I@details@Concurrency@@UAE@XZ
// 地址: 0x564d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *arg2
int32_t edx = arg2[1]
*arg2 = 0
arg2[1] = 0
int32_t* ebx = arg1[1]
arg1[1] = edx
*arg1 = esi
int32_t var_8_1 = 0

if (ebx != 0)
    bool cond:0_1 = ebx[1] != 1
    ebx[1]
    ebx[1] -= 1
    
    if (not(cond:0_1))
        (**ebx)(eax_2)
        int32_t esi_1 = ebx[2]
        ebx[2] -= 1
        
        if (esi_1 == 1)
            (*(*ebx + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
