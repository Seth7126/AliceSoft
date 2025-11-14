// 函数: sub_4efc10
// 地址: 0x4efc10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_24
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
void* eax_4 = sub_4a9b10(&var_20)

if (var_c u>= 0x10)
    j__free(var_20.d)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0

if (eax_4 == 0 || arg2 s< 0 || *(eax_4 + 0x24) s<= arg2)
    sub_69a5bc(eax_1 ^ &var_24)
    return 0

var_24 = **(eax_4 + 0x20)
void* var_30_3 = var_24
sub_43d250(&var_24, arg2)
int32_t result = *(var_24 + 0x10)
sub_69a5bc(eax_1 ^ &var_24)
return result
