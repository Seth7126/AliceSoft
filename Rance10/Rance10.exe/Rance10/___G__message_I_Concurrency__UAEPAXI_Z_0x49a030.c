// 函数: ??_G?$message@I@Concurrency@@UAEPAXI@Z
// 地址: 0x49a030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
bool result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x2c)

if (ecx != 0)
    result = (*(*ecx + 0x10))(ecx != arg1 + 8)
    *(arg1 + 0x2c) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
