// 函数: sub_4ce540
// 地址: 0x4ce540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t eax_1 = __security_cookie ^ &var_28
int32_t var_38 = arg2
void** var_40
void* var_20
int32_t* eax_3 = sub_4ce600(&var_20, var_40)
void** esi = sub_432330(arg1 + 0x3c, eax_3)
char eax_6

if (esi != *(arg1 + 0x3c))
    eax_6 = sub_412ca0(eax_3, &esi[4])

if (esi == *(arg1 + 0x3c) || eax_6 != 0)
    esi = *(arg1 + 0x3c)

int32_t var_c

if (var_c u>= 0x10)
    sub_403160(var_20, var_c + 1, 1)

if (esi == *(arg1 + 0x3c))
    int32_t eax_8
    eax_8.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_28)
    return eax_8

*(arg3 + 8) = esi[0xd]
*(arg3 + 0xc) = esi[0xe]
*(arg3 + 0x14) = esi[0x10]
*(arg3 + 0x18) = esi[0x11]
int32_t eax_12
eax_12.b = 1
@__security_check_cookie@4(eax_1 ^ &var_28)
return eax_12
