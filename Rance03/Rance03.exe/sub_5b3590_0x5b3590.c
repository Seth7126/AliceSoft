// 函数: sub_5b3590
// 地址: 0x5b3590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8d88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_3c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg1 + 0x24)

if (result != *(arg1 + 0x28))
    struct win32only::CHighResolutionTimer::VTable* const var_20_1 =
        &win32only::CHighResolutionTimer::`vftable'
    
    if ((data_75d560 | data_75d564) == 0)
        int32_t frequency
        QueryPerformanceFrequency(&frequency)
        data_75d560 = frequency
        int32_t var_2c
        data_75d564 = var_2c
    
    int32_t var_4 = 0
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    void* eax_7 = *(arg1 + 0x28)
    int32_t performanceCount_1 = performanceCount
    int32_t performanceCount_2 = performanceCount_1
    int32_t edx_1 = performanceCount_1 - *(eax_7 - 8)
    int32_t var_24
    int32_t var_14_1 = var_24
    int32_t ecx_1 = sbb.d(var_24, *(eax_7 - 4), performanceCount_1 u< *(eax_7 - 8))
    int32_t temp2_1 = *(arg1 + 0x30)
    *(arg1 + 0x30) += edx_1
    *(arg1 + 0x34) = adc.d(*(arg1 + 0x34), ecx_1, temp2_1 + edx_1 u< temp2_1)
    result = (**(eax_7 - 0x10))(0)
    *(arg1 + 0x28) -= 0x10

fsbase->NtTib.ExceptionList = ExceptionList
return result
