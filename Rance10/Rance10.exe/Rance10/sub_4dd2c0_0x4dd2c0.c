// 函数: sub_4dd2c0
// 地址: 0x4dd2c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t var_34 = arg3
int32_t var_20 = 0
void** var_3c
char var_1c
int32_t* eax_3 = sub_4ce600(&var_1c, var_3c)
var_24 = eax_3
void** esi = sub_432330(arg1 + 0x10, eax_3)
char eax_6

if (esi != *(arg1 + 0x10))
    eax_6 = sub_412ca0(var_24, &esi[4])

if (esi == *(arg1 + 0x10) || eax_6 != 0)
    esi = *(arg1 + 0x10)

int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c.d, var_8 + 1, 1)

int32_t var_8_1 = 0xf
int32_t var_c = 0
var_1c = 0

if (esi != *(arg1 + 0x10))
    void** eax_9 = esi[0xa]
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_403590(arg2, eax_9, 0, 0xffffffff)
else
    sub_403360(arg2, 0x75d0b6)

@__security_check_cookie@4(eax_1 ^ &var_24)
return arg2
