// 函数: sub_652c80
// 地址: 0x652c80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cee58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::dpparts::CChildWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CChildWindow::VTable** var_10_1 = arg1
*arg1 = &dpparts::CChildWindow::`vftable'{for `dpparts::CWindow'}
int32_t var_4 = 0
int32_t* eax_3 = arg1[0x45]

if (eax_3 != 0)
    sub_4107c0(eax_3, arg1[0x46])
    j__free(arg1[0x45])
    arg1[0x45] = 0
    arg1[0x46] = 0
    arg1[0x47] = 0

arg1[0x3e] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x37] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x30] = &dpparts::CMouse::`vftable'
sub_671ac0(&arg1[0xf])
int32_t result = sub_684ea0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
