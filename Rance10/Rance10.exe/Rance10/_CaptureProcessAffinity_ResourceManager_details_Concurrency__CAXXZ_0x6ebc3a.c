// 函数: ?CaptureProcessAffinity@ResourceManager@details@Concurrency@@CAXXZ
// 地址: 0x6ebc3a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x24
int32_t (* var_c)(void* arg1) = sub_74a5e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_8 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_8
void* const var_48_2 = &data_6ebc46
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList

if (GetProcessAffinityMask(GetCurrentProcess(), &data_7fc2b8, &data_7fc2bc) == 0)
    enum WIN32_ERROR eax_2 = GetLastError()
    
    if (eax_2 s> NO_ERROR)
        eax_2 = zx.d(eax_2.w) | 0x80070000
    
    void var_34
    Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_34, 
        eax_2)
    sub_70021b(&var_34, &data_7dd12c)
    noreturn

int16_t* result = data_7fc2b8

if (result != data_7fc2bc)
    if (data_7fc2d8 s< 4)
        result = sub_6e810c(8)
        int16_t* result_2 = result
        int16_t* result_3 = result_2
        int32_t var_8 = 0
        
        if (result_2 == 0)
            result_2 = nullptr
        else
            int32_t* edx_2 = sub_6e810c(0xc)
            int32_t* var_24_2 = edx_2
            
            if (edx_2 == 0)
                edx_2 = nullptr
            else
                int32_t ecx_8 = data_7fc2b8
                *edx_2 = 0
                void* edi_6 = &edx_2[1]
                *edi_6 = 0
                *(edi_6 + 4) = 0
                edx_2[1].w = 0
                *edx_2 = ecx_8
            
            *(result_2 + 4) = edx_2
            result = 1
            *result_2 = 1
        
        data_7fc2c4 = result_2
    else
        void var_20
        Concurrency::details::HardwareAffinity::HardwareAffinity(&var_20, GetCurrentThread())
        int32_t* esi_1 = sub_6e810c(0xc)
        int32_t* var_24_1 = esi_1
        
        if (esi_1 == 0)
            esi_1 = nullptr
        else
            int32_t edx_1 = data_7fc2b8
            *esi_1 = 0
            void* edi_2 = &esi_1[1]
            *edi_2 = 0
            *(edi_2 + 4) = 0
            int16_t var_1c
            esi_1[1].w = var_1c
            *esi_1 = edx_1
        
        result = sub_6e810c(8)
        int16_t* result_1 = result
        
        if (result == 0)
            result = nullptr
        else
            *(result + 4) = esi_1
            *result = 1
        
        data_7fc2c4 = result

@__security_check_cookie@4(eax_8 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ebd59
return result
