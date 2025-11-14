// 函数: sub_491040
// 地址: 0x491040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7bab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatKeyDataGraphic::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatKeyDataGraphic::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatKeyDataGraphic::`vftable'{for `IInterface'}
int32_t var_4 = 0
sub_491260(arg1)

if (arg1[7] u>= 0x10)
    j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
