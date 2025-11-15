// 函数: sub_499050
// 地址: 0x499050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t var_c = __security_cookie ^ &var_28
int32_t* result_1 = 0xf
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
void** esi_2 = sub_432330(arg1 + 4, &var_24)
char eax_4

if (esi_2 != *(arg1 + 4))
    eax_4 = sub_412ca0(&var_24, &esi_2[4])

if (esi_2 == *(arg1 + 4) || eax_4 != 0)
    esi_2 = *(arg1 + 4)

int32_t* result = result_1

if (result u>= 0x10)
    result = sub_403160(var_24.d, result + 1, 1)

if (esi_2 != *(arg1 + 4))
    result = sub_44e100(arg1 + 4, &var_28, esi_2)

@__security_check_cookie@4(var_c ^ &var_28)
return result
