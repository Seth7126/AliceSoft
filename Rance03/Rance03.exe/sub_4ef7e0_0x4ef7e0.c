// 函数: sub_4ef7e0
// 地址: 0x4ef7e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_40
int32_t eax_1 = __security_cookie ^ &var_40
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
void* eax_4 = sub_4a9b10(&var_38)

if (var_24 u>= 0x10)
    j__free(var_38.d)

int32_t var_24_1 = 0xf
int32_t var_28_1 = 0
var_38 = 0

if (eax_4 == 0)
    sub_69a5bc(eax_1 ^ &var_40)
    return 0

int32_t var_20
sub_401f60(&var_20, (**arg2)())
void** eax_8 = sub_417ed0(eax_4 + 0x18, &var_20)
char eax_10

if (eax_8 != *(eax_4 + 0x18))
    eax_10 = sub_40c3a0(&var_20, &eax_8[4])

void** var_3c

if (eax_8 == *(eax_4 + 0x18) || eax_10 != 0)
    var_3c = *(eax_4 + 0x18)
else
    var_3c = eax_8

int32_t result

if (var_3c != *(eax_4 + 0x18))
    result = var_3c[0xe]
else
    result = 0

int32_t var_c

if (var_c u>= 0x10)
    j__free(var_20)

sub_69a5bc(eax_1 ^ &var_40)
return result
