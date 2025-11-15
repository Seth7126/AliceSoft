// 函数: sub_587380
// 地址: 0x587380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d6d7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_8_1 = 0
int32_t var_1c = 0
struct std::_Ref_count_base::std::_Ref_count_obj<class sealengine::CInstance>::VTable** eax_3 =
    sub_6e810c(0x25c)
struct std::_Ref_count_base::std::_Ref_count_obj<class sealengine::CInstance>::VTable** var_20 =
    eax_3
int32_t var_8_2 = 1
eax_3[1] = 1
eax_3[2] = 1
*eax_3 = &std::_Ref_count_obj<class sealengine::CInstance>::`vftable'{for `std::_Ref_count_base'}
void* var_24 = &eax_3[3]
var_8_2.b = 3

if (eax_3 != 0xfffffff4)
    sub_5813a0(&eax_3[3], *arg2, *arg4, *arg5, arg6, arg7)

arg3[1] = eax_3
*arg3 = &eax_3[3]
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
