// 函数: sub_4efa90
// 地址: 0x4efa90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
char* esi = (**arg1)()
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
void* ecx

if (*esi != 0)
    char* ecx_1 = esi
    char* eax_3
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_20, esi, ecx)
void* esi_1 = sub_4a9b10(&var_20)

if (var_c u>= 0x10)
    j__free(var_20.d)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0

if (esi_1 == 0)
    void* eax_4
    eax_4.b = 0
    sub_69a5bc(eax_1 ^ &var_2c)
    return eax_4

int32_t var_28 = arg2
int32_t* var_24
int32_t** eax_5 = sub_42f3d0(esi_1 + 0x20, &var_24, &var_28)
eax_5.b = *(esi_1 + 0x20) != *eax_5
sub_69a5bc(eax_1 ^ &var_2c)
return eax_5
