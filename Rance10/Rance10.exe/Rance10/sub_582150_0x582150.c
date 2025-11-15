// 函数: sub_582150
// 地址: 0x582150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x24c)
void* esi = arg1 + 4
void* var_60 = esi
int32_t var_48
int32_t* eax_3
int32_t ecx_1
eax_3, ecx_1 = sub_5ccc10(&var_48)

if (arg1 + 0x218 != eax_3)
    ecx_1 = *eax_3
    *eax_3 = 0
    int32_t eax_4 = *(arg1 + 0x218)
    *(arg1 + 0x218) = ecx_1
    
    if (eax_4 != 0)
        int32_t var_60_1 = 0xa4
        operator new(eax_4)

int32_t eax_5 = var_48

if (eax_5 != 0)
    int32_t var_60_2 = 0xa4
    operator new(eax_5)

void* result

if (*(arg1 + 0x218) != 0)
    ecx_1.b = 0
    char temp0_1 = *(arg1 + 0x21c)
    *(arg1 + 0x21c) = 0
    ecx_1.b = temp0_1
    result.b = 1
else
    if (*(esi + 0x14) u>= 0x10)
        esi = *esi
    
    void* var_4c = esi
    void* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76808c, 0x37)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_44
    sub_5e01e0(sub_409240(&var_4c, &var_2c, &var_44, &var_4c))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
