// 函数: sub_675a30
// 地址: 0x675a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d030e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::dpparts::CPartsWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CPartsWindow::VTable** var_10_1 = arg1
*arg1 = &dpparts::CPartsWindow::`vftable'{for `dpparts::CWindow'}
int32_t var_4 = 2
int32_t* eax_3 = arg1[0x70]

if (eax_3 != 0)
    sub_4107c0(eax_3, arg1[0x71])
    j__free(arg1[0x70])
    arg1[0x70] = 0
    arg1[0x71] = 0
    arg1[0x72] = 0

arg1[0x69] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x62] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x5b] = &dpparts::CMouse::`vftable'
sub_671ac0(&arg1[0x3a])
var_4.b = 1
sub_670c40(&arg1[0x1a])

if (arg1[0x17] u>= 0x10)
    j__free(arg1[0x12])

arg1[0x17] = 0xf
arg1[0x16] = 0
arg1[0x12].b = 0
int32_t result = sub_684ea0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
