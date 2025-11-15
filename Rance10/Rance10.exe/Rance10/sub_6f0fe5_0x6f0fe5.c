// 函数: sub_6f0fe5
// 地址: 0x6f0fe5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t (* var_c)(void* arg1) = sub_74a914
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_30
void* const var_34_3 = &data_6f0ff1
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg1
int32_t ebx
ebx.b = arg2

if (ebx.b == 0)
    goto label_6f104a

int32_t esi_1 = *(*arg1 + 0x58)
j_sub_4033e0()
char eax_1 = esi_1()
void* result

if (eax_1 != 0)
    result = Concurrency::details::SchedulerBase::GetReservedContext(arg1)

if (eax_1 == 0 || result == 0)
    int32_t eax_2 = Concurrency::details::SchedulerBase::ThrottlingTime(arg1, 1)
    
    if (eax_2 == 0)
        goto label_6f104a
    
    uint32_t eax_3
    int32_t edx_1
    eax_3, edx_1 = j____crtGetTickCount64()
    int32_t var_18_1 = edx_1
    
    if (eax_3 - arg1[0x74] u>= eax_2)
        ebx.b = 0
    label_6f104a:
        arg1[0x64] += 1
        
        if (ebx.b == 0)
            uint32_t eax_5
            int32_t edx_2
            eax_5, edx_2 = j____crtGetTickCount64()
            arg1[0x74] = eax_5
            arg1[0x75] = edx_2
        
        SLIST_ENTRY* eax_7 = InterlockedPopEntrySList(&arg1[0x7a])
        int32_t ebx_2 = neg.d(eax_7)
        void* result_1 = sbb.d(ebx_2, ebx_2, eax_7 != 0) & &eax_7[-2]
        void* result_2 = result_1
        
        if (result_1 == 0)
            int32_t esi_3 = *(*arg1 + 0x40)
            j_sub_4033e0()
            result_1 = esi_3()
            void* result_3 = result_1
            Concurrency::details::SchedulerBase::AddContext(arg1, result_1)
            arg1[0x62] += 1
        
        Concurrency::details::InternalContextBase::SpinUntilBlocked(result_1)
        int32_t var_8 = 0
        *(result_1 + 0x9c) = 0
        int32_t esi_4 = *(*arg1[0x6b] + 8)
        j_sub_4033e0()
        esi_4(result_1)
        
        if (result_1 != 0)
            *(result_1 + 0x10) = 0
            *(result_1 + 0x14) = 0
        
        result = result_1
    else
        result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f1102
return result
