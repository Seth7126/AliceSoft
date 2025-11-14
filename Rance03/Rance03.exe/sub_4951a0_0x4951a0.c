// 函数: sub_4951a0
// 地址: 0x4951a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb731
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::IFlatGraphicLayer::partsengine::CFlatView::VTable** var_10 = arg1
*arg1 = &partsengine::CFlatView::`vftable'{for `partsengine::IFlatGraphicLayer'}
arg1[1] = 1
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_402110(&arg1[2], 0x6da231, nullptr)
int32_t var_4 = 0
arg1[8] = 0
arg1[9] = arg3
arg1[0xa] = &partsengine::CProjection::`vftable'
EnumC13Lines::EnumC13Lines(&arg1[0xb])
EnumC13Lines::EnumC13Lines(&arg1[0x1b])
arg1[0x2b] = 0
arg1[0x2c] = 0
arg1[0x2d] = 0
int32_t var_20 = 0x41f00000
sub_5123f0(&arg1[0xa], 0x400, 0x300)
var_4.b = 1
arg1[0x3c] = 0
arg1[0x3d] = arg2
arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x41].b = 1
arg1[0x42] = 0x3f800000
arg1[0x43] = 0x3f800000
__builtin_memset(&arg1[0x44], 0, 0x26)
arg1[0x4e] = 0xff
arg1[0x4f] = 0xff
arg1[0x50] = 0xff
arg1[0x51] = 0
arg1[0x52] = 0
arg1[0x53] = 0
arg1[0x54] = 0
arg1[0x55] = 1
arg1[0x56] = 0xff
arg1[0x57] = 0xffffffff
arg1[0x58] = 0
arg1[0x59] = 0
arg1[0x5a].w = 1
*(arg1 + 0x16a) = 0
arg1[0x5b] = 0
struct IInterface::partsengine::CFlatKeyDataGraphic::VTable** eax_5 = sub_69adc6(0x80)
arg3 = eax_5
var_4.b = 2

if (eax_5 == 0)
    arg1[0x3e] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

arg1[0x3e] = sub_490f60(eax_5)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
