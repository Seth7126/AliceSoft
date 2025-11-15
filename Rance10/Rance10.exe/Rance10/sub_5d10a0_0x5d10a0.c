// 函数: sub_5d10a0
// 地址: 0x5d10a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7410d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
SRWLOCK var_44 = arg1
void** var_50 = arg3
int32_t var_58 = 0
int32_t var_8_1 = 0
EnterCriticalSection(*(arg1 + 4) + 4)
void** eax_5 = sub_432330(arg1 + 8, arg3)
void** esi_1 = *(arg1 + 8)
void** edi_1 = eax_5
char eax_7

if (edi_1 != esi_1)
    eax_7 = sub_412ca0(var_50, &edi_1[4])

if (edi_1 == esi_1 || eax_7 != 0)
    edi_1 = esi_1

int32_t* esi_3 = var_44 + 8
int32_t* result
void arg_c

if (edi_1 == *esi_3)
    SRWLOCK edi_2 = var_44
    LeaveCriticalSection(*(edi_2 + 4) + 4)
    int32_t* var_48
    int32_t* eax_13 = sub_5d1710(&arg_c, &var_48)
    int32_t var_3c = 0
    SRWLOCK var_38 = 0
    sub_5688b0(&var_3c, eax_13)
    __seterrormode(&var_44)
    var_8_1.b = 3
    int32_t* ecx_5 = var_48
    
    if (ecx_5 != 0)
        var_48 = nullptr
        int32_t edx_3 = ecx_5[1]
        ecx_5[1] -= 1
        (**ecx_5)(edx_3 - 1)
    
    ___crtSetUnhandledExceptionFilter(&var_44)
    __Smtx_lock_shared(&var_38)
    int32_t* ebx
    ebx.b = var_3c != 0
    __Smtx_unlock_shared(&var_38)
    ebx.b ^= 1
    int32_t* result_1
    
    if (ebx.b == 0)
        CRITICAL_SECTION* lpCriticalSection = *(edi_2 + 4) + 4
        struct thread::CCriticalLock::VTable* var_4c = &thread::CCriticalLock::`vftable'
        var_44 = edi_2
        EnterCriticalSection(lpCriticalSection)
        var_48.b = 1
        var_8_1.b = 5
        void** ebx_1 = var_50
        var_8_1.b = 6
        void var_34
        int32_t* eax_21
        void* ecx_10
        eax_21, ecx_10 = sub_5d2c00(sub_5d27a0(&var_3c, ebx_1, &var_34, &var_3c))
        int32_t* var_70_20 = eax_21
        void* var_74_2 = &eax_21[4]
        void** var_54
        sub_5d2c60(esi_3, &var_54, ecx_10)
        var_8_1.b = 5
        sub_5d15b0(&var_34)
        
        if (var_50.b != 0)
            result_1 = arg2
            sub_5d20f0(result_1, &var_54[0xa])
            LeaveCriticalSection(*(edi_2 + 4) + 4)
            sub_568430(&var_3c)
            int32_t var_8_4 = 7
            goto label_5d123c
        
        sub_5d1800(esi_3, &var_50, ebx_1)
        void** eax_27 = var_50
        
        if (eax_27 == *esi_3)
            *arg2 = 0
            arg2[1] = 0
            sub_405f30(&var_4c)
            sub_568430(&var_3c)
            _Init_atexit::~_Init_atexit(&arg_c)
            result = arg2
        else
            sub_5d20f0(arg2, &eax_27[0xa])
            sub_405f30(&var_4c)
            sub_568430(&var_3c)
            _Init_atexit::~_Init_atexit(&arg_c)
            result = arg2
    else
        result_1 = arg2
        *result_1 = 0
        result_1[1] = 0
        sub_568430(&var_3c)
        int32_t var_8_3 = 4
    label_5d123c:
        
        if (arg4 == 0)
            result = result_1
        else
            (*(*arg4 + 0x10))(arg4 != &arg_c)
            result = result_1
else
    *arg2 = 0
    arg2[1] = 0
    __seterrormode(&edi_1[0xb])
    sub_589d80(arg2, edi_1[0xa])
    ___crtSetUnhandledExceptionFilter(&edi_1[0xb])
    LeaveCriticalSection(*(var_44 + 4) + 4)
    int32_t var_8_2 = 1
    
    if (arg4 != 0)
        (*(*arg4 + 0x10))(arg4 != &arg_c)
    
    result = arg2
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
