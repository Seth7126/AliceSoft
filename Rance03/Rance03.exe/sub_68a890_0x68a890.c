// 函数: sub_68a890
// 地址: 0x68a890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1677
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpsound::CWindow::dpsound::CSoundListWindow::VTable** result = arg1
struct dpsound::CWindow::dpsound::CSoundListWindow::VTable** result_1 = result
int32_t var_1c = arg7
int32_t var_24
sub_695db0(arg1, arg2, arg3, 8, arg4, arg5, arg6, 0, var_24)
int32_t var_4 = 0
*result = &dpsound::CSoundListWindow::`vftable'{for `dpsound::CWindow'}
__builtin_memcpy(&result[0xb], 
    "\x18\x00\x00\x00\x0f\x00\x00\x00\x10\x00\x00\x00\x01\x00\x00\x00\x5c\x00\x00\x00", 0x14)
result[0x15] = 0xf
result[0x14] = 0
result[0x10].b = 0
sub_401ff0(&result[0x10], arg8, 0, 0xffffffff)
var_4.b = 1
result[0x1b] = 0xf
result[0x1a] = 0
result[0x16].b = 0
sub_402110(&result[0x16], "CSoundListWindowWindowPosX", 0x1a)
var_4.b = 2
result[0x21] = 0xf
result[0x20] = 0
result[0x1c].b = 0
sub_402110(&result[0x1c], "CSoundListWindowWindowPosY", 0x1a)
var_4.b = 3
result[0x27] = 0xf
result[0x26] = 0
result[0x22].b = 0
sub_402110(&result[0x22], "CSoundListWindowwWindowWidth", 0x1c)
var_4.b = 4
result[0x2d] = 0xf
result[0x2c] = 0
result[0x28].b = 0
sub_402110(&result[0x28], "CSoundListWindowWindowHeight", 0x1c)
var_4.b = 5
result[0x33] = 0xf
result[0x32] = 0
result[0x2e].b = 0
sub_402110(&result[0x2e], "ShowsMaster", 0xb)
var_4.b = 6
result[0x39] = 0xf
result[0x38] = 0
result[0x34].b = 0
sub_402110(&result[0x34], "ShowsBGM", 8)
var_4.b = 7
result[0x3f] = 0xf
result[0x3e] = 0
result[0x3a].b = 0
sub_402110(&result[0x3a], "ShowsSE", 7)
var_4.b = 8
result[0x45] = 0xf
result[0x44] = 0
result[0x40].b = 0
sub_402110(&result[0x40], "ShowsVoice", 0xa)
var_4.b = 9
result[0x4b] = 0xf
result[0x4a] = 0
result[0x46].b = 0
sub_402110(&result[0x46], "ShowsBackVoice", 0xe)
var_4.b = 0xa
result[0x51] = 0xf
result[0x50] = 0
result[0x4c].b = 0
sub_402110(&result[0x4c], "ShowsEtc", 8)
var_4.b = 0xb
result[0x57] = 0xf
result[0x56] = 0
result[0x52].b = 0
sub_402110(&result[0x52], 0x703a64, 6)
var_4.b = 0xc
result[0x5d] = 0xf
result[0x5c] = 0
result[0x58].b = 0
sub_402110(&result[0x58], 0x703a28, 0x16)
var_4.b = 0xd
result[0x63] = 0xf
result[0x62] = 0
result[0x5e].b = 0
sub_402110(&result[0x5e], 0x703a40, 0x14)
var_4.b = 0xe
result[0x69] = 0xf
result[0x68] = 0
result[0x64].b = 0
sub_402110(&result[0x64], 0x7039e0, 8)
var_4.b = 0xf
result[0x6f] = 0xf
result[0x6e] = 0
result[0x6a].b = 0
sub_402110(&result[0x6a], 0x7039ec, 0xa)
var_4.b = 0x10
result[0x75] = 0xf
result[0x74] = 0
result[0x70].b = 0
sub_402110(&result[0x70], 0x7039c0, 0xc)
var_4.b = 0x11
result[0x7b] = 0xf
result[0x7a] = 0
result[0x76].b = 0
sub_402110(&result[0x76], 0x7039d0, 0xc)
__builtin_memset(&result[0x7c], 0, 0x30)
result[0x88] = &dpsound::CMouse::`vftable'
__builtin_memset(&result[0x89], 0, 0x15)
result[0x8f] = &dpsound::CListItem::`vftable'
result[0x90] = 0x1010101
result[0x91].w = 0x101
result[0x93] = 0
result[0x94] = 0
result[0x95] = 0
result[0x96] = 1
result[0x97] = 0
result[0x98] = 0
result[0x99].b = 1
result[0x92] = &dpsound::CVScrollBar::`vftable'{for `dpsound::CParamScrollBar'}
__builtin_memset(&result[0x9b], 0, 0x18)
result[0xa1].b = 1
result[0x9a] = &dpsound::CHScrollBar::`vftable'{for `dpsound::CParamScrollBar'}
result[0xa2] = &dpsound::CSoundEngine::`vftable'
result[0xa3] = 0
result[0xa4] = 0
result[0xa5] = 0
var_4.b = 0x1b
sub_686750(&result[0xa6])
var_4.b = 0x1c
sub_687390(&result[0xc6])
result[0xe9] = 0
result[0xea] = 0x2710
result[0xeb].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
