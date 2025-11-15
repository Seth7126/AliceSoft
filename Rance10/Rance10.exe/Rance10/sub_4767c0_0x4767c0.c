// 函数: sub_4767c0
// 地址: 0x4767c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_20
int32_t eax_1 = __security_cookie ^ &var_20
var_20 = arg2

if (arg3 == 0)
    int32_t result
    result.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_20)
    return result

void* var_1c
int32_t ebx
ebx.b = sub_407560(sub_403360(&var_1c, arg3), 0x75ce83)
int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c, var_8 + 1, 1)

int32_t* edi_1 = *(arg1 + 0xc)

for (void** i = *edi_1; i != edi_1; i = *i)
    if ((*(*i[2] + 0x10))(var_20, arg3) != 0 && ebx.b == 0)
        @__security_check_cookie@4(eax_1 ^ &var_20)
        return 1

@__security_check_cookie@4(eax_1 ^ &var_20)
return ebx.b
