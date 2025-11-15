// 函数: sub_6d7cad
// 地址: 0x6d7cad
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x10
int32_t (* var_c)(void* arg1) = sub_7495f2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_30
void* const var_34_1 = &data_6d7cb9
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1
void** var_1c = esi
int32_t edi_1 = arg2 | 7

if (edi_1 u<= 0x7ffffffe)
    int32_t var_18_1 = 3
    int32_t ebx_1 = esi[5]
    uint32_t ecx_1 = ebx_1 u>> 1
    
    if (ecx_1 u> divu.dp.d(0:edi_1, 3))
        edi_1 = 0x7ffffffe
        
        if (ebx_1 u<= 0x7ffffffe - ecx_1)
            edi_1 = ecx_1 + ebx_1
else
    edi_1 = arg2

int32_t var_8 = 0
char* eax_4 = sub_403100(edi_1 + 1, 2, 1)

if (arg3 != 0)
    char* ecx_2
    
    if (esi[5] u< 8)
        ecx_2 = esi
    else
        ecx_2 = *esi
    
    sub_6df102(eax_4, ecx_2, arg3)

std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Tidy(
    esi, 1, nullptr)

if (esi != 0)
    *esi = eax_4

esi[5] = edi_1
bool cond:0 = esi[5] u< 8
esi[4] = arg3

if (not(cond:0))
    esi = *esi

*(esi + (arg3 << 1)) = 0
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d7d8b
return 0
