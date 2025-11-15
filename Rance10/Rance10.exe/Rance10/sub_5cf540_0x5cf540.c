// 函数: sub_5cf540
// 地址: 0x5cf540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740e58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = *arg3
int32_t* var_58 = arg3
int32_t var_64 = 0
int32_t* result

if ((*(edx + 0x24))(eax_2) == 0)
label_5cf784:
    *arg2 = 0
    result = arg2
    arg2[1] = 0
else
    int32_t eax_5 = (*(*arg4 + 0x10))()
    int32_t eax_6 = (*(*arg3 + 0x10))()
    int32_t eax_8
    int32_t eax_9
    
    if (eax_6 == eax_5)
        eax_8 = (*(*arg4 + 0x14))()
        eax_9 = (*(*arg3 + 0x14))()
    
    if (eax_6 != eax_5 || eax_9 != eax_8)
        var_58 = (*(*arg3 + 0x10))()
        void* var_48
        sub_403360(&var_48, 0x76a71c)
        int32_t var_8_2 = 0
        var_8_2.b = 1
        char var_30
        sub_5e01e0(sub_4b0f20(&var_58, &var_48, &var_30, &var_58, 
            (*(*arg3 + 0x14))((*(*arg4 + 0x10))((*(*arg4 + 0x14))()))))
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            sub_403160(var_30.d, var_1c + 1, 1)
        
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        var_30 = 0
        int32_t var_34
        
        if (var_34 u>= 0x10)
            sub_403160(var_48, var_34 + 1, 1)
        
        goto label_5cf784
    
    __Smtx_lock_shared(arg1 + 0x20)
    int32_t* edi_2 = *(arg1 + 0x1c)
    __Smtx_unlock_shared(arg1 + 0x20)
    int32_t* ebx_1 = var_58
    void var_6c
    int32_t* eax_15 =
        sub_432270(&var_6c, (*(*edi_2 + 8))((*(*ebx_1 + 0x10))((*(*ebx_1 + 0x14))(0x20))))
    int32_t* var_50 = nullptr
    SRWLOCK var_4c
    __builtin_memset(&var_4c, 0, 4)
    sub_4323a0(&var_50, eax_15)
    int32_t var_8_1 = 2
    sub_431b10(&var_6c)
    __Smtx_lock_shared(&var_4c)
    ebx_1.b = var_50 != 0
    __Smtx_unlock_shared(&var_4c)
    char eax_17
    int32_t ecx_13
    
    if (ebx_1.b != 0)
        __Smtx_lock_shared(&var_4c)
        eax_17, ecx_13 = sub_5cfc10(__Smtx_unlock_shared(&var_4c), var_58, var_50, *(arg1 + 0x24))
    
    if (ebx_1.b == 0 || eax_17 == 0)
        *arg2 = 0
        arg2[1] = 0
        sub_431b10(&var_50)
        result = arg2
    else
        int32_t var_84_11 = *(arg1 + 0x24)
        int32_t var_88_1 = ecx_13
        int32_t* eax_18 = sub_431af0(&var_50)
        char eax_19 = sub_5cfcc0(eax_18, arg4, eax_18, var_84_11)
        *arg2 = 0
        arg2[1] = 0
        
        if (eax_19 == 0)
            sub_431b10(&var_50)
            result = arg2
        else
            sub_4323a0(arg2, &var_50)
            sub_431b10(&var_50)
            result = arg2

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
