// 函数: sub_485090
// 地址: 0x485090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CSoundVolumeManager::`vftable'{for `IVolumeValancer'}
void* ecx = arg1[0x242]

if (ecx != 0)
    sub_403160(ecx, (arg1[0x244] - ecx) s>> 2, 4)
    arg1[0x242] = 0
    arg1[0x243] = 0
    arg1[0x244] = 0

int32_t result = `eh vector vbase constructor iterator'(&arg1[1], 0x24, 0x40, sub_485050)
fsbase->NtTib.ExceptionList = ExceptionList
return result
