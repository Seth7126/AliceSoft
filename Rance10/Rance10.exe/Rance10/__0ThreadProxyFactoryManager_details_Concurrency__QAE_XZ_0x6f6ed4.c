// 函数: ??0ThreadProxyFactoryManager@details@Concurrency@@QAE@XZ
// 地址: 0x6f6ed4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74ad49
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_6f6ee0
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
*arg1 = 0
arg1[1] = 0
sub_6ea728(&arg1[3])
int32_t var_8 = 0
arg1[2] = sub_6eb318()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f6f07
return arg1
