// 函数: sub_564150
// 地址: 0x564150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bc80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
struct thread::CCriticalLock::VTable* const var_2c = &thread::CCriticalLock::`vftable'
void* var_24 = arg1
EnterCriticalSection(*(arg1 + 4) + 4)
char var_28 = 1
var_8_1.b = 1
int32_t* esi = *(arg1 + 0x10)
int32_t* i = *esi
int32_t* i_1 = i

for (; i != esi; i = i_1)
    sub_564a90(&var_20, &i[5])
    sub_429080(&i_1)

char var_28_1 = 0
LeaveCriticalSection(*(arg1 + 4) + 4)
int32_t ecx_3 = sub_565130(&i_1, &var_20)
int32_t* i_2 = i_1
void* edi = var_20
int32_t var_44 = ecx_3
Concurrency::details::Etw::Etw(edi, var_1c)
EnterCriticalSection(*(arg1 + 0xc) + 4)
int32_t* i_6

if (arg1 + 0x18 == &i_1)
    i_6 = i_1
else
    int32_t* i_5 = *(arg1 + 0x18)
    i_6 = nullptr
    int32_t* i_4 = i_1
    i_1 = i_5
    *(arg1 + 0x18) = i_4
    
    if (i_5 != 0)
        sub_564e60(i_5)
        int32_t var_40_4 = 0x48
        operator new(i_1)

int32_t result
int32_t ecx_5
result, ecx_5 = LeaveCriticalSection(*(arg1 + 0xc) + 4)

if (i_6 != 0)
    sub_564e60(i_6)
    int32_t var_40_6 = 0x48
    result, ecx_5 = operator new(i_6)

if (edi != 0)
    int32_t* i_3 = i_1
    int32_t var_44_3 = ecx_5
    Concurrency::details::Etw::Etw(edi, edi)
    result = sub_403160(edi, (var_18 - edi) s>> 3, 8)

fsbase->NtTib.ExceptionList = ExceptionList
return result
