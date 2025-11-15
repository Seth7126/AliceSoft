// 函数: sub_5d25f0
// 地址: 0x5d25f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741144
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_8_1 = 0
int32_t var_1c = 0
struct std::_Ref_count_base::std::_Ref_count_obj<class sealengine::CParticleEffect>::VTable** 
    eax_3 = sub_6e810c(0x5c)
struct std::_Ref_count_base::std::_Ref_count_obj<class sealengine::CParticleEffect>::VTable** 
    var_20 = eax_3
int32_t var_8_2 = 1
eax_3[1] = 1
eax_3[2] = 1
*eax_3 =
    &std::_Ref_count_obj<class sealengine::CParticleEffect>::`vftable'{for `std::_Ref_count_base'}
void* var_24 = &eax_3[3]
var_8_2.b = 3

if (eax_3 != 0xfffffff4)
    sub_599a20(&eax_3[3], arg2, arg4)

arg3[1] = eax_3
*arg3 = &eax_3[3]
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
