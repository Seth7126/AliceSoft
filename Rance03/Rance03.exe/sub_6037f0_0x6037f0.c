// 函数: sub_6037f0
// 地址: 0x6037f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_34
int32_t eax_1 = __security_cookie ^ &var_34
char* edx = (**arg3)()
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_7
    
    do
        eax_7.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_7.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_20, edx, ecx)
int32_t* ebx
ebx.b = sub_603120(&var_20, arg2, arg4, arg5, arg6, arg7, arg8, arg9)

if (var_c u>= 0x10)
    j__free(var_20.d)

sub_69a5bc(eax_1 ^ &var_34)
return ebx.b
