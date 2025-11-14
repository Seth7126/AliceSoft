// 函数: sub_6511a0
// 地址: 0x6511a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_75d550

if (ecx != 0)
    int32_t __saved_esi
    (*(*(ecx + 4) + 4))(__security_cookie ^ &__saved_esi)
    data_75d550 = 0

struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** eax_4 = sub_69adc6(0x150)
struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** var_10 = eax_4
int32_t var_4 = 0
struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_64df80(eax_4)

data_75d550 = result
result[5] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
