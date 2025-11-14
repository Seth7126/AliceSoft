// 函数: sub_5fb830
// 地址: 0x5fb830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc2c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionRotate::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionRotate::VTable** var_10_1 = arg1
*arg1 = &viewtrans::CDXTransitionRotate::`vftable'{for `viewtrans::CDXTransitionType'}
int32_t var_4 = 0
int32_t* ecx = arg1[0x26]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x26] = 0

*arg1 = &viewtrans::CDXTransitionType::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
