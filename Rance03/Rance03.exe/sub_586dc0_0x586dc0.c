// 函数: sub_586dc0
// 地址: 0x586dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c776b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_586f40(arg1)
int32_t var_20 = 0
int32_t var_14 = 0
uint32_t eax_3
int32_t ecx
int32_t edx
int32_t ebx
eax_3, ebx, ecx, edx = __cpuid(0, 0)
int32_t var_1c = ebx
int32_t var_18 = ecx
int32_t var_14_1 = edx

if (eax_3 != 0)
    int32_t eax_4
    int32_t ebx_1
    eax_4, ebx_1, ecx, edx = __cpuid(1, 0)
    int32_t var_20_2 = eax_4
    int32_t var_1c_1 = ebx_1
    int32_t var_18_1 = ecx
    eax_3.b = (edx u>> 0x19).b & 1
else
    eax_3.b = 0

eax_3.b = eax_3.b == 0

if (eax_3.b != 0)
    sub_59f4e0(eax_3, edx, ecx, 0x6e57dc, eax_2)

data_75d504 = GetCurrentThreadId()
*(arg1 + 0x210) = arg3
(**arg3)(eax_2)
*(arg1 + 0x21c) = arg4
int32_t ecx_2 = *(arg4 + 0x60)

if (ecx_2 == 0)
    int32_t* eax_8 = sub_69adc6(0x1c)
    arg3 = eax_8
    int32_t var_4 = 0
    struct sealengine::CGameTextureManager::VTable** eax_9
    
    if (eax_8 == 0)
        eax_9 = nullptr
    else
        eax_9 = sub_53b2e0(eax_8)
    
    int32_t var_4_1 = 0xffffffff
    *(arg4 + 0x60) = eax_9
    eax_9[6] = arg4
    ecx_2 = *(arg4 + 0x60)

int32_t eax_10 = *(arg1 + 0x21c)
*(arg1 + 0x220) = ecx_2
*(arg1 + 0x20c) = ecx_2
*(arg1 + 0x208) = eax_10
int32_t* result

if (sub_587c10(arg1 + 4).b != 0)
    result = (*(*arg2 + 8))()
    
    if (result != 0)
        result = (**result)(0x6e5d0c)
        *(arg1 + 0x228) = result
        
        if (result != 0)
            *(arg1 + 0x22c) = 0
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
