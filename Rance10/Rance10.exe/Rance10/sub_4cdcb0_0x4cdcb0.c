// 函数: sub_4cdcb0
// 地址: 0x4cdcb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_34
int32_t eax_1 = __security_cookie ^ &var_34
int32_t var_44 = arg2
void** var_4c
void** var_24
int32_t* eax_3 = sub_4ce600(&var_24, var_4c)
int32_t eax_4 = *(arg1 + 0x3c)
void** eax_5 = sub_432330(arg1 + 0x3c, eax_3)
void** edi_1 = *(arg1 + 0x3c)
void** esi_1 = eax_5
char eax_7

if (esi_1 != edi_1)
    eax_7 = sub_412ca0(eax_3, &esi_1[4])

if (esi_1 == edi_1 || eax_7 != 0)
    esi_1 = edi_1

int32_t var_10

if (var_10 u>= 0x10)
    var_4c = var_24
    sub_403160(var_4c, var_10 + 1, 1)

if (esi_1 != eax_4)
    int32_t eax_9
    eax_9.b = 1
    @__security_check_cookie@4(eax_1 ^ &var_34)
    return eax_9

int32_t var_44_3 = arg2
int32_t* eax_10 = sub_4ce600(&var_24, var_4c)
void** eax_11 = sub_432330(arg1 + 0x44, eax_10)
void** edi_2 = *(arg1 + 0x44)
void** esi_2 = eax_11

if (esi_2 != edi_2)
    eax_11 = sub_412ca0(eax_10, &esi_2[4])

if (esi_2 == edi_2 || eax_11.b != 0)
    esi_2 = edi_2

void* ebx_2
ebx_2.b = esi_2 != edi_2

if (var_10 u>= 0x10)
    sub_403160(var_24, var_10 + 1, 1)

eax_11.b = ebx_2.b
@__security_check_cookie@4(eax_1 ^ &var_34)
return eax_11
