// 函数: sub_4da620
// 地址: 0x4da620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatLayerView::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
int32_t result = sub_4da840(arg1)
void* ecx = arg1[0xe]

if (ecx != 0)
    result = sub_403160(ecx, (arg1[0x10] - ecx) s>> 2, 4)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

void* ecx_1 = arg1[0xb]

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (arg1[0xd] - ecx_1) s>> 2, 4)
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

void* ecx_2 = arg1[8]

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[0xa] - ecx_2) s>> 2, 4)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
