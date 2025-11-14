// 函数: sub_1000611d
// 地址: 0x1000611d
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x1001e478
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x1001e478 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38 = &data_10006129
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
int32_t esi

if (*(edi + 4) s> 0x80)
    esi = *(arg1 + 8)
else
    esi = sx.d(*(arg1 + 8))

int32_t var_20 = esi
void* eax_1 = __getptd() + 0x90
*eax_1 += 1
int32_t var_8_1 = 0

while (esi != arg3)
    if (esi s<= 0xffffffff || esi s>= *(edi + 4))
        sub_10006d2a()
        noreturn
    
    int32_t* ecx_2 = *(edi + 8) + (esi << 3)
    esi = *ecx_2
    int32_t var_24_1 = esi
    int32_t var_8_2 = 1
    
    if (ecx_2[1] != 0)
        *(arg1 + 8) = esi
        int32_t* ecx_3 = *(edi + 8)
        esi, edi = __CallSettingFrame@12(ecx_3, ecx_3[esi * 2 + 1], arg1, 0x103)
    
    int32_t var_8_3 = 0
    int32_t var_20_1 = esi

int32_t var_8_4 = 0xfffffffe
void* result = sub_100061e3()

if (esi != arg3)
    sub_10006d2a()
    noreturn

*(arg1 + 8) = esi
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_100061dc
return result
