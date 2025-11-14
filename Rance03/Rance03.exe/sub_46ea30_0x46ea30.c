// 函数: sub_46ea30
// 地址: 0x46ea30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b957b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18
int32_t* arg_4
sub_42f3d0(arg1 + 0xc, &var_18, &arg_4)
int32_t* eax_3 = var_18

if (eax_3 != *(arg1 + 0xc))
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3[5]

int32_t* eax_5 = sub_69adc6(0x20)
var_18 = eax_5
int32_t var_4 = 0
struct kiwi::CMultiChannelSet::VTable** result

if (eax_5 == 0)
    result = nullptr
else
    result = sub_46f730(eax_5, *(arg1 + 4))

int32_t var_4_1 = 0xffffffff
char ecx_3 = *(arg1 + 0x20)
result[2] = *(arg1 + 0x1c)
var_18 = arg_4
result[3].b = ecx_3
struct kiwi::CMultiChannelSet::VTable** result_1 = result
int32_t* eax_9
int32_t ecx_6
eax_9, ecx_6 = sub_442a00(&var_18)
int32_t* var_2c_3 = eax_9
void* var_30_1 = &eax_9[4]
sub_430ad0(arg1 + 0xc, &var_18, ecx_6)
fsbase->NtTib.ExceptionList = ExceptionList
return result
