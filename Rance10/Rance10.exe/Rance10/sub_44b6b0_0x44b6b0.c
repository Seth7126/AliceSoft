// 函数: sub_44b6b0
// 地址: 0x44b6b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72aad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_28 = &thread::CCriticalLock::`vftable'
void* var_20 = arg1 + 8
EnterCriticalSection(*(arg1 + 0xc) + 4)
char var_24 = 1
int32_t var_8_1 = 0
int32_t* arg_4
void** ebx_1
int32_t* esi_1
int32_t* edi_1

if (*(arg1 + 0x14) != 0)
    esi_1 = *(arg1 + 0x10)
    int32_t* eax_7 = arg_4
    ebx_1 = *esi_1
    arg_4 = eax_7
    void* var_1c
    edi_1 = *sub_44b8e0(eax_7, &arg_4, &var_1c, ebx_1, esi_1)

int32_t* result

if (*(arg1 + 0x14) == 0 || edi_1 == esi_1)
    result = nullptr
else
    result = edi_1[8]
    
    if (edi_1 != ebx_1)
        sub_44b860(arg1 + 0x10, &edi_1[2])
        sub_44b7f0(arg1 + 0x10, &arg_4, edi_1)
    
    (**result)(eax_2)

LeaveCriticalSection(*(arg1 + 0xc) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
