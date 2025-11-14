// 函数: sub_47e7a0
// 地址: 0x47e7a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba2f9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CEventObserverBase::partsengine::CComponentSet::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CEventObserverBase::partsengine::CComponentSet::VTable** var_10_1 = arg1
*arg1 = &partsengine::CComponentSet::`vftable'{for `partsengine::CEventObserverBase'}
int32_t var_4 = 3

for (int32_t* i = arg1[0xa]; i != arg1[0xb]; i = &i[1])
    (*(**i + 4))(eax_2)

arg1[0x11] = &partsengine::CIbisInputWrapper::`vftable'
int32_t eax_4 = arg1[0xe]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

int32_t eax_5 = arg1[0xa]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

*arg1 = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
arg1[1] = &partsengine::CEventSubject::`vftable'
arg1[3] = arg1[2]
int32_t eax_7 = arg1[6]

if (eax_7 != 0)
    j__free(eax_7)
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

int32_t result = arg1[2]

if (result != 0)
    result = j__free(result)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
