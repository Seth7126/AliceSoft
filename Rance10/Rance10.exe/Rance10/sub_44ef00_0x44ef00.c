// 函数: sub_44ef00
// 地址: 0x44ef00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b06f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcb48

if (ecx != 0)
    int32_t __saved_ebp
    (*(*ecx + 4))(__security_cookie ^ &__saved_ebp, arg1)
    data_7fcb48 = 0

struct common::SuicideRefCounter<class IInterface>::cgmanager::CCGManager::VTable** eax_4 =
    sub_6e810c(0x70)
struct common::SuicideRefCounter<class IInterface>::cgmanager::CCGManager::VTable** var_14_1 = eax_4
int32_t var_8_1 = 0
data_7fcb48 = sub_44ba70(eax_4)
struct common::SuicideRefCounter<class IInterface>::cgmanager::CCGManager::VTable** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
