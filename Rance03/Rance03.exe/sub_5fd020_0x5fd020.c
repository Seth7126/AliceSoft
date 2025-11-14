// 函数: sub_5fd020
// 地址: 0x5fd020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc463
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionStretchLR::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionStretchLR::VTable** var_10_1 = arg1
*arg1 = &viewtrans::CDXTransitionStretchLR::`vftable'{for `viewtrans::CDXTransitionType'}
int32_t var_4 = 1
int32_t* ecx = arg1[9]
arg1[8] = &viewtrans::CVertexBuffer::`vftable'

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[9] = 0

arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
var_4.b = 0
int32_t* ecx_1 = arg1[3]
arg1[2] = &viewtrans::CVertexBuffer::`vftable'

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[3] = 0

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
*arg1 = &viewtrans::CDXTransitionType::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
