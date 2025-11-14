// 函数: sub_4eefc0
// 地址: 0x4eefc0
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
void* result = sub_4a9b10(&var_20)
void* result_1 = result

if (var_c u>= 0x10)
    result = j__free(var_20.d)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0

if (result_1 != 0)
    sub_418220(*(*(result_1 + 0x10) + 4))
    void* eax_5 = *(result_1 + 0x10)
    *(eax_5 + 4) = eax_5
    int32_t* eax_6 = *(result_1 + 0x10)
    *eax_6 = eax_6
    result = *(result_1 + 0x10)
    *(result + 8) = result
    *(result_1 + 0x14) = 0

sub_69a5bc(eax_1 ^ &var_20)
return result
