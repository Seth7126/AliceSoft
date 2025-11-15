// 函数: sub_684ac0
// 地址: 0x684ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[1]
*arg1 = &graphengined3d11::CConstantBuffer::`vftable'

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[1] = 0

int32_t result = arg1[2]
arg1[3] = result
void* ecx_1 = arg1[2]

if (ecx_1 != 0)
    result = sub_403160(ecx_1, arg1[4] - ecx_1, 1)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
