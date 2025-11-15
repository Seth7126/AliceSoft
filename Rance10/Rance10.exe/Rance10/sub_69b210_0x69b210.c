// 函数: sub_69b210
// 地址: 0x69b210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7486b7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct 
    std::_Ref_count_base::std::_Ref_count_obj<struct Concurrency::details::_ExceptionHolder>::VTable
    ** var_14 = arg1
arg1[1] = 1
arg1[2] = 1
int32_t var_8_1 = 0
*arg1 = &std::_Ref_count_obj<struct Concurrency::details::_ExceptionHolder>::`vftable'{for `std::_Ref_count_base'}
void* var_18 = &arg1[3]
var_8_1.b = 1

if (arg1 != 0xfffffff4)
    arg1[3] = 0
    __ExceptionPtrCopy(&arg1[4], arg2)
    var_8_1.b = 2
    arg2 = &arg1[6]
    arg1[6] = *arg3
    sub_4275f0(&arg1[7], &arg3[1])

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
