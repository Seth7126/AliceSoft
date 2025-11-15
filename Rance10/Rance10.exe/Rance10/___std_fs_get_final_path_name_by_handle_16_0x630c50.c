// 函数: ___std_fs_get_final_path_name_by_handle@16
// 地址: 0x630c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *arg1

if (ecx != 0)
    bool cond:0_1 = *(ecx + 0x20) != 1
    result = *(ecx + 0x20)
    *(ecx + 0x20) -= 1
    
    if (not(cond:0_1))
        result = sub_62d070(*arg1, 0)

*arg1 = 0
int32_t var_8_1 = 0
int32_t* ecx_2 = arg1[4]

if (ecx_2 != 0)
    result = (*(*ecx_2 + 8))(eax_2)
    
    if (result != 0)
        result = (*result)->Next(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
