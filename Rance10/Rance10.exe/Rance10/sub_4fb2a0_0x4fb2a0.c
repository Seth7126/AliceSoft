// 函数: sub_4fb2a0
// 地址: 0x4fb2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[1]
*arg1 = &partsengine::CGUIInputController::`vftable'
(*(*ecx + 4))(eax_2)
arg1[0x90] = &partsengine::CPartsDoubleClickWorker::`vftable'
arg1[0x83] = &partsengine::CEventSubject::`vftable'
int32_t result = arg1[0x84]
arg1[0x85] = result
void* ecx_1 = arg1[0x84]

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (arg1[0x86] - ecx_1) s>> 2, 4)
    arg1[0x84] = 0
    arg1[0x85] = 0
    arg1[0x86] = 0

arg1[0x10] = &partsengine::CKey::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
