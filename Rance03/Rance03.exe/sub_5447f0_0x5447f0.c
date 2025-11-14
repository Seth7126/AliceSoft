// 函数: sub_5447f0
// 地址: 0x5447f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CInstance::VTable** eax_3 = sub_69adc6(0x208)
struct sealengine::CInstance::VTable** var_10_1 = eax_3
int32_t var_4 = 0
struct sealengine::CInstance::VTable** result

if (eax_3 == 0)
    result = nullptr
else
    result = sub_53db30(eax_3, arg2, *(arg1 + 0x10))

eax_3.b = *(arg1 + 0x14)
result[0x7d].b = eax_3.b
result[0x7e] = arg1
result[0x80] = *(arg1 + 0x18)
result[0x81] = *(arg1 + 0x1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
