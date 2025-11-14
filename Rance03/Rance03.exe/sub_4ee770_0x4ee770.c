// 函数: sub_4ee770
// 地址: 0x4ee770
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
void* esi_2 = sub_4a9b10(&var_20)

if (var_c u>= 0x10)
    j__free(var_20.d)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0

if (esi_2 == 0)
    void* eax_4
    eax_4.b = 0
    sub_69a5bc(eax_1 ^ &var_20)
    return eax_4

sub_418220(*(*(esi_2 + 8) + 4))
void* eax_6 = *(esi_2 + 8)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(esi_2 + 8)
*eax_7 = eax_7
void* eax_8 = *(esi_2 + 8)
*(eax_8 + 8) = eax_8
eax_8.b = 1
*(esi_2 + 0xc) = 0
sub_69a5bc(eax_1 ^ &var_20)
return eax_8
