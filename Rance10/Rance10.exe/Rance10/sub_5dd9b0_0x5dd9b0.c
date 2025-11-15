// 函数: sub_5dd9b0
// 地址: 0x5dd9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7416a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
int32_t var_8_1 = 0
int32_t var_18 = 0
struct std::_Ref_count_base::std::_Ref_count_obj<class sealengine::CSurfaceTexture>::VTable** 
    eax_3 = sub_6e810c(0x14)
struct std::_Ref_count_base::std::_Ref_count_obj<class sealengine::CSurfaceTexture>::VTable** 
    var_14_1 = eax_3
eax_3[1] = 1
eax_3[2] = 1
*eax_3 =
    &std::_Ref_count_obj<class sealengine::CSurfaceTexture>::`vftable'{for `std::_Ref_count_base'}

if (eax_3 != 0xfffffff4)
    eax_3[3] = 0
    eax_3[4] = 0

arg1[1] = eax_3
*arg1 = &eax_3[3]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
