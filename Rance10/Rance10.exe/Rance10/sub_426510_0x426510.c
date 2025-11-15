// 函数: sub_426510
// 地址: 0x426510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_wcrtomb_s_l@@YAHQAHQADI_WQAU_Mbstatet@@QAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
sub_42ccf0(edi + 0x38, edi + 0x2c)
void* ecx_1 = *(edi + 0x2c)
int32_t var_14 = arg3
int32_t eax_5 = *(edi + 0x34)
int32_t var_18 = arg1
arg2 = ecx_1

if (ecx_1 != eax_5)
    *(edi + 0x2c) = ecx_1 + 0x28
    eax_5 = *(edi + 0x34)
else
    ecx_1 = edi + 4
    arg2 = ecx_1

if (*(ecx_1 + 4) != 1)
    int32_t eax_7 = *(edi + 0x38)
    
    if (eax_7 != *(edi + 0x3c))
        *(edi + 0x2c) = *(eax_7 + ((*(edi + 0x3c) - eax_7) s>> 2 << 2) - 4)
        *(edi + 0x3c) -= 4
    
    eax_7.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7

void* edx = *(edi + 0x2c)

if (edx != eax_5)
    *(edi + 0x2c) = edx + 0x28
else
    edx = edi + 4

struct _EXCEPTION_REGISTRATION_RECORD** var_24

if (*(edx + 4) == 0xc)
    var_24 = nullptr
    int32_t var_20 = 0
    int32_t var_1c = 0
    int32_t var_8_1 = 0
    sub_4266d0(&var_18, ecx_1, &var_24)
    sub_427180(&var_24)
    *(edi + 0x3c) -= 4
    int32_t eax_9
    eax_9.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_9

int32_t eax_10 = *(edi + 0x2c)

if (eax_10 != *(edi + 0x30))
    eax_10 -= 0x28
    *(edi + 0x2c) = eax_10

var_24 = nullptr
int32_t var_20_1 = 0
int32_t var_1c_1 = 0
int32_t var_8_2 = 1
int32_t* ebx

if (sub_426900(eax_10, &var_24, edi, arg3, arg4) != 0)
    void* ecx_15 = *(edi + 0x2c)
    
    if (ecx_15 != *(edi + 0x34))
        *(edi + 0x2c) = ecx_15 + 0x28
    else
        ecx_15 = edi + 4
    
    if (*(ecx_15 + 4) == 0xc)
        sub_4266d0(&var_18, arg2, &var_24)
        ebx.b = 1
    else
        sub_42ccd0(edi)
        sub_4073f0(0x75d730)
        ebx.b = 0
else
    int32_t eax_12 = *(edi + 0x38)
    
    if (eax_12 == *(edi + 0x3c))
        ebx.b = 0
    else
        *(edi + 0x2c) = *(eax_12 + ((*(edi + 0x3c) - eax_12) s>> 2 << 2) - 4)
        *(edi + 0x3c) -= 4
        ebx.b = 0

sub_427180(&var_24)
int32_t eax_15
eax_15.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
