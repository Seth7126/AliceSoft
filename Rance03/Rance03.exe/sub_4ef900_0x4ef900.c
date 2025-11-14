// 函数: sub_4ef900
// 地址: 0x4ef900
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
void* result
int32_t ecx_3
result, ecx_3 = sub_4a9b10(&var_20)
void* result_1 = result

if (var_c u>= 0x10)
    result, ecx_3 = j__free(var_20.d)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0

if (result_1 != 0)
    uint32_t var_38_3 = zx.d(data_75dd2a)
    var_2c = arg2
    int32_t* var_3c_1 = &var_2c
    int32_t** var_28
    result = sub_4ce350(result_1 + 0x20, &var_28, ecx_3)

sub_69a5bc(eax_1 ^ &var_2c)
return result
