// 函数: sub_437990
// 地址: 0x437990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b39c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t result = esi[1]
void* edi = arg2

if (edi u< result)
    arg1 = *esi

struct advengine::CToken::VTable** ecx_2

if (edi u>= result || arg1 u> edi)
    if (result == esi[2])
        int32_t* var_20_2 = arg1
        result = sub_437af0(esi)
    
    ecx_2 = esi[1]
    arg2 = ecx_2
    struct advengine::CToken::VTable** var_10_2 = ecx_2
    int32_t var_4_1 = 1
else
    if (result == esi[2])
        int32_t* var_20_1 = arg1
        result = sub_437af0(esi)
    
    ecx_2 = esi[1]
    edi = ((edi - arg1) & 0xffffffc0) + *esi
    arg2 = ecx_2
    struct advengine::CToken::VTable** var_10_1 = ecx_2
    int32_t var_4 = 0

if (ecx_2 != 0)
    result = sub_4381d0(ecx_2, edi)

esi[1] += 0x40
fsbase->NtTib.ExceptionList = ExceptionList
return result
