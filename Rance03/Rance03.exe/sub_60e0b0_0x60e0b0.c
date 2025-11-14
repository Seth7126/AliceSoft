// 函数: sub_60e0b0
// 地址: 0x60e0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
(*(*arg1 + 0x10))()
int32_t ebx
ebx.b = arg3
int32_t eax_3
eax_3.b = ebx.b != 0
__builtin_memset(&var_1c, 0, 0x18)
var_1c:4.d = 2
var_1c:8.d = 2
var_1c:0xc.d = 0x10000
var_1c.d = ((eax_3 << 1) + 2) * arg2
int32_t* ecx = *(arg1[2] + 0x34)
int32_t result

if ((*(*ecx + 0xc))(ecx, &var_1c, 0, &arg1[3]) s< 0)
    result.b = 0
    sub_69a5bc(eax_1 ^ &var_1c)
    return result

result.b = 1
arg1[7] = arg2
arg1[8].b = ebx.b
sub_69a5bc(eax_1 ^ &var_1c)
return result
