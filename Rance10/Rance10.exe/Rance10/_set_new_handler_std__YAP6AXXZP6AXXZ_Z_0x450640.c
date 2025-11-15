// 函数: ?set_new_handler@std@@YAP6AXXZP6AXXZ@Z
// 地址: 0x450640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b1f9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
    var_14_1 = arg1
arg1[1] = 1
*arg1 =
    &chipmunk::CSprite::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 0xc)
arg1[4] = *(arg2 + 0x10)
arg1[5] = *(arg2 + 0x14)
arg1[6].b = *(arg2 + 0x18)
*(arg1 + 0x19) = *(arg2 + 0x19)
arg1[7] = &common::CRect::`vftable'
arg1[8] = &common::CPoint::`vftable'
arg1[9] = *(arg2 + 0x24)
arg1[0xa] = *(arg2 + 0x28)
arg1[0xb] = &common::CSize::`vftable'
arg1[0xc] = *(arg2 + 0x30)
arg1[0xd] = *(arg2 + 0x34)
int32_t var_8_1 = 0
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
arg1[0x2e] = &common::CSize::`vftable'
arg1[0x2f] = *(arg2 + 0xbc)
arg1[0x30] = *(arg2 + 0xc0)
var_8_1.b = 1
void* ecx = arg1[5]
*(arg1 + 0xc4) = *(arg2 + 0xc4)
*(arg1 + 0xd4) = *(arg2 + 0xd4)
*(arg1 + 0xe4) = *(arg2 + 0xe4)
*(arg1 + 0xf4) = *(arg2 + 0xf4)
arg1[0x41] = *(arg2 + 0x104)
arg1[0x42] = *(arg2 + 0x108)
arg1[0x43] = *(arg2 + 0x10c)
arg1[0x44] = *(arg2 + 0x110)
arg1[0x45].b = *(arg2 + 0x114)
*(arg1 + 0x115) = *(arg2 + 0x115)
arg1[0x46] = *(arg2 + 0x118)
arg1[0x47] = *(arg2 + 0x11c)
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x4a] = 0
arg1[0x4b].b = 0

if (ecx != 0)
    *(ecx + 4)
    *(ecx + 4) += 1

int32_t* ecx_2 = arg1[0x46]

if (ecx_2 != 0)
    (**ecx_2)(eax_2)

int32_t* ecx_3 = arg1[0x47]

if (ecx_3 != 0)
    (**ecx_3)(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
