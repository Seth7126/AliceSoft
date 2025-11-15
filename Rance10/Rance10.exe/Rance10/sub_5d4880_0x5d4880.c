// 函数: sub_5d4880
// 地址: 0x5d4880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
void* var_20
int32_t* eax_2 = sub_4051e0(&var_20, arg3)
void** eax_3 = sub_432330(arg1, eax_2)
void** edi_1 = *arg1
void** esi = eax_3
char eax_5

if (esi != edi_1)
    eax_5 = sub_412ca0(eax_2, &esi[4])

if (esi == edi_1 || eax_5 != 0)
    esi = edi_1

*arg2 = esi
int32_t var_c

if (var_c u>= 0x10)
    sub_403160(var_20, var_c + 1, 1)

@__security_check_cookie@4(eax_1 ^ &var_24)
return arg2
