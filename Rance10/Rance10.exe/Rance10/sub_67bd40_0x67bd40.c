// 函数: sub_67bd40
// 地址: 0x67bd40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7466f3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct crayfish::CCrayfishLogViewer::VTable** var_14 = arg1
*arg1 = &crayfish::CCrayfishLogViewer::`vftable'
arg1[1] = &crayfish::CFinalizer<class crayfish::CCrayfishLogViewer>::`vftable'{for `IInterface'}
arg1[2] = 0
arg1[3] = &crayfish::CCrayfishSetting::`vftable'
arg1[4].b = 1
int32_t var_8_1 = 0
sub_67c180(&arg1[5])
var_8_1.b = 1
arg1[0xf] = 0xf
arg1[0xe] = 0
void* eax_3

if (arg1[0xf] u< 0x10)
    eax_3 = &arg1[0xa]
else
    eax_3 = arg1[0xa]

*eax_3 = 0
sub_403490(&arg1[0xa], 0x76eda8, 0xc)
var_8_1.b = 2
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** eax_4 = sub_6e810c(0xd0)
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** var_18 = eax_4
var_8_1.b = 3
arg1[0x10] = sub_67c7c0(eax_4)
arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0
arg1[0x17] = 0
arg1[2] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
