// 函数: ?SyncPop@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@AAEPAV_UnrealizedChore@23@XZ
// 地址: 0x6f4123
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t (* var_c)(void* arg1) = sub_74aabc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30 = &data_6f412f
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[4]
std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(ecx)
int32_t edi_1 = arg1[1] - 1
int32_t var_1c = 0
int32_t var_18 = 0
int32_t result = 0
arg1[1] = edi_1
int32_t var_8 = 0

if (*arg1 s> edi_1)
    arg1[1] = edi_1 + 1
else
    int32_t edx_2 = arg1[2] & edi_1
    int32_t ecx_1 = arg1[8]
    result = *(arg1[7] + (edx_2 << 2))
    var_1c = *(ecx_1 + (edx_2 << 3))
    int32_t var_18_1 = *(ecx_1 + (edx_2 << 3) + 4)

if (*arg1 s>= edi_1)
    arg1[3] += *arg1
    *arg1 = 0
    arg1[1] = 0
    arg1[6] = 0
    arg1[5].b = 0

if ((result.b & 1) != 0)
    result &= 0xfffffffe
    
    if (Concurrency::details::Mailbox<class Concurrency::details::InternalContextBase>::Slot::Claim(
            &var_1c, nullptr) == 0)
        result = 1

int32_t var_8_1 = 2
sub_6eb703(ecx)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f41bb
return result
