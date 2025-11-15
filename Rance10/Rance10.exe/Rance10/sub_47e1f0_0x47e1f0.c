// 函数: sub_47e1f0
// 地址: 0x47e1f0
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
*arg1 = &ibis::CMouseCursor::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)

int32_t eax_5 = arg1[8]

if (eax_5 u>= 0x10)
    eax_5 = sub_403160(arg1[3], eax_5 + 1, 1)

arg1[8] = 0xf
bool cond:0 = arg1[8] u< 0x10
arg1[7] = 0

if (cond:0)
    arg1[3].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

char* eax_6 = arg1[3]
*eax_6 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
