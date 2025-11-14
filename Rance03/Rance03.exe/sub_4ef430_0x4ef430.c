// 函数: sub_4ef430
// 地址: 0x4ef430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_38
int32_t eax_1 = __security_cookie ^ &var_38
char* edx = (**arg1)()
int32_t var_24 = 0xf
int32_t var_28 = 0
var_38 = 0
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

sub_402110(&var_38, edx, ecx)
void* esi_2 = sub_4a9b10(&var_38)

if (var_24 u>= 0x10)
    j__free(var_38.d)

int32_t var_24_1 = 0xf
int32_t var_28_1 = 0
var_38 = 0

if (esi_2 == 0)
    void* result
    result.b = 0
    sub_69a5bc(eax_1 ^ &var_38)
    return result

void* var_20
sub_401f60(&var_20, (**arg2)())
int32_t ebx
ebx.b = sub_4c9e40(esi_2, &var_20)
int32_t var_c

if (var_c u>= 0x10)
    j__free(var_20)

sub_69a5bc(eax_1 ^ &var_38)
return ebx.b
