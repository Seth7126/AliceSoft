// 函数: sub_4564b0
// 地址: 0x4564b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t var_c = __security_cookie ^ &var_28
int32_t var_10 = 0xf
bool cond:0 = *arg2 != 0
int32_t var_14 = 0
char var_24 = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg2
    int32_t eax_1
    
    do
        eax_1.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_1.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_24, arg2, ecx)
void** esi_2 = sub_432330(arg1 + 0x44, &var_24)
void** result

if (esi_2 != *(arg1 + 0x44))
    result = sub_412ca0(&var_24, &esi_2[4])

if (esi_2 == *(arg1 + 0x44) || result.b != 0)
    esi_2 = *(arg1 + 0x44)

int32_t* ebx_1
ebx_1.b = esi_2 != *(arg1 + 0x44)

if (var_10 u>= 0x10)
    sub_403160(var_24.d, var_10 + 1, 1)

result.b = ebx_1.b
@__security_check_cookie@4(var_c ^ &var_28)
return result
