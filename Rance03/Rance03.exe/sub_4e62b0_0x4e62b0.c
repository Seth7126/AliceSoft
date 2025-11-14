// 函数: sub_4e62b0
// 地址: 0x4e62b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
void** esi = arg3

if (*(arg1 + 0x38) == 0)
    int32_t* result
    result.b = 0
    sub_69a5bc(eax_1 ^ &var_24)
    return result

int32_t var_20
char* eax_2 = sub_4e5810(arg1, &var_20, arg2)
BOOL ecx_2 = esi[4]

if (esi[5] u>= 0x10)
    esi = *esi

int32_t ebx
ebx.b = sub_604c80(eax_2, esi, ecx_2)
int32_t var_c

if (var_c u>= 0x10)
    j__free(var_20)

sub_69a5bc(eax_1 ^ &var_24)
return ebx.b
