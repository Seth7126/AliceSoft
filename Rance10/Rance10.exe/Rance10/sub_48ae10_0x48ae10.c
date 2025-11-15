// 函数: sub_48ae10
// 地址: 0x48ae10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f202
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_7fcb6c

if (ecx_1 != 0)
    ecx_1 = (*(*ecx_1 + 4))(1)
    data_7fcb6c = 0

int32_t ecx
int32_t var_1c = ecx
int32_t* var_20 = ecx_1
sub_4809e0(data_7fcc98, data_7fcc9c)
data_7fcc9c = data_7fcc98
struct kiwi::IFinalizable::kiwi::CKiwiSoundEngine::VTable** eax_5 = sub_6e810c(0x940)
struct kiwi::IFinalizable::kiwi::CKiwiSoundEngine::VTable** var_14_1 = eax_5
int32_t var_8_1 = 0
data_7fcb6c = sub_487620(eax_5)
struct kiwi::IFinalizable::kiwi::CKiwiSoundEngine::VTable** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
