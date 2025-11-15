// 函数: sub_694d50
// 地址: 0x694d50
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
bool cond:0 = arg1[0xe].b == 0
*arg1 = &graphengined3d11::CViewport::CImpl::`vftable'

if (not(cond:0))
    int32_t* vFunc_0 = arg1[1][0xe].vFunc_0
    (*(*vFunc_0 + 0xb0))(vFunc_0, 1, &arg1[8])
    arg1[0xe].b = 0

if ((arg2 & 1) != 0)
    int32_t var_1c_2 = 0x3c
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
