// 函数: sub_4edd10
// 地址: 0x4edd10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
char* edx = (**arg1)()
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
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
int32_t ebx
ebx.b = sub_4cf920(data_75d4fc + 0x164, &var_20)

if (var_c u>= 0x10)
    j__free(var_20.d)

sub_69a5bc(eax_1 ^ &var_24)
return ebx.b
