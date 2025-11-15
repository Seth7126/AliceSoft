// 函数: __isctype_l
// 地址: 0x71784f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* var_24
_LocaleUpdate::_LocaleUpdate(&var_24, arg3)
int32_t result
int32_t* var_20
char var_18
uint32_t eax_5

if (arg1 + 1 u> 0x100)
    char eax_7 = (arg1 s>> 8).b
    uint8_t var_14
    int32_t ecx_2
    
    if (__isleadbyte_l(eax_7, &var_20) == 0)
        var_14 = arg1.b
        char var_13_2 = 0
        ecx_2 = 1
    else
        var_14 = eax_7
        char var_13_1 = arg1.b
        char var_12_1 = 0
        ecx_2 = 2
    
    int32_t var_10 = 0
    int16_t var_c_1 = 0
    BOOL eax_12 = ___acrt_GetStringTypeA(&var_20, 1, &var_14, ecx_2, &var_10, var_20[2], 1)
    
    if (eax_12 != 0)
        eax_5 = zx.d(var_10.w)
        goto label_7178ff
    
    if (var_18 != eax_12.b)
        void* eax_13 = var_24
        *(eax_13 + 0x350) &= 0xfffffffd
    
    result = 0
else
    eax_5 = zx.d(*(*var_20 + (arg1 << 1)))
label_7178ff:
    result = eax_5 & arg2
    
    if (var_18 != 0)
        void* ecx_3 = var_24
        *(ecx_3 + 0x350) &= 0xfffffffd
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
