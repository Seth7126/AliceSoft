// 函数: sub_481250
// 地址: 0x481250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b39c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
struct partsengine::CConstructionProcess::VTable** edi = arg2

if (edi u< ecx)
    result = *arg1

struct partsengine::CConstructionProcess::VTable** ecx_2

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        int32_t var_20_3 = ecx
        result = sub_481380(arg1)
    
    ecx_2 = arg1[1]
    arg2 = ecx_2
    struct partsengine::CConstructionProcess::VTable** var_10_2 = ecx_2
    int32_t var_4_1 = 1
    
    if (ecx_2 != 0)
        result = sub_4815b0(ecx_2, edi)
else
    if (ecx == arg1[2])
        int32_t var_20_1 = ecx
        sub_481380(arg1)
    
    ecx_2 = arg1[1]
    result = &(*arg1)[(edi - result) s/ 0xc0 * 0x30]
    arg2 = ecx_2
    struct partsengine::CConstructionProcess::VTable** var_10_1 = ecx_2
    int32_t var_4 = 0
    
    if (ecx_2 != 0)
        result = sub_4815b0(ecx_2, result)
arg1[1] = &arg1[1][0x30]
fsbase->NtTib.ExceptionList = ExceptionList
return result
