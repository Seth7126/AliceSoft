// 函数: ?_Init@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IAEXABV_Locinfo@2@@Z
// 地址: 0x6dced7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 8
int32_t (* var_c)(void* arg1) = sub_749b10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_28
void* const var_2c_1 = &data_6dcee3
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg1
int32_t var_2c = arg2
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
int32_t var_8 = 0
sub_6d66bf(arg1, nullptr)
int32_t result = __Getdateorder(0)
*(arg1 + 0x14) = result
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6dcf0c
return result
