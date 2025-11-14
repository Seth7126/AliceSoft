// 函数: sub_5ff750
// 地址: 0x5ff750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc5fc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct crayfish::CCrayfishLogViewer::VTable** var_14 = arg1
*arg1 = &crayfish::CCrayfishLogViewer::`vftable'
arg1[1] = &crayfish::CFinalizer<class crayfish::CCrayfishLogViewer>::`vftable'{for `IInterface'}
arg1[2] = 0
arg1[3] = &crayfish::CCrayfishSetting::`vftable'
arg1[4].b = 1
int32_t var_4 = 0
sub_5ffaf0(&arg1[5])
var_4.b = 1
arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
sub_402110(&arg1[0xa], 0x6eba70, 0xc)
var_4.b = 2
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** eax_3 = sub_69adc6(0xcc)
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** var_10 = eax_3
var_4.b = 3
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    eax_4 = sub_600290(eax_3)

arg1[0x10] = eax_4
arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0
arg1[0x17] = 0
arg1[2] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
