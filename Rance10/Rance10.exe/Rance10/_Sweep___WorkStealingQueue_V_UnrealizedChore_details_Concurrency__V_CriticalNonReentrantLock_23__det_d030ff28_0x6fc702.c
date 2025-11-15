// 函数: ?Sweep@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAEXP6A_NPAV_UnrealizedChore@23@PAX@Z12@Z
// 地址: 0x6fc702
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t (* var_c)(void* arg1) = sub_74b11d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_8 = __security_cookie ^ &__saved_ebp
void* const var_34_2 = &data_6fc70e
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[4]
std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(ecx)
int32_t var_8 = 0
void* eax = &arg1[1]
int32_t edi = *eax
int32_t i = *eax - 1

if (i s>= *arg1)
    int32_t var_14_1 = i + 1
    int32_t edx_1 = i + 1
    
    do
        int32_t eax_3 = *(arg1[7] + ((arg1[2] & i) << 2))
        
        if (eax_3 != 0)
            j_sub_4033e0()
            
            if (arg2(eax_3, arg3, eax_8) == 0)
                edx_1 = var_14_1
            else
                j_sub_4033e0()
                edx_1 = var_14_1
                
                if (arg4(eax_3, arg3) != 0)
                    if (edx_1 != edi)
                        *(arg1[7] + ((arg1[2] & i) << 2)) = 0
                    else
                        edi -= 1
        
        i -= 1
        edx_1 -= 1
        var_14_1 = edx_1
    while (i s>= *arg1)

*eax
*eax = edi
int32_t var_8_1 = 1
int32_t result = sub_6eb703(ecx)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fc7b1
return result
