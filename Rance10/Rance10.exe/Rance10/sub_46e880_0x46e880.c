// 函数: sub_46e880
// 地址: 0x46e880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_28
int32_t eax_1 = __security_cookie ^ &var_28
char var_24
char* eax_2 = sub_462db0(&var_24, arg2)
var_28 = eax_2
void** esi = sub_432330(arg1 + 4, eax_2)
char eax_5

if (esi != *(arg1 + 4))
    eax_5 = sub_412ca0(var_28, &esi[4])

if (esi == *(arg1 + 4) || eax_5 != 0)
    esi = *(arg1 + 4)

int32_t var_10

if (var_10 u>= 0x10)
    sub_403160(var_24.d, var_10 + 1, 1)

int32_t var_10_1 = 0xf
int32_t var_14 = 0
var_24 = 0

if (esi == *(arg1 + 4))
    int32_t eax_7
    eax_7.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_28)
    return eax_7

int32_t* ecx_4 = esi[0xa]

if (ecx_4 != 0)
    (**ecx_4)(1)

sub_46f200(arg1 + 4, &var_28, esi)
int32_t* eax_9
eax_9.b = 1
@__security_check_cookie@4(eax_1 ^ &var_28)
return eax_9
