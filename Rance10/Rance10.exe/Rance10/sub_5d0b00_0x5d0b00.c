// 函数: sub_5d0b00
// 地址: 0x5d0b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74106e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_40 = arg3
int32_t var_60 = 0
int32_t var_8_1 = 0
EnterCriticalSection(*(arg1 + 4) + 4)
void** eax_6 = sub_432330(arg1 + 8, var_40)
void** edi_1 = *(arg1 + 8)
void** esi_1 = eax_6
char eax_8

if (esi_1 != edi_1)
    eax_8 = sub_412ca0(var_40, &esi_1[4])

if (esi_1 == edi_1 || eax_8 != 0)
    esi_1 = edi_1

int32_t* result
void arg_c

if (esi_1 == *(arg1 + 8))
    LeaveCriticalSection(*(arg1 + 4) + 4)
    int32_t* var_50
    int32_t* eax_14 = sub_5d1670(&arg_c, &var_50)
    int32_t* var_3c = nullptr
    SRWLOCK var_38
    __builtin_memset(&var_38, 0, 4)
    sub_4323a0(&var_3c, eax_14)
    SRWLOCK var_4c
    __seterrormode(&var_4c)
    var_8_1.b = 3
    int32_t* ecx_6 = var_50
    
    if (ecx_6 != 0)
        var_50 = nullptr
        (*(*ecx_6 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_4c)
    __Smtx_lock_shared(&var_38)
    int32_t* ebx
    ebx.b = var_3c != 0
    __Smtx_unlock_shared(&var_38)
    ebx.b ^= 1
    int32_t* result_1
    
    if (ebx.b != 0)
        result_1 = arg2
        *result_1 = 0
        result_1[1] = 0
        __seterrormode(&var_38)
        var_8_1.b = 4
        int32_t* ecx_7 = var_3c
        
        if (ecx_7 != 0)
            var_3c = nullptr
            (*(*ecx_7 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_38)
        int32_t var_8_3 = 5
        goto label_5d0ca3
    
    struct thread::CCriticalLock::VTable* var_5c = &thread::CCriticalLock::`vftable'
    void* var_54_1 = arg1
    EnterCriticalSection(*(arg1 + 4) + 4)
    char var_58_1 = 1
    var_8_1.b = 6
    void** esi_4 = var_40
    var_8_1.b = 7
    void var_34
    int32_t* eax_23
    void* ecx_11
    eax_23, ecx_11 = sub_5d2a40(sub_5d2750(&var_3c, esi_4, &var_34, &var_3c))
    int32_t* var_78_19 = eax_23
    void* var_7c_2 = &eax_23[4]
    sub_5d2aa0(arg1 + 8, &var_50, ecx_11)
    var_8_1.b = 6
    sub_5d0390(&var_34)
    
    if (var_4c.Ptr.b == 0)
        sub_5d1800(arg1 + 8, &var_40, esi_4)
        result_1 = arg2
        void** eax_29 = var_40
        bool cond:1_1 = eax_29 == *(arg1 + 8)
        *result_1 = 0
        result_1[1] = 0
        
        if (not(cond:1_1))
            sub_568810(result_1, &eax_29[0xa])
        
        sub_405f30(&var_5c)
        sub_431b10(&var_3c)
        _Init_atexit::~_Init_atexit(&arg_c)
    else
        result_1 = arg2
        *result_1 = 0
        result_1[1] = 0
        sub_568810(result_1, &var_50[0xa])
        LeaveCriticalSection(*(arg1 + 4) + 4)
        sub_431b10(&var_3c)
        int32_t var_8_4 = 8
    label_5d0ca3:
        
        if (arg4 != 0)
            (*(*arg4 + 0x10))(arg4 != &arg_c)
    
    result = result_1
else
    *arg2 = 0
    arg2[1] = 0
    sub_568810(arg2, &esi_1[0xa])
    LeaveCriticalSection(*(arg1 + 4) + 4)
    int32_t var_8_2 = 1
    
    if (arg4 != 0)
        (*(*arg4 + 0x10))(arg4 != &arg_c)
    
    result = arg2
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
