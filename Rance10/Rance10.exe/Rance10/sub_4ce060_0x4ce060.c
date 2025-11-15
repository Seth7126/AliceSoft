// 函数: sub_4ce060
// 地址: 0x4ce060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_34 = arg2
void** var_3c
void* var_1c
sub_4ce600(&var_1c, var_3c)
void** eax_3 = sub_432330(arg1 + 0x3c, &var_1c)
void** edi = *(arg1 + 0x3c)
void** esi = eax_3
char eax_5

if (esi != edi)
    eax_5 = sub_412ca0(&var_1c, &esi[4])

if (esi == edi || eax_5 != 0)
    esi = edi

int32_t result

if (esi == edi)
    void** eax_6 = sub_432330(arg1 + 0x44, &var_1c)
    void** edi_1 = *(arg1 + 0x44)
    void** esi_1 = eax_6
    char eax_8
    
    if (esi_1 != edi_1)
        eax_8 = sub_412ca0(&var_1c, &esi_1[4])
    
    if (esi_1 == edi_1 || eax_8 != 0)
        esi_1 = edi_1
    
    if (esi_1 == edi_1)
        result = 0
    else
        result = esi_1[0xa]
else
    result = esi[0xa]

int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c, var_8 + 1, 1)

@__security_check_cookie@4(eax_1 ^ &var_20)
return result
