// 函数: sub_453270
// 地址: 0x453270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** var_28
int32_t var_c = __security_cookie ^ &var_28
int32_t var_10 = 0xf
bool cond:0 = *arg2 != 0
int32_t var_14 = 0
char var_24 = 0
void* ecx

if (cond:0)
    int32_t* ecx_1 = arg2
    void* esi_1 = ecx_1 + 1
    int32_t eax_1
    
    do
        eax_1.b = *ecx_1
        ecx_1 += 1
    while (eax_1.b != 0)
    ecx = ecx_1 - esi_1
else
    ecx = nullptr

sub_402110(&var_24, arg2, ecx)
void** eax_2 = sub_417ed0(arg1 + 0x14, &var_24)
char eax_4

if (eax_2 != *(arg1 + 0x14))
    eax_4 = sub_40c3a0(&var_24, &eax_2[4])

if (eax_2 == *(arg1 + 0x14) || eax_4 != 0)
    var_28 = *(arg1 + 0x14)
else
    var_28 = eax_2

void** esi_3 = var_28

if (var_10 u>= 0x10)
    j__free(var_24.d)

int32_t var_10_1 = 0xf
int32_t var_14_1 = 0
var_24 = 0

if (esi_3 == *(arg1 + 0x14))
    sub_69a5bc(var_c ^ &var_28)
    return 0

int32_t result = esi_3[0xa]
sub_69a5bc(var_c ^ &var_28)
return result
