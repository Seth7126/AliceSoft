// 函数: sub_630970
// 地址: 0x630970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = &arg1[0xa]
*arg1 = &std::wstring_convert<class std::codecvt<wchar_t, char, struct _Mbstatet>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::`vftable'
int32_t eax_3 = esi[5]

if (eax_3 u>= 8)
    sub_403160(*esi, eax_3 + 1, 2)

esi[5] = 7
bool cond:0 = esi[5] u< 8
esi[4] = 0

if (not(cond:0))
    esi = *esi

*esi = nullptr
void* esi_1 = &arg1[4]
int32_t* result = *(esi_1 + 0x14)

if (result u>= 0x10)
    result = sub_403160(*esi_1, result + 1, 1)

*(esi_1 + 0x14) = 0xf
bool cond:1 = *(esi_1 + 0x14) u< 0x10
*(esi_1 + 0x10) = 0

if (not(cond:1))
    esi_1 = *esi_1

*esi_1 = 0
int32_t var_8_1 = 0
int32_t* ecx = arg1[3]

if (ecx != 0)
    result = (*(*ecx + 8))(eax_2)
    
    if (result != 0)
        result = (**result)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
