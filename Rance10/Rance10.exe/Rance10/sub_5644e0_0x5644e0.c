// 函数: sub_5644e0
// 地址: 0x5644e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bcb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
struct thread::CCriticalLock::VTable* const var_20 = &thread::CCriticalLock::`vftable'
void* var_18 = arg1 + 8
EnterCriticalSection(*(arg1 + 0xc) + 4)
char var_1c = 1
int32_t var_8_1 = 0
void* eax_5 = *(arg1 + 0x18)
int32_t* result

if (eax_5 != 0)
    void* var_2c
    sub_564a30(&var_2c, eax_5 + 0x3c)
    var_8_1.b = 1
    char var_1c_1 = 0
    LeaveCriticalSection(*(arg1 + 0xc) + 4)
    result = arg2
    sub_564a30(result, &var_2c)
    void* edi_1 = var_2c
    int32_t var_24
    
    if (edi_1 != 0)
        sub_403160(edi_1, (var_24 - edi_1) s/ 0xc, 0xc)
else
    result = arg2
    *result = eax_5
    result[1] = eax_5
    result[2] = eax_5
    LeaveCriticalSection(*(arg1 + 0xc) + 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
