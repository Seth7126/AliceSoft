// 函数: sub_590590
// 地址: 0x590590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c82c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_3c = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x80) + 4)
char var_38 = 1
int32_t var_4 = 0
void** result_2 = sub_417ed0(arg1 + 0xd8, arg2)
char eax_9

if (result_2 != *(arg1 + 0xd8))
    eax_9 = sub_40c3a0(arg2, &result_2[4])

if (result_2 == *(arg1 + 0xd8) || eax_9 != 0)
    result_1 = *(arg1 + 0xd8)
else
    result_1 = result_2

void** result_3 = result_1
void** result

if (result_3 == *(arg1 + 0xd8))
    result_1 = nullptr
    char eax_11 = sub_58f6d0(arg1, arg2, &result_1)
    
    if (eax_11 != 0)
        result = result_1
    
    if (eax_11 != 0 && result != 0)
        var_4.b = 1
        int32_t var_30
        int32_t* eax_14
        void* ecx_4
        eax_14, ecx_4 = sub_461410(sub_4702a0(&result_1, arg2, &var_30, &result_1))
        int32_t* var_5c_6 = eax_14
        void* var_60_3 = &eax_14[4]
        sub_428520(arg1 + 0xd8, &result_1, ecx_4)
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            j__free(var_30)
    else
        result = nullptr
else
    result = result_3[0xa]

LeaveCriticalSection(*(arg1 + 0x80) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
