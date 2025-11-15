// 函数: sub_6966d0
// 地址: 0x6966d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747e58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_28

if (*(arg1 + 0x14) != 0)
    struct thread::CCriticalLock::VTable* const var_74_1 = &thread::CCriticalLock::`vftable'
    EnterCriticalSection(*(arg1 + 0x80) + 4)
    char var_70_1 = 1
    int32_t var_8_1 = 0
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx != 0)
        (*(*ecx + 8))(ecx)
        *(arg1 + 0x18) = 0
    
    int32_t var_8_2 = 0xffffffff
    LeaveCriticalSection(*(arg1 + 0x80) + 4)
    int32_t* ecx_1 = *(arg1 + 0x44)
    int16_t var_28 = 1
    int16_t eax_10 = (*(*ecx_1 + 0xc))(eax_2)
    int32_t eax_13 = (*(**(arg1 + 0x44) + 0x10))()
    int16_t eax_16 = (*(**(arg1 + 0x44) + 0x1c))()
    int16_t var_1a_1 = eax_16
    int128_t var_64
    __builtin_memset(&var_64, 0, 0x24)
    int16_t var_18_1 = 0
    int32_t eax_19
    int32_t edx_1
    edx_1:eax_19 = sx.q(zx.d(eax_16) * zx.d(eax_10))
    var_64.d = 0x24
    var_64:4.d = 0x18088
    int16_t eax_21 = ((eax_19 + (edx_1 & 7)) s>> 3).w
    int16_t var_1c_1 = eax_21
    int32_t eax_23 = zx.d(eax_21) * eax_13
    struct thread::CCriticalLock::VTable* const var_34_1 = &thread::CCriticalLock::`vftable'
    int32_t var_20_1 = eax_23
    *(arg1 + 0x10) = eax_23
    var_64:8.d = eax_23
    int128_t var_54
    var_54.d = &var_28
    void* var_2c_1 = arg1 + 0x7c
    EnterCriticalSection(*(arg1 + 0x80) + 4)
    char var_30_1 = 1
    int32_t var_8_3 = 1
    int32_t* eax_27 = *(arg1 + 0x14)
    eax_28 = (*(*eax_27 + 0xc))(eax_27, &var_64, arg1 + 0x18, 0)
    int32_t var_8_4 = 0xffffffff
    LeaveCriticalSection(*(arg1 + 0x80) + 4)

struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x14) == 0 || eax_28 == 0)
    result.b = 1
else
    if (**(arg1 + 0xc) == 0)
        void var_40
        sub_403360(&var_40, "DirectSound")
        int32_t var_8_5 = 2
        sub_6c52e0(&var_40)
        sub_403320(&var_40)
        **(arg1 + 0xc) = 1
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
