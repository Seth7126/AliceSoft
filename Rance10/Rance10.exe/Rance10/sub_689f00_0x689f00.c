// 函数: sub_689f00
// 地址: 0x689f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp

if (arg1[3] != 0 && arg1[6] == (*(*arg2 + 0x10))(__security_cookie ^ &__saved_ebp)
        && arg1[7] == (*(*arg2 + 0x14))())
    void var_24
    int32_t* eax_7 = sub_68a690(&var_24, sub_689e40(arg1))
    int32_t var_1c = 0
    SRWLOCK var_18
    __builtin_memset(&var_18, 0, 4)
    sub_68a710(&var_1c, eax_7)
    int32_t var_8_1 = 0
    sub_68a600(&var_24)
    __Smtx_lock_shared(&var_18)
    int32_t* ebx_1
    ebx_1.b = var_1c != 0
    __Smtx_unlock_shared(&var_18)
    
    if (ebx_1.b != 0)
        int32_t* edi_1 = *(arg1[2] + 0x38)
        __Smtx_lock_shared(&var_18)
        int32_t esi_3 = var_1c
        __Smtx_unlock_shared(&var_18)
        (*(*edi_1 + 0xbc))(edi_1, esi_3, arg1[3])
        __Smtx_lock_shared(&var_18)
        int32_t esi_4 = var_1c
        __Smtx_unlock_shared(&var_18)
        
        if (sub_68a060(arg1, arg2, esi_4) != 0)
            sub_68a600(&var_1c)
            int32_t eax_11
            eax_11.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
    
    sub_68a600(&var_1c)
    int32_t eax_12
    eax_12.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_12

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
