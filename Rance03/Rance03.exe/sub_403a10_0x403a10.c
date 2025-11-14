// 函数: sub_403a10
// 地址: 0x403a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2c99
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpanalysis::CWindow::dpanalysis::CAppWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpanalysis::CAppWindow::`vftable'{for `dpanalysis::CWindow'}
int32_t var_4 = 0xb
uint32_t uIDEvent = arg1[0x13d]
arg1[0x13c] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[0x13e], uIDEvent)
    arg1[0x13d] = 0

HIMAGELIST himl = arg1[0x13b]
arg1[0x137] = &dpanalysis::CImageList::`vftable'

if (himl != 0)
    ImageList_Destroy(himl)
    arg1[0x13b] = 0
    arg1[0x139] = arg1[0x138]

int32_t eax_4 = arg1[0x138]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x138] = 0
    arg1[0x139] = 0
    arg1[0x13a] = 0

sub_41d070(&arg1[0x105])
arg1[0xf9] = &dpanalysis::CTreeViewWnd::`vftable'{for `dpanalysis::CWindow'}
arg1[0xfe] = &dpanalysis::CTreeView::`vftable'
sub_41c560(&arg1[0xf9])
arg1[0xed] = &dpanalysis::CTreeViewWnd::`vftable'{for `dpanalysis::CWindow'}
arg1[0xf2] = &dpanalysis::CTreeView::`vftable'
sub_41c560(&arg1[0xed])
arg1[0xe1] = &dpanalysis::CTreeViewWnd::`vftable'{for `dpanalysis::CWindow'}
arg1[0xe6] = &dpanalysis::CTreeView::`vftable'
sub_41c560(&arg1[0xe1])
arg1[0xdf] = &dpanalysis::CStatusWnd::`vftable'
arg1[0xd9] = &dpanalysis::CToolBarWnd::`vftable'
void* ecx_4 = arg1[0xdc]

if (ecx_4 != 0)
    struct dpanalysis::CWindow::dpanalysis::CAppWindow::VTable** var_20_4 = arg1
    void* var_24_2 = ecx_4
    sub_41be60(ecx_4, arg1[0xdd])
    j__free(arg1[0xdc])
    arg1[0xdc] = 0
    arg1[0xdd] = 0
    arg1[0xde] = 0

var_4.b = 5
arg1[0xb8] = &dpanalysis::CBPWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
sub_413be0(&arg1[0xd0])
sub_41a7f0(&arg1[0xb8])
sub_416c70(&arg1[0x89])
arg1[0x69] = &dpanalysis::CFuncStackWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
void* ecx_8 = arg1[0x82]

if (ecx_8 != 0)
    struct dpanalysis::CWindow::dpanalysis::CAppWindow::VTable** var_20_5 = arg1
    void* var_24_3 = ecx_8
    sub_415640(ecx_8, arg1[0x83])
    j__free(arg1[0x82])
    arg1[0x82] = 0
    arg1[0x83] = 0
    arg1[0x84] = 0

sub_41a7f0(&arg1[0x69])
sub_418f50(&arg1[0x1d])
arg1[0x12] = &dpanalysis::CSplitWndLR::`vftable'{for `dpanalysis::CWindow'}
sub_41c560(&arg1[0x12])
arg1[7] = &dpanalysis::CSplitWndLR::`vftable'{for `dpanalysis::CWindow'}
sub_41c560(&arg1[7])
BOOL result = sub_41c560(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
