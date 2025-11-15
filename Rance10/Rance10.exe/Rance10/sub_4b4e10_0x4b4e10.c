// 函数: sub_4b4e10
// 地址: 0x4b4e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7320bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUISpinBoxModel::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUISpinBoxModel::VTable** var_14_1 = arg1
*arg1 = &partsengine::CGUISpinBoxModel::`vftable'
arg1[1] = 0xc8
arg1[2] = 0x1e
arg1[3] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[4] = 0
arg1[5] = 0x10
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0xff
__builtin_memset(&arg1[0xa], 0, 0x14)
arg1[0xf] = 0xff
int32_t var_8_1 = 0
arg1[0x10].b = 0
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 0x7f7fffff
arg1[0x14] = 0xff7fffff
arg1[0x15] = 0x3f800000
arg1[0x16] = 0
__builtin_memcpy(&arg1[0x17], 
    "\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\x96\x00\x00\x00\x96\x00\x00\x00\x96\x00\x00\x00\x"
"64\x00\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00\xc8\x00\x00\x00\xc8\x00\x00\x00\xc8\x00\x00\x
        00", 
    0x30)
arg1[0x28] = 0xf
arg1[0x27] = 0
arg1[0x23].b = 0
sub_403490(&arg1[0x23], 0x75cfeb, nullptr)
arg1[0x29] = 0
arg1[0x2a].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
