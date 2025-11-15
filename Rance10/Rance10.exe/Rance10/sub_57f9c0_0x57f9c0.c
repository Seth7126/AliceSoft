// 函数: sub_57f9c0
// 地址: 0x57f9c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* edi = arg1[7]

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (**edi)(eax_2)
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 4))()

int32_t eax_7 = arg1[5]

if (eax_7 u>= 0x10)
    eax_7 = sub_403160(*arg1, eax_7 + 1, 1)

arg1[5] = 0xf
bool cond:1 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:1)
    *arg1 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7

char* eax_8 = *arg1
*eax_8 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
