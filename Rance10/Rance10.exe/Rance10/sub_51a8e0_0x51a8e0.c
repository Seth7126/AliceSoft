// 函数: sub_51a8e0
// 地址: 0x51a8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CGUIRadioButtonBoxView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIRadioButtonBoxView::`vftable'{for `partsengine::IEventObserver'}
sub_51ab40(arg1)
arg1[0x10] = &partsengine::CGUIRadioButtonBoxModel::`vftable'
void* ecx = arg1[0x11]

if (ecx != 0)
    sub_403160(ecx, (arg1[0x13] - ecx) s>> 2, 4)
    arg1[0x11] = 0
    arg1[0x12] = 0
    arg1[0x13] = 0

arg1[3] = &partsengine::CEventSubject::`vftable'
int32_t result = arg1[4]
arg1[5] = result
void* ecx_1 = arg1[4]

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (arg1[6] - ecx_1) s>> 2, 4)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
