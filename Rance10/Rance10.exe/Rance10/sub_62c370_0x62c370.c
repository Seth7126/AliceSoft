// 函数: sub_62c370
// 地址: 0x62c370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_5c
void* var_18 = arg1
int32_t ebx
ebx.b = 0
std::locale::_Init(0)
int32_t* esi = arg2
int32_t var_8_1 = 0
int32_t* eax_3

if (esi[5] u< 0x10)
    eax_3 = esi
else
    eax_3 = *esi

int32_t* var_60 = eax_3
void var_4c
sub_62c0e0(&var_4c, &data_6d4616)
var_8_1.b = 1

if (sub_62c630(&var_4c) == 0)
    std::locale::_Locimp::_Makeloc(&var_4c, 0x3f, *(arg1 + 4), nullptr)
    *(*(arg1 + 4) + 0x10) = 0x3f
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    sub_630d40(*(arg1 + 4) + 0x18, esi)
else
    ebx.b = 1

int32_t result = sub_62c1c0(&var_4c)
int32_t var_8_2 = 0xffffffff

if (ebx.b == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t* eax_7 = (*(**(arg1 + 4) + 8))()

if (eax_7 != 0)
    (**eax_7)(1)

sub_6d0987("bad locale name")
noreturn
