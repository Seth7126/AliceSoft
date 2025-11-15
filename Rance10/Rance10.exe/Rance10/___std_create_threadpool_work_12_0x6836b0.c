// 函数: ___std_create_threadpool_work@12
// 地址: 0x6836b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[2]
*arg1 = &graphengine::CSpecularTableTexture::`vftable'

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[2] = 0

int32_t* ecx_1 = arg1[1]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[1] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
