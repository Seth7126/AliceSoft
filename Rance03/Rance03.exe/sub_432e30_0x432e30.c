// 函数: sub_432e30
// 地址: 0x432e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_20
int32_t eax_1 = __security_cookie ^ &var_20
char* edx = (**arg1)()
int32_t var_c = 0xf
int32_t var_10 = 0
var_20 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_3
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_20, edx, ecx)
void* eax_4 = sub_434b80(data_75d4bc + 0xc, &var_20)
int32_t result

if (eax_4 != 0)
    result = (*(eax_4 + 0x70) - *(eax_4 + 0x6c)) s>> 2
else
    result = 0

if (var_c u>= 0x10)
    j__free(var_20.d)

sub_69a5bc(eax_1 ^ &var_20)
return result
