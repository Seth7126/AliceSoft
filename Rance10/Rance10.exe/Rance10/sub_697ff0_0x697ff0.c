// 函数: sub_697ff0
// 地址: 0x697ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748129
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
sub_6971d0()
int32_t var_1c
std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
    &var_1c, &data_7fd534)
int32_t edx = var_1c
*arg1 = edx
int32_t var_18
arg1[1] = var_18
arg1[2] = edx
int32_t var_8_1 = 1
COMRefPtr<class IDebugSSubSection>::COMRefPtr<class IDebugSSubSection>(&arg1[3])
var_8_1.b = 2
sub_697fd0(&arg1[4])
__builtin_memset(&arg1[7], 0, 0x12)
arg1[6].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
