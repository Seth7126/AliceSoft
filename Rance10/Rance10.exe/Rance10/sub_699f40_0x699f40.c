// 函数: sub_699f40
// 地址: 0x699f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_58
sub_431b80(&var_58, (*(*arg2 + 0x28))(eax_2))
int32_t var_8_1 = 0
char* edi = var_58
int32_t var_54
char* ecx_3 = var_54 - edi
char* var_30 = ecx_3
int32_t var_40 = 0
void* ebx

if ((*(*arg2 + 0x14))(edi, ecx_3, &var_40) == 0 || var_30 != var_40)
    (*(*arg2 + 4))()
    ebx.b = 0
else
    struct thread::CCriticalLock::VTable* const var_4c_1 = &thread::CCriticalLock::`vftable'
    EnterCriticalSection(*(arg1 + 0x58) + 4)
    char var_48_1 = 1
    var_8_1.b = 1
    int32_t* ecx_5 = *(arg1 + 0x18)
    
    if (ecx_5 == 0)
        (*(*arg2 + 4))()
        ebx.b = 1
    else
        var_30 = nullptr
        void* var_34 = nullptr
        char* var_38 = nullptr
        void* var_3c = nullptr
        
        if ((*(*ecx_5 + 0x2c))(ecx_5, 0, *(arg1 + 0x30), &var_30, &var_34, &var_38, &var_3c, 0)
                s>= 0)
            sub_700660(var_30, edi, var_34)
            char* edx_1 = var_38
            
            if (edx_1 != 0)
                sub_700660(edx_1, var_34 + edi, var_3c)
                edx_1 = var_38
            
            int32_t* eax_19 = *(arg1 + 0x18)
            
            if ((*(*eax_19 + 0x4c))(eax_19, var_30, var_34, edx_1, var_3c) s>= 0)
                (*(*arg2 + 4))()
                ebx.b = 1
            else
                (*(*arg2 + 4))()
                ebx.b = 0
        else
            sub_4073f0(0x76f95c)
            
            if (**(arg1 + 0xc) != 0)
                (*(*arg2 + 4))()
                ebx.b = 0
            else
                void var_2c
                sub_403360(&var_2c, "DirectSound")
                var_8_1.b = 2
                sub_6c52e0(&var_2c)
                var_8_1.b = 1
                sub_403320(&var_2c)
                **(arg1 + 0xc) = 1
                (*(*arg2 + 4))()
                ebx.b = 0
    
    LeaveCriticalSection(*(arg1 + 0x58) + 4)

int32_t var_50

if (edi != 0)
    sub_403160(edi, var_50 - edi, 1)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
