// 函数: sub_6cc350
// 地址: 0x6cc350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748ee4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_6c = arg1
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_5c

if (sub_69ded0(&ExceptionList, *(arg1 + 8), &var_5c, 8, 0xf, 8, 0, "1.2.11") != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** eax_6 = sub_6e810c(0x14)
struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** var_14 = eax_6
__builtin_memset(eax_6, 0, 0x14)
eax_6[1] = 1
*eax_6 = &common::CIMemory::`vftable'{for `common::SuicideRefCounter<class IMemory>'}
eax_6[2] = 0
eax_6[3] = 0
eax_6[4] = 0
int32_t* var_24
int32_t* eax_7 = sub_432270(&var_24, eax_6)
int32_t* var_1c = nullptr
SRWLOCK var_18
__builtin_memset(&var_18, 0, 4)
sub_4323a0(&var_1c, eax_7)
int32_t var_8_1 = 0
SRWLOCK var_20
__seterrormode(&var_20)
var_8_1.b = 1
int32_t* ecx_5 = var_24

if (ecx_5 != 0)
    var_24 = nullptr
    (*(*ecx_5 + 4))(eax_2)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_20)
__Smtx_lock_shared(&var_18)
int32_t* esi = var_1c
__Smtx_unlock_shared(&var_18)
int32_t result

if ((*(*esi + 8))((arg3 << 1) + 0x400) != 0)
    __Smtx_lock_shared(&var_18)
    int32_t* esi_1 = var_1c
    __Smtx_unlock_shared(&var_18)
    int32_t var_50_1 = (*(*esi_1 + 0x18))(eax_2)
    __Smtx_lock_shared(&var_18)
    int32_t* esi_2 = var_1c
    __Smtx_unlock_shared(&var_18)
    int32_t var_4c_1 = (*(*esi_2 + 0x14))()
    var_5c = arg2
    int32_t var_58_1 = arg3
    int32_t eax_19 = sub_69e2a0(&var_5c, 4)
    
    if (eax_19 == 1 || eax_19 == 0)
        __Smtx_lock_shared(&var_18)
        int32_t* esi_3 = var_1c
        __Smtx_unlock_shared(&var_18)
        int32_t* ecx_13 = &var_5c
        int32_t var_48
        
        if ((*(*esi_3 + 0xc))(var_48) != 0)
            if (sub_69eb60(ecx_13) == 0)
                result = sub_431ac0(&var_1c)
            else
                result = 0
        else
            sub_69eb60(ecx_13)
            result = 0
    else
        sub_69eb60(&var_5c)
        result = 0
else
    sub_69eb60(&var_5c)
    result = 0

__seterrormode(&var_18)
int32_t var_8_2 = 2
int32_t* ecx_15 = var_1c

if (ecx_15 != 0)
    var_1c = nullptr
    (*(*ecx_15 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
