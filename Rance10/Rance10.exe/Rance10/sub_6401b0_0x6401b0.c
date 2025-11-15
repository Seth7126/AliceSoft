// 函数: sub_6401b0
// 地址: 0x6401b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746274
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct textsurface::CTextSurfaceCreater::VTable** var_14 = arg1
*arg1 = &textsurface::CTextSurfaceCreater::`vftable'
arg1[1] = 0
arg1[2] = 0
sub_6ccee0(&arg1[3])
int32_t var_8_1 = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 4
arg1[0x13] = 4
sub_63fbe0(&arg1[0x14])
sub_63fbe0(&arg1[0x26])
var_8_1.b = 2
arg1[0x38] = &win32only::CFont::`vftable'
arg1[0x39] = 0
arg1[0x3a] = 0x10
arg1[0x40] = 0xf
arg1[0x3f] = 0
void* var_18 = &arg1[0x38]
arg1[0x3b].b = 0
sub_403490(&arg1[0x3b], 0x79438c, 0xd)
arg1[0x41] = 0x190
arg1[0x42].w = 0
arg1[0x43] = 0xffffffff
arg1[0x44] = 0
arg1[0x45] = &textsurface::CExternalFontPack::`vftable'
arg1[0x46] = &storage::CStorageFile::`vftable'
arg1[0x47] = &filesystem::CFile::`vftable'
arg1[0x48] = 0xffffffff
__builtin_memset(&arg1[0x49], 0, 0x14)
arg1[0x4e] = &textsurface::CZlibDecompressor::`vftable'
arg1[0x4f] = 0
arg1[0x55] = 0xf
arg1[0x54] = 0
arg1[0x50].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
