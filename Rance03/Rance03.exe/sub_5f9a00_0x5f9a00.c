// 函数: sub_5f9a00
// 地址: 0x5f9a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc3c3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionPolyExplosion::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionPolyExplosion::VTable** var_10_1 = arg1
*arg1 = &viewtrans::CDXTransitionPolyExplosion::`vftable'{for `viewtrans::CDXTransitionType'}
int32_t var_4 = 1
int32_t* ecx = arg1[0x1a]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x1a] = 0

int32_t* ecx_1 = arg1[0x19]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x19] = 0

int32_t result = arg1[0x15]
arg1[0x16] = result

if (result != 0)
    result = j__free(result)
    arg1[0x15] = 0
    arg1[0x16] = 0
    arg1[0x17] = 0

*arg1 = &viewtrans::CDXTransitionType::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
