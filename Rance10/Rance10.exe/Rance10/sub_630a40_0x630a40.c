// 函数: sub_630a40
// 地址: 0x630a40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745617
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct std::wstring_convert<class std::codecvt<wchar_t, char, struct _Mbstatet>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::wstring_convert<class std::codecvt<wchar_t, char, struct _Mbstatet>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::VTable
    ** var_14_1 = arg1
*arg1 = &std::wstring_convert<class std::codecvt<wchar_t, char, struct _Mbstatet>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::`vftable'
int32_t var_8_1 = 0
arg1[3] = std::locale::_Init(1)
void* eax_4 = &arg1[4]
int32_t var_8_2 = 1
*(eax_4 + 0x14) = 0xf
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

*eax_4 = 0
void* eax_5 = &arg1[0xa]
*(eax_5 + 0x14) = 7
*(eax_5 + 0x10) = 0

if (*(eax_5 + 0x14) u>= 8)
    eax_5 = *eax_5

*eax_5 = 0
var_8_2.b = 3
arg1[0x12].w = 0
*(arg1 + 0x4a) = 0
sub_631580(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
