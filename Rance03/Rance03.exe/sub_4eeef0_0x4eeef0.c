// 函数: sub_4eeef0
// 地址: 0x4eeef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_3c
int32_t eax_1 = __security_cookie ^ &var_3c
char* edx = (**arg1)()
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
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
void* result = sub_4a9b10(&var_38)
void* result_1 = result

if (var_24 u>= 0x10)
    result = j__free(var_38.d)

int32_t var_24_1 = 0xf
int32_t var_28_1 = 0
var_38 = 0

if (result_1 != 0)
    void* var_20
    sub_401f60(&var_20, (**arg2)())
    result = sub_4c9d90(result_1, &var_20)
    int32_t var_c
    
    if (var_c u>= 0x10)
        result = j__free(var_20)

sub_69a5bc(eax_1 ^ &var_3c)
return result
