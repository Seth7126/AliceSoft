// 函数: sub_689710
// 地址: 0x689710
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
int32_t* ecx = arg1[1]
*arg1 = &graphengined3d11::CRasterizerState::`vftable'

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[1] = 0

if ((arg2 & 1) != 0)
    int32_t var_1c_2 = 8
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
