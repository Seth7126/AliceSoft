// 函数: sub_42b4b0
// 地址: 0x42b4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729d10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = arg3
sub_42ccf0(arg2 + 0x38, arg2 + 0x2c)
void* ebx_1 = *(arg2 + 0x2c)

if (ebx_1 != *(arg2 + 0x34))
    *(arg2 + 0x2c) = ebx_1 + 0x28
else
    ebx_1 = arg2 + 4

int32_t* result

if (*(ebx_1 + 4) == 5)
    void* var_44
    int32_t* eax_6 = sub_419600(ebx_1 + 8, U"''(.;),{}[]0-=%", &var_44, ebx_1 + 8)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    void* var_58
    char var_2c[0x10]
    sub_425bb0(arg1 + 8, sub_425e30(&var_58, sub_4176f0(eax_6.b, eax_6, &var_2c, '(.;),{}[]0-=%")))
    void* ecx_8 = var_58
    
    if (ecx_8 != 0)
        int32_t var_50
        sub_403160(ecx_8, (var_50 - ecx_8) s>> 2, 4)
        var_58 = nullptr
        int32_t var_54_1 = 0
        int32_t var_50_1 = 0
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c[0].d, var_18 + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c[0] = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    *(arg1 + 0x14) = *(ebx_1 + 0x20)
    *(arg1 + 0x18) = *(ebx_1 + 0x24)
    void* var_64
    sub_425bb0(arg1 + 0x1c, sub_425e30(&var_64, ebx_1 + 8))
    void* ecx_11 = var_64
    int32_t var_5c
    
    if (ecx_11 != 0)
        sub_403160(ecx_11, (var_5c - ecx_11) s>> 2, 4)
    *(arg2 + 0x3c) -= 4
    result.b = 1
else
    result = *(arg2 + 0x38)
    
    if (result != *(arg2 + 0x3c))
        *(arg2 + 0x2c) = result[((*(arg2 + 0x3c) - result) s>> 2) - 1]
        *(arg2 + 0x3c) -= 4
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
