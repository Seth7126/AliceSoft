// 函数: sub_4cdec0
// 地址: 0x4cdec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
int32_t var_2c = arg2
void** var_34
int32_t* eax_3 = sub_4ce600(&var_1c, var_34)
void** esi = sub_432330(arg1 + 0x6c, eax_3)
void** result

if (esi != *(arg1 + 0x6c))
    result = sub_412ca0(eax_3, &esi[4])

if (esi == *(arg1 + 0x6c) || result.b != 0)
    esi = *(arg1 + 0x6c)

int32_t* ebx_1
ebx_1.b = esi != *(arg1 + 0x6c)
int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c, var_8 + 1, 1)

result.b = ebx_1.b
@__security_check_cookie@4(eax_1 ^ &var_1c)
return result
