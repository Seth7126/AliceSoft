// 函数: sub_6e2e5a
// 地址: 0x6e2e5a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x34
int32_t (* var_c)(void* arg1) = sub_749ff6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_8 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_8
void* const var_58_3 = &data_6e2e66
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = 0
int32_t var_20 = 0x250021
int16_t var_1c
int16_t* edi = &var_1c
void* const esi = &data_7501e4
int32_t var_24 = 7
int16_t var_38 = 0
*edi = *esi
edi[2] = *(esi + 4)
int32_t var_8 = 0
int16_t eax_1
eax_1.b = arg7

if (eax_1.b != 0)
    var_1c = sx.w(eax_1.b)
    int16_t var_1a_1 = sx.w(arg6)
else
    var_1c = sx.w(arg6)

int32_t var_58 = 0x10
int32_t esi_3 = 0x10
int32_t eax_3

while (true)
    sub_631b70(&var_38, esi_3, 0)
    int16_t* eax_2 = var_38.d
    
    if (var_24 u< 8)
        eax_2 = &var_38
    
    eax_3 = __Strftime(eax_2, var_28, &var_20, arg5, *(arg1 + 8))
    
    if (eax_3 != 0)
        break
    
    esi_3 *= 2

int16_t* ecx_1 = var_38.d
int16_t* eax_4 = ecx_1

if (var_24 u< 8)
    eax_4 = &var_38
    ecx_1 = &var_38

std::_Copy_impl<wchar_t*,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >(
    arg2, &ecx_1[1], &eax_4[eax_3], arg3, arg4)
sub_631740(&var_38, 1, nullptr)
@__security_check_cookie@4(eax_8 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e2f31
return arg2
