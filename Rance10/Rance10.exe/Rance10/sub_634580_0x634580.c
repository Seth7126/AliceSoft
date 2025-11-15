// 函数: sub_634580
// 地址: 0x634580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7459b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t var_8_1 = 0
struct std::_Node_base::std::_Node_capture::VTable** eax_3 = sub_635b00(&arg1[9], 0)
sub_635940(arg1)

if (*arg1 != arg1[2])
    sub_6d0967(0xe)
    noreturn

sub_635a70(&arg1[9], eax_3)
sub_636ee0(&arg1[9], 0x15)
void* result = arg1[9]
uint32_t eax_4 = arg1[0x10]
*(result + 0x14) = eax_4
*(result + 0x1c) = arg1[3] + 1
sub_62d200(eax_4, 0, result, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
return result
