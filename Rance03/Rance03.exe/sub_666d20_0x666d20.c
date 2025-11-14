// 函数: sub_666d20
// 地址: 0x666d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfdbd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::dpparts::CDPSpriteListWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CDPSpriteListWindow::VTable** var_10_1 = arg1
*arg1 = &dpparts::CDPSpriteListWindow::`vftable'{for `dpparts::CWindow'}
int32_t var_4 = 0x11
sub_671ac0(&arg1[0x8e])
var_4.b = 0x10
sub_670c40(&arg1[0x6e])
int32_t eax_3 = arg1[0x6b]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x6b] = 0
    arg1[0x6c] = 0
    arg1[0x6d] = 0

int32_t* eax_4 = arg1[0x68]

if (eax_4 != 0)
    sub_4107c0(eax_4, arg1[0x69])
    j__free(arg1[0x68])
    arg1[0x68] = 0
    arg1[0x69] = 0
    arg1[0x6a] = 0

arg1[0x61] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x5a] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x53] = &dpparts::CMouse::`vftable'
arg1[0x4e] = &dpparts::CPartsEngineWrapper::`vftable'
int32_t eax_5 = arg1[0x4f]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x4f] = 0
    arg1[0x50] = 0
    arg1[0x51] = 0

if (arg1[0x49] u>= 0x10)
    j__free(arg1[0x44])

arg1[0x49] = 0xf
arg1[0x48] = 0
arg1[0x44].b = 0

if (arg1[0x43] u>= 0x10)
    j__free(arg1[0x3e])

arg1[0x43] = 0xf
arg1[0x42] = 0
arg1[0x3e].b = 0

if (arg1[0x3d] u>= 0x10)
    j__free(arg1[0x38])

arg1[0x3d] = 0xf
arg1[0x3c] = 0
arg1[0x38].b = 0

if (arg1[0x37] u>= 0x10)
    j__free(arg1[0x32])

arg1[0x37] = 0xf
arg1[0x36] = 0
arg1[0x32].b = 0

if (arg1[0x31] u>= 0x10)
    j__free(arg1[0x2c])

arg1[0x31] = 0xf
arg1[0x30] = 0
arg1[0x2c].b = 0

if (arg1[0x2b] u>= 0x10)
    j__free(arg1[0x26])

arg1[0x2b] = 0xf
arg1[0x2a] = 0
arg1[0x26].b = 0

if (arg1[0x25] u>= 0x10)
    j__free(arg1[0x20])

arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0

if (arg1[0x1f] u>= 0x10)
    j__free(arg1[0x1a])

arg1[0x1f] = 0xf
arg1[0x1e] = 0
arg1[0x1a].b = 0

if (arg1[0x19] u>= 0x10)
    j__free(arg1[0x14])

arg1[0x19] = 0xf
arg1[0x18] = 0
arg1[0x14].b = 0

if (arg1[0x13] u>= 0x10)
    j__free(arg1[0xe])

arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
int32_t result = sub_684ea0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
