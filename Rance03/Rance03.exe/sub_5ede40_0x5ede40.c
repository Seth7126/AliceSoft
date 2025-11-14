// 函数: sub_5ede40
// 地址: 0x5ede40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_24
int32_t eax_1 = __security_cookie ^ &var_24
char* edx_1 = (**arg1)()
int32_t var_10 = 0xf
int32_t var_14 = 0
var_24 = 0
void* ecx

if (*edx_1 != 0)
    char* ecx_1 = edx_1
    char* eax_3
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_24, edx_1, ecx)
char* eax_4 = &var_24
int32_t edx
int32_t var_34_1 = edx

if (var_10 u>= 0x10)
    eax_4 = var_24.d

int32_t ebx
ebx.b = sub_69b31c(eax_4, 0x6dcf38) == 1

if (var_10 u>= 0x10)
    j__free(var_24.d)

int32_t result
result.b = ebx.b
sub_69a5bc(eax_1 ^ &var_24)
return result
