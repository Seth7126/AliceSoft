// 函数: sub_45f540
// 地址: 0x45f540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = &exfile::CDefineDataArray::`vftable'{for `IEXArrayReader'}
sub_45f640(arg1)
void* ecx = arg1[1]

if (ecx != 0)
    sub_403160(ecx, (arg1[3] - ecx) s>> 2, 4)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0x10
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
