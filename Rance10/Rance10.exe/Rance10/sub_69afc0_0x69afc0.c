// 函数: sub_69afc0
// 地址: 0x69afc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748628
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_14 = arg3
int32_t var_8_1 = 0
int32_t var_18 = 0
struct 
    std::_Ref_count_base::std::_Ref_count_obj<struct Concurrency::details::_ExceptionHolder>::VTable
    ** eax_3 = sub_6e810c(0x28)
struct 
    std::_Ref_count_base::std::_Ref_count_obj<struct Concurrency::details::_ExceptionHolder>::VTable
    ** var_1c = eax_3
int32_t var_8_2 = 1
struct 
    std::_Ref_count_base::std::_Ref_count_obj<struct Concurrency::details::_ExceptionHolder>::VTable
    ** eax_4 = sub_69b210(eax_3, arg2, arg4)
arg3[1] = eax_4
*arg3 = &eax_4[3]
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
