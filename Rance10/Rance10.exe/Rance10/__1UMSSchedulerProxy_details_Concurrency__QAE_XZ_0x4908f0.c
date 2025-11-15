// 函数: ??1UMSSchedulerProxy@details@Concurrency@@QAE@XZ
// 地址: 0x4908f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = arg1[0xf]

if (ecx != 0)
    (*(*ecx + 0x10))(ecx != &arg1[6])
    arg1[0xf] = 0

int32_t eax_6 = arg1[5]

if (eax_6 u>= 0x10)
    eax_6 = sub_403160(*arg1, eax_6 + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

char* eax_7 = *arg1
*eax_7 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
