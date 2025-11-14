// 函数: sub_5248d0
// 地址: 0x5248d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3080
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
void* var_1c = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_20 = 1
int32_t var_4 = 0
struct sealengine::CDetectPolygonMap::VTable** eax_5 = sub_69adc6(0x4c)
struct sealengine::CDetectPolygonMap::VTable** edi

if (eax_5 == 0)
    edi = nullptr
else
    edi = sub_5309d0(eax_5)

sub_530b20(edi, arg1 + 0x14)
char var_20_1 = 0
LeaveCriticalSection(*(arg1 + 8) + 4)
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0xc
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_14 = 1
var_4.b = 1
int32_t* ecx_2 = *(arg1 + 0x1c)

if (ecx_2 != 0)
    (**ecx_2)(1)
    *(arg1 + 0x1c) = 0

*(arg1 + 0x1c) = edi
int32_t result = LeaveCriticalSection(*(arg1 + 0x10) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
