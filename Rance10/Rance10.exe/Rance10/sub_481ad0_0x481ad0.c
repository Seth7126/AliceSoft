// 函数: sub_481ad0
// 地址: 0x481ad0
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
*arg1 = &kiwi::CSoundDataFiltered::`vftable'{for `common::SuicideRefCounter<class ISoundData>'}
sub_481d00(arg1)
void* ecx = arg1[4]

if (ecx != 0)
    sub_403160(ecx, (arg1[6] - ecx) s>> 2, 4)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0x20
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
