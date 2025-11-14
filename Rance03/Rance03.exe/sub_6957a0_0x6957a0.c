// 函数: sub_6957a0
// 地址: 0x6957a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1943
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CWindow::dpsound::CSplitWindowBorder::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpsound::CWindow::dpsound::CSplitWindowBorder::VTable** var_10_1 = arg1
*arg1 = &dpsound::CSplitWindowBorder::`vftable'{for `dpsound::CWindow'}
int32_t var_4 = 1
arg1[0xc]->__offset(0x4).d(eax_2)
arg1[0xc] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0xc])
sub_695f10(arg1)

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
