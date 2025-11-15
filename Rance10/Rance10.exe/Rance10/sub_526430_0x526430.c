// 函数: sub_526430
// 地址: 0x526430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CPartsList::VTable** result = arg1
int32_t var_8_1 = 0
*result = &partsengine::CPartsList::`vftable'
sub_526830(arg1)
result[8] = 0
void* ecx = result[3]

if (ecx != 0)
    sub_403160(ecx, (result[5] - ecx) s>> 2, 4)
    result[3] = 0
    result[4] = 0
    result[5] = 0

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0x2c
    operator new(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
