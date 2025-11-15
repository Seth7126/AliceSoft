// 函数: sub_4a4f80
// 地址: 0x4a4f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &mainwindow::CMainView::`vftable'
sub_4a5040(arg1)
int32_t* ecx = arg1[0x14]

if (ecx != 0)
    (*(*ecx + 0x44))(eax_2)
    (*(arg1[0x14]->vFunc_0 + 4))()
    arg1[0x14] = 0

int32_t result = sub_4a5040(arg1)
arg1[0x1d] = &common::CSize::`vftable'
arg1[0x1a] = &common::CSize::`vftable'
arg1[0x15] = &mainwindow::CDXOption::`vftable'{for `IDXOption'}
int32_t var_8_1 = 0
int32_t* ecx_3 = arg1[0x14]
arg1[0x13] = &mainwindow::CGraphEngineFactory::`vftable'

if (ecx_3 != 0)
    (*(*ecx_3 + 0x44))(eax_2)
    result = (*(arg1[0x14]->vFunc_0 + 4))()
    arg1[0x14] = 0

arg1[0xd] = &common::CSize::`vftable'
arg1[0xa] = &common::CSize::`vftable'
arg1[7] = &common::CSize::`vftable'
arg1[4] = &common::CSize::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
