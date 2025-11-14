// 函数: sub_68ade0
// 地址: 0x68ade0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1677
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CWindow::dpsound::CSoundListWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpsound::CSoundListWindow::`vftable'{for `dpsound::CWindow'}
int32_t var_4 = 0x1c
sub_6874f0(&arg1[0xc6])
var_4.b = 0x1b
sub_686890(&arg1[0xa6])
arg1[0xa2] = &dpsound::CSoundEngine::`vftable'
void* ecx_2 = arg1[0xa3]

if (ecx_2 != 0)
    struct dpsound::CWindow::dpsound::CSoundListWindow::VTable** var_1c_1 = arg1
    void* var_20_1 = ecx_2
    sub_46f580(ecx_2, arg1[0xa4])
    j__free(arg1[0xa3])
    arg1[0xa3] = 0
    arg1[0xa4] = 0
    arg1[0xa5] = 0

arg1[0x9a] = &dpsound::CParamBase::`vftable'
arg1[0x92] = &dpsound::CParamBase::`vftable'
arg1[0x8f] = &dpsound::CListItem::`vftable'
arg1[0x88] = &dpsound::CMouse::`vftable'
int32_t* eax_3 = arg1[0x85]

if (eax_3 != 0)
    sub_4107c0(eax_3, arg1[0x86])
    j__free(arg1[0x85])
    arg1[0x85] = 0
    arg1[0x86] = 0
    arg1[0x87] = 0

var_4.b = 0x14
sub_68c670(&arg1[0x82])
var_4.b = 0x13
sub_68c670(&arg1[0x7f])
var_4.b = 0x12
sub_68c670(&arg1[0x7c])

if (arg1[0x7b] u>= 0x10)
    j__free(arg1[0x76])

arg1[0x7b] = 0xf
arg1[0x7a] = 0
arg1[0x76].b = 0

if (arg1[0x75] u>= 0x10)
    j__free(arg1[0x70])

arg1[0x75] = 0xf
arg1[0x74] = 0
arg1[0x70].b = 0

if (arg1[0x6f] u>= 0x10)
    j__free(arg1[0x6a])

arg1[0x6f] = 0xf
arg1[0x6e] = 0
arg1[0x6a].b = 0

if (arg1[0x69] u>= 0x10)
    j__free(arg1[0x64])

arg1[0x69] = 0xf
arg1[0x68] = 0
arg1[0x64].b = 0

if (arg1[0x63] u>= 0x10)
    j__free(arg1[0x5e])

arg1[0x63] = 0xf
arg1[0x62] = 0
arg1[0x5e].b = 0

if (arg1[0x5d] u>= 0x10)
    j__free(arg1[0x58])

arg1[0x5d] = 0xf
arg1[0x5c] = 0
arg1[0x58].b = 0

if (arg1[0x57] u>= 0x10)
    j__free(arg1[0x52])

arg1[0x57] = 0xf
arg1[0x56] = 0
arg1[0x52].b = 0

if (arg1[0x51] u>= 0x10)
    j__free(arg1[0x4c])

arg1[0x51] = 0xf
arg1[0x50] = 0
arg1[0x4c].b = 0

if (arg1[0x4b] u>= 0x10)
    j__free(arg1[0x46])

arg1[0x4b] = 0xf
arg1[0x4a] = 0
arg1[0x46].b = 0

if (arg1[0x45] u>= 0x10)
    j__free(arg1[0x40])

arg1[0x45] = 0xf
arg1[0x44] = 0
arg1[0x40].b = 0

if (arg1[0x3f] u>= 0x10)
    j__free(arg1[0x3a])

arg1[0x3f] = 0xf
arg1[0x3e] = 0
arg1[0x3a].b = 0

if (arg1[0x39] u>= 0x10)
    j__free(arg1[0x34])

arg1[0x39] = 0xf
arg1[0x38] = 0
arg1[0x34].b = 0

if (arg1[0x33] u>= 0x10)
    j__free(arg1[0x2e])

arg1[0x33] = 0xf
arg1[0x32] = 0
arg1[0x2e].b = 0

if (arg1[0x2d] u>= 0x10)
    j__free(arg1[0x28])

arg1[0x2d] = 0xf
arg1[0x2c] = 0
arg1[0x28].b = 0

if (arg1[0x27] u>= 0x10)
    j__free(arg1[0x22])

arg1[0x27] = 0xf
arg1[0x26] = 0
arg1[0x22].b = 0

if (arg1[0x21] u>= 0x10)
    j__free(arg1[0x1c])

arg1[0x21] = 0xf
arg1[0x20] = 0
arg1[0x1c].b = 0

if (arg1[0x1b] u>= 0x10)
    j__free(arg1[0x16])

arg1[0x1b] = 0xf
arg1[0x1a] = 0
arg1[0x16].b = 0

if (arg1[0x15] u>= 0x10)
    j__free(arg1[0x10])

arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0
int32_t result = sub_695f10(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
