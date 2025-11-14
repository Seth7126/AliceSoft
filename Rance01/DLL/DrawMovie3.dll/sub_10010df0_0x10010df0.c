// 函数: sub_10010df0
// 地址: 0x10010df0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_1001950b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2

if (ebx == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004003

void* eax_4 = sub_10001dc9(0x14)
arg2 = eax_4
int32_t var_4 = 0
void* eax_10

if (eax_4 == 0)
    eax_10 = nullptr
else
    *(eax_4 + 8) = arg1 - 0xc
    *eax_4 = &CEnumMediaTypes::`vftable'{for `IEnumMediaTypes'}
    *(eax_4 + 4) = 0
    *(eax_4 + 0x10) = 1
    (*(*arg1 + 4))(arg1)
    *(eax_4 + 0xc) = (*(**(eax_4 + 8) + 0x10))(eax_2)
    eax_10 = eax_4

*ebx = eax_10
int32_t eax_11 = neg.d(eax_10)
fsbase->NtTib.ExceptionList = ExceptionList
return (sbb.d(eax_11, eax_11, eax_10 != 0) & 0x7ff8fff2) - 0x7ff8fff2
