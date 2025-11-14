// 函数: ___FrameUnwindToState
// 地址: 0x6a8ba4
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x748140
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x748140 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38 = &data_6a8bb0
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi

if (arg2[1] s> 0x80)
    esi = *(arg1 + 8)
else
    esi = sx.d(*(arg1 + 8))

int32_t var_20 = esi
uint32_t* eax_2 = __getptd()
eax_2[0x24] += 1
int32_t var_8_1 = 0

while (esi != arg3)
    if (esi s<= 0xffffffff || esi s>= arg2[1])
        _inconsistency()
        noreturn
    
    int32_t eax_4 = arg2[2]
    int32_t edx_1 = *(eax_4 + (esi << 3))
    int32_t var_8_2 = 1
    
    if (*(eax_4 + (esi << 3) + 4) != 0)
        *(arg1 + 8) = edx_1
        __CallSettingFrame@12(arg2, *(arg2[2] + (esi << 3) + 4), arg1, 0x103)
    
    int32_t var_8_3 = 0
    esi = edx_1
    int32_t var_20_1 = esi

int32_t var_8_4 = 0xfffffffe
$LN18()

if (esi != arg3)
    _inconsistency()
    noreturn

*(arg1 + 8) = esi
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a8c5f
return arg1
