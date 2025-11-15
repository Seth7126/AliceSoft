// 函数: sub_558830
// 地址: 0x558830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73afdf
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class partsengine::ISound>::partsengine::CSound::VTable** result =
    sub_6e810c(0x2c)
struct common::SuicideRefCounter<class partsengine::ISound>::partsengine::CSound::VTable** 
    result_1 = result
int32_t var_8_1 = 0
result[1] = 1
*result =
    &partsengine::CSound::`vftable'{for `common::SuicideRefCounter<class partsengine::ISound>'}
result[2] = 2
result[8] = 0xf
result[7] = 0
result[3].b = 0
sub_403590(&result[3], arg1, 0, 0xffffffff)
result[9] = 0
result[0xa] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
