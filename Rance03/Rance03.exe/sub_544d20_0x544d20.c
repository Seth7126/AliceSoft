// 函数: sub_544d20
// 地址: 0x544d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c479b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CInstanceView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CInstanceView::VTable** var_10_1 = arg1
*arg1 = &sealengine::CInstanceView::`vftable'
int32_t var_4 = 0
sub_544db0(arg1)

if (arg1[0x10] u>= 0x10)
    j__free(arg1[0xb])

arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
