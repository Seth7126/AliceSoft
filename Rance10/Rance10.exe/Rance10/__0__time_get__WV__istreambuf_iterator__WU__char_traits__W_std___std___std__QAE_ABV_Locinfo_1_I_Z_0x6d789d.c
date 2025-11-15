// 函数: ??0?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QAE@ABV_Locinfo@1@I@Z
// 地址: 0x6d789d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 4
int32_t (* var_c)(void* arg1) = sub_74a057
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6d78a9
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::time_base::std::time_get<uint16_t>::VTable** var_14 = arg1
arg1[1] = arg3
int32_t var_8 = 0
*arg1 = &std::time_get<uint16_t>::`vftable'{for `std::time_base'}
std::time_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Init(
    arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d78cd
return arg1
