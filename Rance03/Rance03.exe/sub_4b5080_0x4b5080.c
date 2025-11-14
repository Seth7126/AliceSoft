// 函数: sub_4b5080
// 地址: 0x4b5080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd841
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IEventObserver::partsengine::CGUIMessageList::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEventObserver::partsengine::CGUIMessageList::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIMessageList::`vftable'{for `IEventObserver'}
int32_t var_4 = 2
sub_4b51e0(&arg1[1])
sub_4b51e0(&arg1[4])

if (arg1[0xc] u>= 0x10)
    j__free(arg1[7])

arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
int32_t eax_3 = arg1[4]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

int32_t result = arg1[1]

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
