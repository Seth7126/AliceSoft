// 函数: sub_5a9930
// 地址: 0x5a9930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_28
int32_t eax_1 = __security_cookie ^ &var_28
char* edx = (**arg1)()
int32_t var_10 = 0xf
int32_t var_14 = 0
char var_24 = 0
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

sub_402110(&var_24, edx, ecx)
int32_t* var_34_1 = &var_28
char* eax_4 = &var_24

if (var_10 u>= 0x10)
    eax_4 = var_24.d

int32_t result
result.b = sub_69b31c(eax_4, 0x6dcf38) == 1
int32_t ebx
ebx.b = result.b == 0

if (var_10 u>= 0x10)
    result = j__free(var_24.d)

if (ebx.b == 0)
    sub_69a5bc(eax_1 ^ &var_28)
    return result

sub_69a5bc(eax_1 ^ &var_28)
return result
