// 函数: sub_60c0f0
// 地址: 0x60c0f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = sub_69adc6(0x10)
result_1 = result_2
int32_t var_4 = 0
struct IViewport::graphengined3d11::CViewport::VTable** result

if (result_2 == 0)
    result = nullptr
else
    result = sub_61b250(result_2, arg1)

int32_t var_4_1 = 0xffffffff
struct IViewport::graphengined3d11::CViewport::VTable* eax_4 = *result
result_1 = result
eax_4->vFunc_0(eax_2)
sub_412de0(arg1 + 0xd0, &result_1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
