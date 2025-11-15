// 函数: sub_44d910
// 地址: 0x44d910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t var_c = __security_cookie ^ &var_28

if (*(arg1 + 4) == 0)
    int32_t eax_1
    eax_1.b = 0
    @__security_check_cookie@4(var_c ^ &var_28)
    return eax_1

void* var_24
sub_405070(&var_24, arg2)
void** esi = sub_432330(arg1 + 8, &var_24)
void** eax_2

if (esi != *(arg1 + 8))
    eax_2 = sub_412ca0(&var_24, &esi[4])

if (esi == *(arg1 + 8) || eax_2.b != 0)
    esi = *(arg1 + 8)

void* ebx_1
ebx_1.b = esi != *(arg1 + 8)
int32_t var_10

if (var_10 u>= 0x10)
    sub_403160(var_24, var_10 + 1, 1)

eax_2.b = ebx_1.b
@__security_check_cookie@4(var_c ^ &var_28)
return eax_2
