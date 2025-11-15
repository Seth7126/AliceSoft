// 函数: sub_697ce0
// 地址: 0x697ce0
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
void* esi = *arg1

if (esi != 0)
    int32_t var_8_1 = 0
    int32_t* ecx = *(esi + 0x24)
    
    if (ecx != 0)
        (*(*ecx + 0x10))(ecx != esi)
        *(esi + 0x24) = 0
    
    int32_t var_1c_2 = 0x28
    result = operator new(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
