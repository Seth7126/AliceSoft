// 函数: sub_57f760
// 地址: 0x57f760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d229
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_14 = arg1
int32_t var_8_1 = 0
int32_t var_18 = 0
struct std::_Ref_count_base::std::_Ref_count_obj<class sealengine::CGameTexture>::VTable** eax_3 =
    sub_6e810c(0x44)
struct std::_Ref_count_base::std::_Ref_count_obj<class sealengine::CGameTexture>::VTable** 
    var_14_1 = eax_3
struct std::_Ref_count_base::std::_Ref_count_obj<class sealengine::CGameTexture>::VTable** eax_4 =
    sub_57f8b0(eax_3, arg2)
arg1[1] = eax_4
*arg1 = &eax_4[3]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
