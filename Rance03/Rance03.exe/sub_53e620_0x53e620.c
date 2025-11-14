// 函数: sub_53e620
// 地址: 0x53e620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x1d0) == 0)
    struct sealengine::CLightParamList::VTable** eax_3 = sub_69adc6(0x1c)
    struct sealengine::CLightParamList::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    
    if (eax_3 == 0)
        result = nullptr
    else
        result = sub_547530(eax_3)
    
    *(arg1 + 0x1d0) = result

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
