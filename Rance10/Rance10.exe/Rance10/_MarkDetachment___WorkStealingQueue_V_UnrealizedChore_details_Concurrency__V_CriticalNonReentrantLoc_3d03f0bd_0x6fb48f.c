// 函数: ?MarkDetachment@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAEXXZ
// 地址: 0x6fb48f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0
int32_t (* var_c)(void* arg1) = sub_74afd7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
void* const var_24 = &data_6fb49b
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 0x10)
std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(esi)
int32_t eax = *(arg1 + 4)
*(arg1 + 0x14) = 1
*(arg1 + 0x18) = eax
int32_t var_8 = 0
int32_t result = sub_6eb703(esi)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fb4c1
return result
