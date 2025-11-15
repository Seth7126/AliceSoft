// 函数: ?_Init@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IAEXABV_Locinfo@2@@Z
// 地址: 0x6dcf21
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 8
int32_t (* var_c)(void* arg1) = sub_749b2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_28
void* const var_2c_1 = &data_6dcf2d
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg1
int32_t var_2c = arg2
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
int32_t var_8 = 0
std::time_get<wchar_t,wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getvals<wchar_t>(
    arg1, nullptr)
int32_t result = __Getdateorder(u":AM:am:PM:pm")
*(arg1 + 0x14) = result
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6dcf56
return result
