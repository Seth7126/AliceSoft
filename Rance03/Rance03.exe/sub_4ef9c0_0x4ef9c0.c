// 函数: sub_4ef9c0
// 地址: 0x4ef9c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_2c
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
void* result = sub_4a9b10(&var_20)
void* result_1 = result

if (var_c u>= 0x10)
    result = j__free(var_20.d)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0

if (result_1 != 0)
    var_2c = arg2
    int32_t* var_28
    sub_4ccfb0(result_1 + 0x20, &var_28, &var_2c)
    int32_t var_24
    result = sub_4200d0(result_1 + 0x20, &var_2c, var_28, var_24)

sub_69a5bc(eax_1 ^ &var_2c)
return result
