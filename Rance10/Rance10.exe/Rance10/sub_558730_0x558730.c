// 函数: sub_558730
// 地址: 0x558730
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
void* eax_3 = data_7fcb6c
*arg1 = &partsengine::CSoundManager::`vftable'
void* ecx = *(eax_3 + 0x934)

if (ecx != 0)
    int32_t var_1c_1 = 2
    sub_47fc90(ecx + 0x78)
    eax_3 = data_7fcb6c

void* ecx_2 = *(eax_3 + 0x934)

if (ecx_2 != 0)
    int32_t var_1c_2 = 3
    sub_47fc90(ecx_2 + 0x78)

if ((arg2 & 1) != 0)
    int32_t var_1c_3 = 4
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
